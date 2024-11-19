cmake_minimum_required(VERSION 3.6)
project(MaskRCNNUsageExample)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11") Current directory as
# working directory.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
# find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

# if(CMAKE_SYSTEM_NAME MATCHES "Linux") set(CURRENT_SYSTEM "Linux")
# elseif(CMAKE_SYSTEM_NAME MATCHES "Windows") set(CURRENT_SYSTEM "Windows")
# elseif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD") set(CURRENT_SYSTEM "FreeBSD")
# endif()

# --------------------------------#
include(cmake/myprojectsetting.cmake)
# --------------------------------#

# install
include(CMakePackageConfigHelpers)

# aux_source_directory(./  sourceAll ) file(GLOB_RECURSE  ./*.cpp
# all_source_files )

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
  set(CV_DIR_ROOT_MY /home/alex/installCv3414Ubun2104FullNew)
  set(OpenCV_DIR ${CV_DIR_ROOT_MY}/share/OpenCV)
  find_package(opencv PATHS ${CV_DIR_ROOT_MY})
  include_directories(
    ${CV_DIR_ROOT_MY}/include ${CV_DIR_ROOT_MY}/include/opencv
    ${CV_DIR_ROOT_MY}/include/opencv2)
  link_directories(${CV_DIR_ROOT_MY}/lib)
  set(Opencv_rot_my ~/installCv3414Ubun2104FullNew)
  set(OpenCV_DIR ${Opencv_rot_my}/share/OpenCV)
  find_package(opencv PATHS ${Opencv_rot_my}/share/OpenCV)
  set(depLibs
      libopencv_core.so
      libopencv_highgui.so
      libopencv_imgcodecs.so
      libopencv_imgproc.so
      libopencv_videoio.so
      libopencv_ml.so
      libopencv_features2d.so
      libopencv_flann.so
      libopencv_objdetect.so
      libopencv_dnn.so
      libopencv_tracking.so
      libopencv_video.so
      libopencv_videostab.so
      libopencv_xfeatures2d.so
      -L./
      libdarknet.so
      libpthread.so.0)
  link_directories(deps_linux/lib)
  # find_package(   opencv    REQUIRED    )
  link_directories(/usr/lib/x86_64-linux-gnu)
  # /usr/include/opencv4/opencv2/dnn/all_layers.hpp
  include_directories(/usr/include/opencv4)
  include_directories(OpenImgTest)
elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
  add_definitions(-DLIB_EXPORTS)
  set(OpencV_ROOT_DIR "../deps/cv3416/build")
  set(OpenCV_DIR "${OpencV_ROOT_DIR}\\x64\\vc15\\lib")
  find_package(OpenCV REQUIRED PATHS "${OpencV_ROOT_DIR}") # EXACT 3.4.13
  include_directories(
    ${OpenCV_INCLUDE_DIRS} ${OpencV_ROOT_DIR}/include
    ${OpencV_ROOT_DIR}/include/opencv2/imgproc
    ${OpencV_ROOT_DIR}/include/opencv)
  link_directories(${OpenCV_LIBRARY_DIRS} ${OpencV_ROOT_DIR}\\x64\\vc15\\lib)
  set(depLibs ${OpenCV_LIBS} # opencv_world3413d
      # OpenMP::OpenMP_CXX
  )
endif()

# FIND_PACKAGE( OpenMP REQUIRED) if(OPENMP_FOUND) message("OPENMP FOUND")
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}") set(CMAKE_CXX_FLAGS
# "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}") set(CMAKE_EXE_LINKER_FLAGS
# "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}") endif()

# set(HEADERS adaboost_my.h  features_my.h )
set(SOURCES main.cpp)

aux_source_directory(./ sourceList_objDet)
include_directories(./)

set(SOURCE_FILES main.cpp)

# set( EXECUTABLE_OUTPUT_PATH    ${CMAKE_BINARY_DIR}/../bin) set(
# LIBRARY_OUTPUT_DIRECTORY      ${CMAKE_BINARY_DIR}/../lib)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)

add_executable(MaskRCNNUsageExample ${sourceList_objDet} ${sourceList_objDet}
                                    ${HEADERS})

# OpenCV 3 is required. find_package(OpenCV REQUIRED)
target_link_libraries(
  MaskRCNNUsageExample
  # PRIVATE Qt${QT_VERSION_MAJOR}::Widgets ${OpenCV_LIBS}
  ${depLibs}
  # -lstdc++ -ljpeg   -lX11 -lpthread  -lpng  -ljpeg  -lpng16
  ${OpenCV_LIBS})

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/../bin)
