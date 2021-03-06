/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFApplicationPolicyMonitor : NSObject {
    NSArray * _policyTypes;
    DMFPolicyRegistration * _registration;
}

@property (getter=isEnabled, readonly) bool enabled;
@property (nonatomic, copy) NSArray *policyTypes;
@property (nonatomic, retain) DMFPolicyRegistration *registration;

- (void).cxx_destruct;
- (void)_fetchCategoriesIfNeededForBundleIdentifiers:(id)arg1 response:(id /* block */)arg2;
- (bool)askPermissionForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithPolicyChangeHandler:(id /* block */)arg1;
- (bool)isEnabled;
- (id)policyTypes;
- (id)registration;
- (void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPolicyTypes:(id)arg1;
- (void)setRegistration:(id)arg1;

@end
