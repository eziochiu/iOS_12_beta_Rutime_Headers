/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYStreamerThread : NSThread {
    NSConditionLock * _startupLock;
    struct __CFRunLoopSource { } * _stopRLS;
    NSRunLoop * _threadRunLoop;
}

@property (nonatomic, readonly) NSRunLoop *runLoop;

+ (id)streamerThread;

- (void).cxx_destruct;
- (void)_waitForStartup;
- (id)init;
- (void)main;
- (id)runLoop;

@end
