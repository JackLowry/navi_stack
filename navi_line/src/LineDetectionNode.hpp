#ifndef LINE_DETECTION_NODE_HPP_
#define LINE_DETECTION_NODE_HPP_

#include <string>
#include <vector>

#include <ros/ros.h>
#include <boost/smart_ptr.hpp>
#include <opencv/cv.h>
#include <pcl_ros/point_cloud.h>
#include <pcl/point_types.h>
#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
#include <image_geometry/pinhole_camera_model.h>
#include <image_transport/image_transport.h>
#include <sensor_msgs/CameraInfo.h>
#include <sensor_msgs/Image.h>
#include <tf/transform_listener.h>

#include <sensor_msgs/CameraInfo.h>
#include <sensor_msgs/Image.h>
#include <stereo_plane/Plane.h>

#include <message_filters/subscriber.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <image_transport/subscriber_filter.h>
#include <message_filters/time_synchronizer.h>

namespace line_node {

namespace it = image_transport;
namespace mf = message_filters;

using sensor_msgs::CameraInfo;
using sensor_msgs::Image;
using stereo_plane::Plane;

typedef pcl::PointCloud<pcl::PointXYZ> PointCloudXYZ;
typedef mf::sync_policies::ApproximateTime<Image, CameraInfo, Plane> Policy;

class LineNodelet {
public:
	// nodelet conversion
	LineNodelet(void);
	ros::NodeHandle &getNodeHandle(void);
	ros::NodeHandle &getPrivateNodeHandle(void);
	virtual void onInit(void);
	// nodelet conversion

	void SetCutoffWidth(int  width);
	void SetDeadWidth(double width);
	void SetLineWidth(double width);
	void SetInvert(bool invert);
	void SetGroundPlane(stereo_plane::Plane plane);
	void SetResolution(int width, int height);
	void SetThreshold(double threshold);

	void EstimateNormal(cv::Mat src, cv::Point2d &normal, cv::Point2i pt);

	/**
	 * Use a matched pulse-width filter to search for lines of the appropriate
	 * width in the image. This the output of this is an image with the same
	 * resolution as the input, where high values indicate a strong filter
	 * response and low values indicate a weak filter response.
	 *
	 * \param src     grayscale input image with type CV_64FC1
	 * \param dst_hor horizontal filter response of type CV_64FC1
	 * \param dst_ver vertical filter response of type CV_64FC1
	 */
	void MatchedFilter(cv::Mat src, cv::Mat &dst_hor, cv::Mat &dst_ver);

	void BlurFilter(cv::Mat src, cv::Mat dst, int width, bool horizontal);

	/**
	 * Apply non-maximal supression to the output of the matched pulse-width
	 * filter to reduce the amount of data.
	 *
	 * \param src_hor horizontal filter response from MatchedFilter()
	 * \param src_ver vertical filter response from MatchedFilter()
	 * \param pts list of local maxima in the filter response
	 */
	void NonMaxSupr(cv::Mat src_hor, cv::Mat src_ver,
	                pcl::PointCloud<pcl::PointXYZ> &dst, cv::Mat &mask);

	/**
	 * Update cached information to match the current algorithmic parameters.
	 */
	void UpdateCache(void);

	void ImageCallback(sensor_msgs::Image::ConstPtr const &msg_img,
	                   sensor_msgs::CameraInfo::ConstPtr const &msg_cam,
	                   stereo_plane::Plane::ConstPtr const &msg_plane);

protected:
	struct Offset {
		int neg, pos;
	};

	ros::NodeHandle nh, nh_priv;

	void TransformPlane(Plane const &src, Plane &dst, std::string frame_id);

	cv::Point3d GetGroundPoint(Plane const &plane, cv::Point2d pt);
	double ProjectDistance(Plane const &plane, cv::Point2d pt, cv::Point3d offset);
	double ReprojectDistance(Plane const &plane, cv::Point2d pt, cv::Point2d offset);
	int GeneratePulseFilter(Plane const &plane, cv::Point3d dw, cv::Mat &kernel, std::vector<Offset> &offsets);
	void PulseFilter(cv::Mat src, cv::Mat &dst, cv::Mat kernel,
	                 std::vector<Offset> const &offsets, bool horizontal);
	bool GetTFPlane(ros::Time stamp, std::string fr_fixed, std::string fr_ground, Plane &plane);

private:
	bool m_debug;
	bool m_invert;
	bool m_valid;
	int m_rows;
	int m_cols;
	int m_blur_size;
	size_t m_num_prev;
	double m_width_dead;
	double m_width_line;
	int    m_width_cutoff;
	int m_threshold;
	stereo_plane::Plane m_plane;

	// static ground plane
	bool m_cache;
	bool m_cache_ready;
	Plane m_cache_plane;
	std::string m_fr_camera;
	std::string m_fr_ground;

	int                 m_horizon_ver, m_horizon_hor;
	cv::Mat             m_kernel_ver,  m_kernel_hor;
	std::vector<Offset> m_offset_ver,  m_offset_hor;

	ros::NodeHandle m_nh;
	image_geometry::PinholeCameraModel m_model;
	boost::shared_ptr<tf::TransformListener> m_tf;

	ros::Publisher m_pub_pts;
	it::ImageTransport         *m_it;
	it::SubscriberFilter       *m_sub_img;
	mf::Subscriber<CameraInfo> *m_sub_info;
	mf::Subscriber<Plane>      *m_sub_plane;
	mf::Synchronizer<Policy>   *m_sub;

	// Debug topics; only enabled if m_debug is true.
	image_transport::Publisher m_pub_filter_hor;
	image_transport::Publisher m_pub_filter_ver;
	image_transport::Publisher m_pub_ker_hor;
	image_transport::Publisher m_pub_ker_ver;
	image_transport::Publisher m_pub_maxima;
};
};
#endif
