cmake_minimum_required(VERSION 2.8)

aux_source_directory(. MSG_SRCS)

add_library(msg SHARED ${MSG_SRCS})
