LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:=               \
    hwtest.c

LOCAL_SHARED_LIBRARIES := \
    libcutils \
    libutils \
    libhardware \
    libhardware_legacy \
    libdl \

LOCAL_MODULE:= hwtest

LOCAL_MODULE_TAGS := optional

include $(BUILD_EXECUTABLE)
