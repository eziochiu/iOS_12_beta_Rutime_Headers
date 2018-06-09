/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext * _authenticationContext;
    bool  _cameraRecognized;
    bool  _headless;
    NSString * _logCorrelationKey;
    NSArray * _redeemCodes;
}

@property (copy) SSAuthenticationContext *authenticationContext;
@property bool cameraRecognized;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool headless;
@property (nonatomic, retain) NSString *logCorrelationKey;
@property (readonly) NSArray *redeemCodes;
@property (readonly) Class superclass;

- (id)authenticationContext;
- (bool)cameraRecognized;
- (id)copyXPCEncoding;
- (void)dealloc;
- (bool)headless;
- (id)initWithRedeemCodes:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)logCorrelationKey;
- (id)redeemCodes;
- (void)setAuthenticationContext:(id)arg1;
- (void)setCameraRecognized:(bool)arg1;
- (void)setHeadless:(bool)arg1;
- (void)setLogCorrelationKey:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithRedeemResponseBlock:(id /* block */)arg1;

@end
