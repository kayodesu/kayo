#include "../../registry.h"
#include "../../../runtime/frame.h"

/*
 * Author: kayo
 */

// private static native URL[] getLookupCacheURLs(ClassLoader var0);
static void getLookupCacheURLs(Frame *frame)
{
    // todo
    frame->pushr(nullptr);
}

void sun_misc_URLClassPath_registerNatives()
{
#undef C
#define C "sun/misc/URLClassPath"
    registerNative(C, "getLookupCacheURLs", "(Ljava/lang/ClassLoader;)[Ljava/net/URL;", getLookupCacheURLs);
}