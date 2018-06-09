/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSPrivacyFacade : NSObject <VSPrivacyServiceProtocol> {
    NSOperationQueue * _privateQueue;
    NSString * _service;
    VSPrivacyVoucherLockbox * _voucherLockbox;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *knownAppBundles;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, copy) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) VSPrivacyVoucherLockbox *voucherLockbox;

- (void).cxx_destruct;
- (void)_promptForAccessUsingAuditToken:(struct { unsigned int x1[8]; })arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_voucherForProcess:(int)arg1 providerID:(id)arg2;
- (id)init;
- (id)initWithService:(id)arg1 voucherLockbox:(id)arg2;
- (id)initWithVoucherLockbox:(id)arg1;
- (bool)isAccessGrantedForAuditToken:(struct { unsigned int x1[8]; })arg1;
- (bool)isAccessGrantedForBundle:(struct __CFBundle { }*)arg1;
- (id)knownAppBundles;
- (void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)privateQueue;
- (void)requestAccessForAuditToken:(struct { unsigned int x1[8]; })arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 identityProviderID:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)reset;
- (id)service;
- (bool)setAccessGranted:(bool)arg1 forAuditToken:(struct { unsigned int x1[8]; })arg2;
- (bool)setAccessGranted:(bool)arg1 forBundle:(struct __CFBundle { }*)arg2;
- (void)setPrivateQueue:(id)arg1;
- (void)setService:(id)arg1;
- (void)setVoucherLockbox:(id)arg1;
- (id)voucherLockbox;

@end
