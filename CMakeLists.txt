cmake_minimum_required ( VERSION 2.8 )

project ( example )

find_package ( OpenCV REQUIRED )

add_executable ( example0201-1 example0201-1.cpp )
# add_executable ( example0201-2 example0201-2.c ) 

target_link_libraries ( example0201-1 ${OpenCV_LIBS} )
# target_link_libraries ( example0201-2 ${OpenCV_LIBS} )
