LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
OPENCV_LIB_TYPE:=STATIC
OPENCV_INSTALL_MODULES:=on

include C:/opencv-3.4.4-android-sdk/OpenCV-android-sdk/sdk/native/jni/OpenCV.mk

LOCAL_SRC_FILES  := nativ-lib.cpp
LOCAL_C_INCLUDES += $(LOCAL_PATH)

LOCAL_MODULE     := native-lib
LOCAL_LDLIBS +=  -llog -ldl -ljnigraphics

include $(BUILD_SHARED_LIBRARY)




