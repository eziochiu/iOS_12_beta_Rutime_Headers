/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKSystemCloudUserProvider : NSObject <CRKCloudUserProvider> {
    CRKCloudUser * _cloudUser;
    NSMutableDictionary * _isHSA2ByIdentifier;
    CRKSecureCodedUserDefaultsObject * _persistedCloudUser;
    ACAccountStore * _store;
}

@property (nonatomic, retain) CRKCloudUser *cloudUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *isHSA2ByIdentifier;
@property (nonatomic, readonly) CRKSecureCodedUserDefaultsObject *persistedCloudUser;
@property (nonatomic, readonly) ACAccountStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accountStoreDidChange:(id)arg1;
- (id)cloudUser;
- (id)cloudUserWithAccount:(id)arg1;
- (void)flushHSA2Cache;
- (id)init;
- (id)initWithStore:(id)arg1;
- (bool)isAccountHSA2:(id)arg1;
- (id)isHSA2ByIdentifier;
- (void)latchCloudUser:(id)arg1;
- (id)persistedCloudUser;
- (void)setCloudUser:(id)arg1;
- (id)store;
- (id)uniqueKeyForAccount:(id)arg1;
- (void)updateCloudUser;
- (void)updateCloudUserDebounced;

@end
