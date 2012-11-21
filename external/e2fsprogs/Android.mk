ifneq ($(TARGET_SIMULATOR),true)
ifeq ($(TARGET_ARCH),x86)
include $(call all-subdir-makefiles)
endif
ifeq ($(TARGET_ARCH),arm)
include $(call all-subdir-makefiles)
endif
endif
