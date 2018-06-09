/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFScreenTimePolicyMonitor : NSObject {
    DMFPolicyRegistration * _registration;
    long long  _screenTimePolicy;
}

@property (nonatomic, retain) DMFPolicyRegistration *registration;
@property (nonatomic) long long screenTimePolicy;

+ (bool)automaticallyNotifiesObserversOfScreenTimePolicy;

- (void).cxx_destruct;
- (void)_updateScreenTime;
- (void)_updateScreenTimeFromPolicies:(id)arg1;
- (bool)askPermissionForScreenTimeWithError:(id*)arg1;
- (id)init;
- (id)registration;
- (long long)screenTimePolicy;
- (void)setRegistration:(id)arg1;
- (void)setScreenTimePolicy:(long long)arg1;

@end
