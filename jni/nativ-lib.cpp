#include <jni.h>
#include <string>
#include "opencv2/objdetect.hpp"
#include "opencv2/imgproc.hpp"

using cv::Mat;
using cv::Size;
using cv::Point;
using cv::Rect;
using cv::ellipse;
using cv::Scalar;

using cv::getTickCount;
using cv::getTickFrequency;
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++omaaaaar";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
        Java_com_example_myapplication_MainActivity_validate(JNIEnv *env, jobject, jlong addrGray, jlong addrRgba) {
    cv::Rect();
    cv::Mat();
    std::string hello2 = "Hello from validate";
    return env->NewStringUTF(hello2.c_str());
}