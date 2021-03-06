/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserPresenceFeed : HMFObject {
    HMUserPresenceAuthorization * _presenceAuthStatus;
    HMUserPresenceCompute * _presenceComputeStatus;
    HMDUserPresenceRegion * _presenceRegion;
    HMDUserPresenceUpdateReason * _reason;
    HMDDevice * _residentDevice;
    HMDUser * _user;
}

@property (nonatomic, readonly) HMUserPresenceAuthorization *presenceAuthStatus;
@property (nonatomic, readonly) HMUserPresenceCompute *presenceComputeStatus;
@property (nonatomic, readonly) HMDUserPresenceRegion *presenceRegion;
@property (nonatomic, readonly) HMDUserPresenceUpdateReason *reason;
@property (nonatomic, readonly) HMDDevice *residentDevice;
@property (nonatomic, readonly) HMDUser *user;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUser:(id)arg1 residentDevice:(id)arg2 presenceAuthStatus:(id)arg3 presenceComputeStatus:(id)arg4 presenceRegion:(id)arg5 reason:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)presenceAuthStatus;
- (id)presenceComputeStatus;
- (id)presenceRegion;
- (id)reason;
- (id)residentDevice;
- (id)user;

@end
