/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeRemoteUserAuthenticationMessageFilter : HMDMessageFilter <HMFLogging> {
    HMDHome * _home;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)__shouldCheckMessage:(id)arg1;
- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)logIdentifier;

@end
