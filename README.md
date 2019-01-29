# libdumpstack
AOSP dump stack using CallStack.h

# Install
  * copy content of `core` folder to `project_folder`/`system`/`core`/
  
 # Usage
  * include header `#include <dumpstack/dumpstack.h>;`
  * call the function `dump_stack_android("LOG_TAG");` from a target place;
  * add library `libdumpstack` as dependency in `LOCAL_SHARED_LIBRARIES` in main make file
  
      (e.g. file `project_folder/system/bt/main/Android.mk` `LOCAL_SHARED_LIBRARIES += libdumpstack`)
  * add `-fvisibility=default` flag to `LOCAL_CFLAGS` in the needed module
  
      (e.g. file `project_folder/system/bt/bta/Android.mk` `LOCAL_CFLAGS += -fvisibility=default`
  * add library `libdumpstack` as dependency in `LOCAL_SHARED_LIBRARIES` in main make file
      (e.g. file `project_folder/system/bt/main/Android.mk` `LOCAL_SHARED_LIBRARIES += libdumpstack`)
