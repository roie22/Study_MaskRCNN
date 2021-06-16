cmake_minimum_required(VERSION 3.6)
project(  MaskRCNNUsageExample   )
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
# Current directory as working directory.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)
if(  1   )
    #~/cv3414Bundle/installCv3414Ubun2104FullNew
    #REQUIRED
    #/home/alex/cv24136/installCv24136GLU2104/share/OpenCV
    #    set(CV_DIR_ROOT_MY   /home/alex/cv3414Bundle/installCv3414Ubun2104FullNew   )
    #set(CV_DIR_ROOT_MY   /home/alex/installCv3414Ubun2104FullNew   )
    set(CV_DIR_ROOT_MY   /home/alex/installCv3414Ubun2104FullNew   )
    set(OpenCV_DIR     ${CV_DIR_ROOT_MY}/share/OpenCV     )
    find_package(   opencv    PATHS    ${CV_DIR_ROOT_MY}   )
    include_directories(
        ${CV_DIR_ROOT_MY}/include
        ${CV_DIR_ROOT_MY}/include/opencv
        ${CV_DIR_ROOT_MY}/include/opencv2
        )
    link_directories(  ${CV_DIR_ROOT_MY}/lib )
    #${OpenCV_LIBS}
    #libopencv_core.so   libopencv_highgui.so  libopencv_imgcodecs.so
    #libopencv_imgproc.so   libopencv_videoio.so     libopencv_ml.so
    #libopencv_features2d.so  libopencv_flann.so  libopencv_objdetect.so
    #-ljpeg   -lX11 -lpthread
endif()

#find_package(   opencv    REQUIRED    )
link_directories(  /usr/lib/x86_64-linux-gnu  )
#/usr/include/opencv4/opencv2/dnn/all_layers.hpp
include_directories(  /usr/include/opencv4    )
include_directories( OpenImgTest   )

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
set(SOURCES
    main.cpp
    )

aux_source_directory(   ./       sourceList_objDet )
#aux_source_directory(   ./BOW      sourceList_objDet )
#aux_source_directory(   ./CNN     sourceList_objDet )
#aux_source_directory(   ./Eigen     sourceList_objDet )
#aux_source_directory(   ./Haas     sourceList_objDet )
#aux_source_directory(   ./siftpp     sourceList_objDet )
#aux_source_directory(   ./SVM     sourceList_objDet )
include_directories(  ./  )
#include_directories( CNN  Eigen  Haas   siftpp   SVM )
#list( sourceList_objDet      a3.cpp  );
#include_directories(  ./../IntegralImage  )

set(SOURCE_FILES
    main.cpp)

set( EXECUTABLE_OUTPUT_PATH    ${CMAKE_BINARY_DIR}/../bin)
set( LIBRARY_OUTPUT_DIRECTORY      ${CMAKE_BINARY_DIR}/../lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)

add_executable(    MaskRCNNUsageExample
    #    ${SOURCE_FILES}
    ${sourceList_objDet}   ${sourceList_objDet}
#    ../IntegralImage/integral_image.h
#    ../IntegralImage/integral_image.cpp
    ${HEADERS}
    )

# OpenCV 3 is required.
#find_package(OpenCV REQUIRED)
target_link_libraries(   MaskRCNNUsageExample
    #    PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
    #    ${OpenCV_LIBS}
    libopencv_core.so   libopencv_highgui.so
    libopencv_imgcodecs.so
    libopencv_imgproc.so
    libopencv_videoio.so     libopencv_ml.so  libopencv_dnn.so
    libopencv_features2d.so  libopencv_flann.so  libopencv_objdetect.so
#    -lstdc++
#    -ljpeg   -lX11 -lpthread  -lpng  -ljpeg  -lpng16
    ${OpenCV_LIBS}
    )



set(EXECUTABLE_OUTPUT_PATH    ${CMAKE_BINARY_DIR}/../bin  )
