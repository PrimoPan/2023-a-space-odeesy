#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
    // Establish a window that full of the screen
    namedWindow("FullScreen", WINDOW_NORMAL);
    setWindowProperty("FullScreen", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);

    // Play the first video called 1.mp4, make sure the scale of the video is full of the screen
    VideoCapture cap1("1.mp4");
    Size dsize = Size(getWindowImageRect("FullScreen").width, getWindowImageRect("FullScreen").height);
    if (!cap1.isOpened()) {
        cout << "Error opening video stream or file" << endl;
        return -1;
    }
    while (cap1.isOpened()) {
        Mat frame;
        Mat frame2;
        bool ret = cap1.read(frame);
        if (!ret) {
            break;
        }

        resize(frame, frame2, dsize,3,4);
        if (cap1.get(CAP_PROP_POS_MSEC) >= 10000) {
            break;
        }
        imshow("FullScreen", frame2);
        if (waitKey(25) == 27) {
            break;
        }
    }
}
/*
    // Play the second video called 2.mp4, make sure the scale of the video is full of the screen
    VideoCapture cap2("2.mp4");
    if (!cap2.isOpened()) {
        cout << "Error opening video stream or file" << endl;
        return -1;
    }
    while (cap2.isOpened()) {
        Mat frame;
        bool ret = cap2.read(frame);
        if (!ret) {
            break;
        }
     //   frame.resize(Size(getWindowImageRect("FullScreen").width,getWindowImageRect("FullScreen").height);
        imshow("FullScreen", frame);
        if (waitKey(25) == 27) {
            break;
        }
    }

    // Destroy all the windows
    destroyAllWindows();

    return 0;
}
*/