#include <iostream>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/filters/passthrough.h>
#include <pcl/visualization/cloud_viewer.h>

// PCDデータのディレクトリを指定
const std::string pcd_path = "../pcd_file/ais_room.pcd";

int main()
{
  // PCDデータを格納する変数名を宣言
  pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);

  // 可視化の窓口を定義
  pcl::visualization::CloudViewer viewer("viewer");

  // PCDデータを読み込み
  pcl::io::loadPCDFile<pcl::PointXYZRGB>(pcd_path, *cloud);

  // PCDデータを表示
  while(!viewer.wasStopped()){
    viewer.showCloud(cloud);
  }

  return 0;
}
