cmake_minimum_required(VERSION 2.8)

aux_source_directory(. MSG_SRCS)

# 设置生成的可执行文件/库的生成路径
# set(EXECUTABLE_OUTPUT_PATH ./msg)
# 或者
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./msg)

set(ARCHIVE_OUTPUT_PATH ./archive)
set(LIBRARY_OUTPUT_PATH ./library)

add_library(msg SHARED ${MSG_SRCS})
