cmake_minimum_required(VERSION 3.6)
project(  MaskRCNNUsageExample   )
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
# Current directory as working directory.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)


#if(CMAKE_SYSTEM_NAME MATCHES "Linux")
#    set(CURRENT_SYSTEM "Linux")
#elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
#    set(CURRENT_SYSTEM "Windows")
#elseif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
#    set(CURRENT_SYSTEM "FreeBSD")
#endif()

IF (CMAKE_SYSTEM_NAME MATCHES "Linux")
ELSEIF (CMAKE_SYSTEM_NAME MATCHES "Windows")
ELSEIF (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
ELSE ()
    MESSAGE(STATUS "other platform: ${CMAKE_SYSTEM_NAME}")
ENDIF (CMAKE_SYSTEM_NAME MATCHES "Linux")

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    # using Clang
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    # using GCC
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
    # using Intel C++
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    # using Visual Studio C++
endif()

#cmake.exe -G "MinGW Makefiles"

IF (CMAKE_SYSTEM_NAME MATCHES "Linux")
    MESSAGE(STATUS "current platform: Linux ")
ELSEIF (CMAKE_SYSTEM_NAME MATCHES "Windows")
    MESSAGE(STATUS "current platform: Windows")
ELSEIF (CMAKE_SYSTEM_NAME MATCHES "Darwin")
    MESSAGE(STATUS "current platform: Mac OS X")
ELSE ()
    MESSAGE(STATUS "other platform: ${CMAKE_SYSTEM_NAME}")
ENDIF (CMAKE_SYSTEM_NAME MATCHES "Linux")

#cmake_host_system_information(RESULT PRETTY_NAME QUERY DISTRIB_PRETTY_NAME)
#message(STATUS "${PRETTY_NAME}")

#cmake_host_system_information(RESULT DISTRO QUERY DISTRIB_INFO)
#foreach(VAR IN LISTS DISTRO)
    #message(STATUS "${VAR}=`${${VAR}}`")
#endforeach()

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
if(MSVC)
#    set(CMAKE_DEBUG_POSTFIX "d")
#    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  /source-charset:utf-8 /execution-charset:utf-8")
#    set(  CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /fexec-charset=utf-8  /source-charset=utf-8 /execution-charset=utf-8")
    #  set(  CMAKE_CXX_FLAGS   "${CMAKE_CXX_FLAGS}  /utf-8 /fexec-charset=utf-8"    )
    #    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
    #     set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -fexec-charset=GBK")
else()
#    set(  CMAKE_CXX_FLAGS   "${CMAKE_CXX_FLAGS}    -fexec-charset=utf-8"    )
endif()
#link_directories(${CMAKE_BINARY_DIR} )

message( "CMAKE_C_COMPILER = ${CMAKE_C_COMPILER}"  )
message( "CMAKE_C_COMPILER_VERSION = ${CMAKE_C_COMPILER_VERSION}"  )
message( "CMAKE_CXX_PLATFORM_ID = ${CMAKE_CXX_PLATFORM_ID}"  )
message( "CMAKE_CXX_COMPILER_TARGET = ${CMAKE_CXX_COMPILER_TARGET}"  )
message( "CMAKE_CXX_COMPILER_AR = ${CMAKE_CXX_COMPILER_AR}"  )
message( "CMAKE_C_COMPILER_ABI = ${CMAKE_C_COMPILER_ABI}"  )
message( "CMAKE_C_COMPILER_TARGET = ${CMAKE_C_COMPILER_TARGET}"  )
message( "CMAKE_HOST_SYSTEM = ${CMAKE_HOST_SYSTEM}"  )
message( "CMAKE_HOST_SYSTEM_NAME = ${CMAKE_HOST_SYSTEM_NAME}"  )
message( "CMAKE_VS_PLATFORM_NAME = ${CMAKE_VS_PLATFORM_NAME}"  )
message( "CMAKE_VS_PLATFORM_TOOLSET = ${CMAKE_VS_PLATFORM_TOOLSET}"  )
message( "CMAKE_CXX_COMPILER_VERSION = ${CMAKE_CXX_COMPILER_VERSION}"  )
#message(  "CMAKE_CXX_COMPILER_TARGET= ${CMAKE_CXX_COMPILER_TARGET}"   )
#message(  "CMAKE_CXX_COMPILER_TARGET= ${CMAKE_CXX_COMPILER_TARGET}"   )
message(  "CMAKE_CXX_COMPILER_ABI= ${CMAKE_CXX_COMPILER_ABI}"   )
message(  "CMAKE_CXX_COMPILER_EXTERNAL_TOOLCHAIN= ${CMAKE_CXX_COMPILER_EXTERNAL_TOOLCHAIN}"   )
message(  "CMAKE_CXX_COMPILER_ID= ${CMAKE_CXX_COMPILER_ID}"   )
message(  "CMAKE_CXX_COMPILER_ARCHITECTURE_ID= ${CMAKE_CXX_COMPILER_ARCHITECTURE_ID}"   )
#message(  "CMAKE_HOST_SYSTEM_NAME= ${CMAKE_HOST_SYSTEM_NAME}"   )
message(  "CMAKE_CXX_STANDARD= ${CMAKE_CXX_STANDARD}"   )
message(  "CMAKE_C_STANDARD= ${CMAKE_C_STANDARD}"   )
message(  "CMAKE_Fortran_COMPILER_ID= ${CMAKE_Fortran_COMPILER_ID}"   )
message(  "CMAKE_CXX_STANDARD= ${CMAKE_CXX_STANDARD}"   )
message(  "CMAKE_C_STANDARD= ${CMAKE_C_STANDARD}"   )
message(  "CMAKE_OSX_ARCHITECTURES= ${CMAKE_OSX_ARCHITECTURES}"   )
message(  "CMAKE_SYSTEM_PROCESSOR= ${CMAKE_SYSTEM_PROCESSOR}"   )
message(  "CMAKE_HOST_SYSTEM_PROCESSOR= ${CMAKE_HOST_SYSTEM_PROCESSOR}"   )
message(  "CMAKE_CUDA_ARCHITECTURES= ${CMAKE_CUDA_ARCHITECTURES}"   )

# 鏀瑰彉瀹夎璺緞鍙互浣跨敤涓嬮潰鐨勮鍙ワ紝Unix: "/usr/local", Windows: "c:/Program Files/${PROJECT_NAME}" 涓洪粯璁ゅ€硷紝鎵€鏈夌殑DESTINATION鍧囦互姝ょ洰褰曚负鏍圭洰褰?
# set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/mymath)
#set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/../${PROJECT_NAME}_${PROJECT_VERSION}_${CMAKE_HOST_SYSTEM}_${CMAKE_CXX_COMPILER_ID}_${CMAKE_CXX_COMPILER_VERSION}_install)
#set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/../${PROJECT_NAME}_${PROJECT_VERSION}_${CMAKE_HOST_SYSTEM_NAME}_${CMAKE_CXX_PLATFORM_ID}_${CMAKE_CXX_COMPILER_ID}_${CMAKE_CXX_COMPILER_VERSION}_${CMAKE_Fortran_COMPILER_ID}_${CMAKE_Fortran_COMPILER_VERSION}_CXX_${CMAKE_CXX_STANDARD}_${CMAKE_SYSTEM_PROCESSOR}_install)
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/../${PROJECT_NAME}_${PROJECT_VERSION}_${CMAKE_CXX_COMPILER_ID}_${CMAKE_CXX_COMPILER_VERSION}_${CMAKE_Fortran_COMPILER_ID}_${CMAKE_Fortran_COMPILER_VERSION}_CXX_${CMAKE_CXX_STANDARD}_${CMAKE_SYSTEM_PROCESSOR}_install)

set(OUTPUT_DIR_KENT   ${CMAKE_BINARY_DIR}/../${PROJECT_NAME}_${PROJECT_VERSION}_${CMAKE_CXX_COMPILER_ID}_${CMAKE_CXX_COMPILER_VERSION}_${CMAKE_Fortran_COMPILER_ID}_${CMAKE_Fortran_COMPILER_VERSION}_CXX_${CMAKE_CXX_STANDARD}_${CMAKE_SYSTEM_PROCESSOR}_bin )
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY   ${OUTPUT_DIR_KENT} )
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY    ${OUTPUT_DIR_KENT} )
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY    ${OUTPUT_DIR_KENT} )

# install
include(CMakePackageConfigHelpers)

# aux_source_directory(./  sourceAll )
# file(GLOB_RECURSE  ./*.cpp  all_source_files )


if(CMAKE_SYSTEM_NAME MATCHES "Linux")
    set(CV_DIR_ROOT_MY   /home/alex/installCv3414Ubun2104FullNew   )
    set(OpenCV_DIR     ${CV_DIR_ROOT_MY}/share/OpenCV     )
    find_package(   opencv    PATHS    ${CV_DIR_ROOT_MY}   )
    include_directories(
        ${CV_DIR_ROOT_MY}/include
        ${CV_DIR_ROOT_MY}/include/opencv
        ${CV_DIR_ROOT_MY}/include/opencv2
        )
    link_directories(  ${CV_DIR_ROOT_MY}/lib )
    set(Opencv_rot_my   ~/installCv3414Ubun2104FullNew  )
    set(OpenCV_DIR     ${Opencv_rot_my}/share/OpenCV     )
    find_package(   opencv    PATHS    ${Opencv_rot_my}/share/OpenCV    )
    set(depLibs     libopencv_core.so   libopencv_highgui.so  libopencv_imgcodecs.so
        libopencv_imgproc.so   libopencv_videoio.so     libopencv_ml.so
        libopencv_features2d.so  libopencv_flann.so  libopencv_objdetect.so
        libopencv_dnn.so
        libopencv_tracking.so
        libopencv_video.so
        libopencv_videostab.so
        libopencv_xfeatures2d.so
        -L./ libdarknet.so libpthread.so.0
    )
    link_directories( deps_linux/lib )
    #find_package(   opencv    REQUIRED    )
    link_directories(  /usr/lib/x86_64-linux-gnu  )
    #/usr/include/opencv4/opencv2/dnn/all_layers.hpp
    include_directories(  /usr/include/opencv4    )
    include_directories( OpenImgTest   )
elseif (CMAKE_SYSTEM_NAME MATCHES "Windows")
    add_definitions(-DLIB_EXPORTS)

    set(OpenCV_DIR "F:\\BinWin10C\\cv3413\\opencv\\build\\x64\\vc15\\lib")
    find_package(OpenCV  EXACT 3.4.13 REQUIRED PATHS "F:\\BinWin10C\\cv3413\\opencv\\build" )
    include_directories(${OpenCV_INCLUDE_DIRS}
        F:\\BinWin10C\\cv3413\\opencv\\build/include
        F:\\BinWin10C\\cv3413\\opencv\\build/include/opencv2/imgproc
        F:\\BinWin10C\\cv3413\\opencv\\build/include/opencv
    )
    link_directories( ${OpenCV_LIBRARY_DIRS}
        F:\\BinWin10C\\cv3413\\opencv\\build\\x64\\vc15\\lib
    )
    set(depLibs  ${OpenCV_LIBS} opencv_world3413d
        #OpenMP::OpenMP_CXX
    )
endif()

#FIND_PACKAGE( OpenMP REQUIRED)
#if(OPENMP_FOUND)
#    message("OPENMP FOUND")
#    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
#    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
#    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
#endif()

#set(HEADERS
#    adaboost_my.h  features_my.h
#    )
set(SOURCES main.cpp)

aux_source_directory(   ./ sourceList_objDet )
include_directories(  ./  )

set(SOURCE_FILES main.cpp)

#set( EXECUTABLE_OUTPUT_PATH    ${CMAKE_BINARY_DIR}/../bin)
#set( LIBRARY_OUTPUT_DIRECTORY      ${CMAKE_BINARY_DIR}/../lib)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)

add_executable( MaskRCNNUsageExample
    ${sourceList_objDet}   ${sourceList_objDet}
    ${HEADERS}
    )

# OpenCV 3 is required.
#find_package(OpenCV REQUIRED)
target_link_libraries(   MaskRCNNUsageExample
    #    PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
    #    ${OpenCV_LIBS}
 ${depLibs}
#    -lstdc++
#    -ljpeg   -lX11 -lpthread  -lpng  -ljpeg  -lpng16
    ${OpenCV_LIBS}
    )



set(EXECUTABLE_OUTPUT_PATH    ${CMAKE_BINARY_DIR}/../bin  )
