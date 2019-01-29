#include <utils/CallStack.h>
#include <dumpstack/dumpstack.h>

using namespace android;
extern "C" void dump_stack_android(char* TAG)
{
        CallStack stack;
        stack.update();
        stack.log(TAG);
}

