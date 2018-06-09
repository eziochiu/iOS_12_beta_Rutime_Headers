/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationProcessWatchdogPolicy : NSObject <FBProcessWatchdogProviding> {
    double  _additionalFirstPartyScale;
    int  _daNotificationToken;
    double  _deviceLaunchScale;
    double  _deviceResumeScale;
    bool  _enableThirdPartyPre9;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _watchdogPolicyExceptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)_defaultFirstPartyAdditionalScale;
+ (double)_defaultLaunchScale;
+ (double)_defaultResumeScale;
+ (double)_scaleForGestaltKey:(struct __CFString { }*)arg1;
+ (id)defaultPolicy;

- (void).cxx_destruct;
- (void)_queue_reloadDefaultSettings;
- (double)_queue_watchdogScalingFactorForAppInfo:(id)arg1 isResume:(bool)arg2;
- (void)dealloc;
- (id)init;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;

@end
