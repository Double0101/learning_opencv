cmake_minimum_required ( VERSION 2.8 )

project ( example )

find_package ( OpenCV REQUIRED )

add_executable ( example0201-1 example0201-1.cpp )
# add_executable ( example0201-2 example0201-2.c ) 
add_executable ( example0202 example0202.cpp )
add_executable ( example0204 example0204.cpp )
add_executable ( example0205 example0205.cpp )
add_executable ( example0206 example0206.cpp )
add_executable ( example0210 example0210.cpp )
add_executable ( example0211 example0211.cpp )

target_link_libraries ( example0201-1 ${OpenCV_LIBS} )
# target_link_libraries ( example0201-2 ${OpenCV_LIBS} )
target_link_libraries ( example0202 ${OpenCV_LIBS} )
target_link_libraries ( example0204 ${OpenCV_LIBS} )
target_link_libraries ( example0205 ${OpenCV_LIBS} )
target_link_libraries ( example0206 ${OpenCV_LIBS} )
target_link_libraries ( example0210 ${OpenCV_LIBS} )
target_link_libraries ( example0211 ${OpenCV_LIBS} )
