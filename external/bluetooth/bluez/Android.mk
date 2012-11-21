#
# Copyright (C) 2008 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
ifneq ($(TARGET_SIMULATOR),true)
ifeq ($(BOARD_HAVE_BLUETOOTH),true)
# +s LG_BT_BLUEZ_OOB hseok.kim@lge.com, temporarily add source code for OOB
LOCAL_CFLAGS += -DLG_BT_BLUEZ_OOB
#+e LG_BT_BLUEZ_OOB
  include $(all-subdir-makefiles)
endif
endif