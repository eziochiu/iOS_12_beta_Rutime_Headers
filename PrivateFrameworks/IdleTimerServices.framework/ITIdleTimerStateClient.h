/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
 */

@interface ITIdleTimerStateClient : FBSServiceFacilityClient <ITIdleTimerStateRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sharedInstanceAccessQueue;
+ (id)acquireSharedInstance;
+ (void)relinquishSharedInstance;

- (id)_init;
- (bool)_requestIsIdleTimerServiceAvailable;
- (bool)isIdleTimerServiceAvailable;
- (void)setIdleTimerDisabled:(bool)arg1 forReason:(id)arg2;

@end
