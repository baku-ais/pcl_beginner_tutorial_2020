cmake_minimum_required(VERSION 2.6 FATAL_ERROR)					# コメント
project(pcl_beginner_tutorial_2020)										# プロジェクト名
find_package(catkin REQUIRED COMPONENTS
  std_msgs
  roscpp
  rospy
)

find_package(PCL 1.7 REQUIRED)									# パッケージの探索
include_directories(${PCL_INCLUDE_DIRS})						# インクルードディレクトリの設定
link_directories(${PCL_LIBRARY_DIRS})							# ライブラリディレクトリの設定
add_definitions(${PCL_DEFINITIONS})								# マクロの定義

catkin_package()

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

## cmakeでビルドする場合
# add_executable(pcd_viewer src/pcd_viewer.cpp)
# target_link_libraries(pcd_viewer ${PCL_LIBRARIES})

add_executable(pcd_viewer src/pcd_viewer.cpp)
target_link_libraries(pcd_viewer ${catkin_LIBRARIES} ${PCL_LIBRARIES})

# 上の2行をまねし，homework.cppのadd_executableとtarget_link_librariesを書こう
