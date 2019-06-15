cmake_minimum_required(VERSION 2.8)

project(demo4)

#message(${CMAKE_MODULE_PATH})

# 这个只能找到src下的.cpp文件,文件夹不会加载到DIR_SRCS中
aux_source_directory(src DIR_SRCS)
# 设置头文件所在的位置
include_directories(include)

set(CMAKE_BUILD_TYPE "Release")

# 相当于到src/msg中寻找CMakeLists.txt文件,将文件编译到对应的文件夹中
add_subdirectory(msg)

# 生成动态库
# add_library(msg SHARED src/msg/msg.cpp)

# 生成可执行文件
add_executable(${PROJECT_NAME} ${DIR_SRCS})

# 添加可执行文件所依赖的库
target_link_libraries(${PROJECT_NAME} msg)
