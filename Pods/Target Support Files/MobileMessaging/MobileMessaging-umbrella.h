#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MobileMessagingPluginApplicationDelegate.h"
#import "MMNotifications.h"
#import "SwiftTryCatch.h"

FOUNDATION_EXPORT double MobileMessagingVersionNumber;
FOUNDATION_EXPORT const unsigned char MobileMessagingVersionString[];

