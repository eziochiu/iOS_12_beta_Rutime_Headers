/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVRefreshSubscriptionRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext * _authenticationContext;
    bool  _requestingOfflineSlot;
}

@property (nonatomic, copy) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRequestingOfflineSlot, nonatomic) bool requestingOfflineSlot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authenticationContext;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isRequestingOfflineSlot;
- (void)setAuthenticationContext:(id)arg1;
- (void)setRequestingOfflineSlot:(bool)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
