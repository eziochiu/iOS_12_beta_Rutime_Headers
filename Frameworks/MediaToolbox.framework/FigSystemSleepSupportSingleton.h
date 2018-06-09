/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSystemSleepSupportSingleton : NSObject {
    <BSInvalidatable> * _idleTimerAssertion;
    long long  _lastIdleTimerResetTime;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

+ (id)sharedInstance;

- (id)init;
- (unsigned char)resetIdleTimer;

@end
