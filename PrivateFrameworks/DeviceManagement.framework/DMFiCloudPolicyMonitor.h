/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFiCloudPolicyMonitor : NSObject {
    long long  _iCloudLogoutPolicy;
    DMFPolicyRegistration * _registration;
}

@property (nonatomic) long long iCloudLogoutPolicy;
@property (nonatomic, retain) DMFPolicyRegistration *registration;

+ (bool)automaticallyNotifiesObserversOfICloudLogoutPolicy;

- (void).cxx_destruct;
- (void)_updateiCloudLogout;
- (void)_updateiCloudLogoutFromPolicies:(id)arg1;
- (long long)iCloudLogoutPolicy;
- (id)init;
- (id)registration;
- (void)setICloudLogoutPolicy:(long long)arg1;
- (void)setRegistration:(id)arg1;

@end
