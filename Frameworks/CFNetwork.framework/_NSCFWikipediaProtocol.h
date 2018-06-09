/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface _NSCFWikipediaProtocol : NSURLProtocol {
    const struct CFURLProtocolInstanceCallbacks { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); void *x14; } * _callbacks;
    const void * _instance;
}

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)scheduleOnRunloop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (void)startLoading;
- (void)stopLoading;
- (void)unscheduleOnRunloop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;

@end
