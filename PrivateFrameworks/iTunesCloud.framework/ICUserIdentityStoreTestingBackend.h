/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend> {
    NSNumber * _activeAccountDSID;
    NSNumber * _activeLockerAccountDSID;
    <ICUserIdentityStoreBackendDelegate> * _delegate;
    NSMutableDictionary * _identityProperties;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICUserIdentityStoreBackendDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setDefaultActiveAccountDSID:(id)arg1;
+ (void)setDefaultActiveLockerAccountDSID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_propertiesToSaveForProperties:(id)arg1;
- (void)activeAccountDSIDWithCompletion:(id /* block */)arg1;
- (void)activeLockerAccountDSIDWithCompletion:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)identityPropertiesForDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)identityPropertiesForPrimaryICloudAccountWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeIdentityForDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)synchronize;
- (void)updateActiveAccountDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateActiveLockerAccountDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)verificationContextForAccountEstablishmentWithCompletion:(id /* block */)arg1;
- (void)verificationContextForDSID:(id)arg1 completion:(id /* block */)arg2;

@end
