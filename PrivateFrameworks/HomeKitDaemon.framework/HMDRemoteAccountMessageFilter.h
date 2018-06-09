/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter {
    HMFMessageDestination * _target;
    NSArray * _whitelistedMessages;
}

@property (readonly) HMFMessageDestination *target;
@property (readonly, copy) NSArray *whitelistedMessages;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)__shouldCheckMessage:(id)arg1;
- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)initWithName:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 whitelistedMessages:(id)arg2;
- (id)logIdentifier;
- (id)target;
- (id)whitelistedMessages;

@end
