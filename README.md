# Mask RCNN

**Usage Examples :**

**Python**

`python3 mask_rcnn.py --image=image.jpg`
`python3 mask_rcnn.py --video=video.mp4`

It starts the webcam - if no argument provided.

**C++**

Compile using:

```g++ -ggdb `pkg-config --cflags --libs /Users/snayak/opencv/build/unix-install/opencv.pc` mask_rcnn.cpp -o mask_rcnn.out```

Run using:
`./mask_rcnn.out --image=image.jpg`
`./mask_rcnn.out --video=video.mp4`







# Mask RCNN

**Usage Examples :**

**Python**

`python3 mask_rcnn.py --image=image.jpg`
`python3 mask_rcnn.py --video=video.mp4`

It starts the webcam - if no argument provided.

**C++**

Compile using:

```g++ -ggdb `pkg-config --cflags --libs /Users/snayak/opencv/build/unix-install/opencv.pc` mask_rcnn.cpp -o mask_rcnn.out```

Run using:
`./mask_rcnn.out --image=image.jpg`
`./mask_rcnn.out --video=video.mp4`




int main()
{
    int argc=7;
    char*  argv[]  = { "appMaskRcnn"
                       ,  "-v=../TestData/cars.mp4"
                       , "--classes=../Model/mask_rcnn/mscoco_labels.names"
                       ,  "--config=../Model/mask_rcnn/mask_rcnn_inception_v2_coco_2018_01_28.pbtxt"
                       ,"--weight=../Model/mask_rcnn/mask_rcnn_inception_v2_coco_2018_01_28/frozen_inference_graph.pb"
                       ,"--color=../Model/mask_rcnn/colors.txt"
                       ,"--output=../TestData/out.avi"       };
    int res = main_exc(  argc,   argv) ;
}


<img src="E:\Study_MaskRCNN\shotcut\2021-06-06 23-43-00 的屏幕截图.png"     />











