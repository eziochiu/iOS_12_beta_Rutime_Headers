/* made by EzioChiu.
 */

@protocol ICUserIdentityStoreBackend <NSObject, NSCopying, NSSecureCoding>

@required

- (void)activeAccountDSIDWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)activeLockerAccountDSIDWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (<ICUserIdentityStoreBackendDelegate> *)delegate;
- (void)identityPropertiesForDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICUserIdentityProperties *, NSError *, void*
- (void)identityPropertiesForPrimaryICloudAccountWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICUserIdentityProperties *, NSError *, void*
- (void)removeIdentityForDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)replaceIdentityProperties:(void *)arg1 forDSID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ICUserIdentityProperties *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setDelegate:(id <ICUserIdentityStoreBackendDelegate>)arg1;
- (void)setIdentityProperties:(void *)arg1 forDSID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ICUserIdentityProperties *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)synchronize;
- (void)updateActiveAccountDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateActiveLockerAccountDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)verificationContextForAccountEstablishmentWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICUserVerificationContext *, NSError *, void*
- (void)verificationContextForDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICUserVerificationContext *, NSError *, void*

@end
