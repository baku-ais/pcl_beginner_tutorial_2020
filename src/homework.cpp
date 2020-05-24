#include <iostream>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/filters/passthrough.h>
#include <pcl/visualization/cloud_viewer.h>

const std::string pcd_path = "../pcd_file/ais_room.pcd";

using namespace std;

int main(int argc, char** argv){
  pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);

  pcl::visualization::CloudViewer viewer("Cloud Viewer");
  pcl::io::loadPCDFile<pcl::PointXYZRGB>(pcd_path, *cloud);

// ここで点群処理を行う



  while(!viewer.wasStopped()){
    viewer.showCloud(cloud_filtered);
  }

  return 0;
}
