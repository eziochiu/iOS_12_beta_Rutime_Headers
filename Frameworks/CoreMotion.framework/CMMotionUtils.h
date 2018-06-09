/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionUtils : NSObject

+ (long long)authorizationStatus;
+ (unsigned long long)copyDataFrom:(id)arg1 to:(id)arg2;
+ (bool)featureAvailability:(const char *)arg1;
+ (id)fileHandleForWritingToURL:(id)arg1;
+ (id)getExecutablePathFromPid:(int)arg1;
+ (long long)isAuthorizedForEntitlement:(id)arg1;
+ (bool)isMotionActivityEntitled;
+ (id)logDirectory;
+ (void)sendMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 withReply:(id /* block */)arg2;
+ (bool)sendMessageSync:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 onConnection:(struct CLConnectionClient { id x1; unsigned char x2; unsigned long x3; unsigned char x4; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x5; long x6; long x7; unsigned int x8/* : ? */; void*x9; BOOL x10; void*x11; long doublex12; const out void*x13; void*x14; void*x15; in void*x16; void*x17; void*x18; const void*x19; int (**x20)(); struct shared_ptr<int> { int *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; }*)arg2 timeoutAfter:(double)arg3 withReplyHandler:(id /* block */)arg4;
+ (id)sendMessageWithReplySync:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
+ (void)tccServiceMotionAccessWithBlock:(id /* block */)arg1;
+ (void)tccServiceMotionAccessWithLabel:(id)arg1;

@end
