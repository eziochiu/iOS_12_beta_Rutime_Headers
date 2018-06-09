/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNDeclaration_Proxies : CEMPayloadBase {
    NSNumber * _payloadHTTPEnable;
    NSNumber * _payloadHTTPPort;
    NSString * _payloadHTTPProxy;
    NSString * _payloadHTTPProxyPassword;
    NSString * _payloadHTTPProxyUsername;
    NSNumber * _payloadHTTPSEnable;
    NSNumber * _payloadHTTPSPort;
    NSString * _payloadHTTPSProxy;
    NSNumber * _payloadProxyAutoConfigEnable;
    NSString * _payloadProxyAutoConfigURLString;
    NSNumber * _payloadProxyAutoDiscoveryEnable;
}

@property (nonatomic, copy) NSNumber *payloadHTTPEnable;
@property (nonatomic, copy) NSNumber *payloadHTTPPort;
@property (nonatomic, copy) NSString *payloadHTTPProxy;
@property (nonatomic, copy) NSString *payloadHTTPProxyPassword;
@property (nonatomic, copy) NSString *payloadHTTPProxyUsername;
@property (nonatomic, copy) NSNumber *payloadHTTPSEnable;
@property (nonatomic, copy) NSNumber *payloadHTTPSPort;
@property (nonatomic, copy) NSString *payloadHTTPSProxy;
@property (nonatomic, copy) NSNumber *payloadProxyAutoConfigEnable;
@property (nonatomic, copy) NSString *payloadProxyAutoConfigURLString;
@property (nonatomic, copy) NSNumber *payloadProxyAutoDiscoveryEnable;

+ (id)allowedPayloadKeys;
+ (id)buildWithHTTPEnable:(id)arg1 withHTTPPort:(id)arg2 withHTTPProxy:(id)arg3 withHTTPProxyPassword:(id)arg4 withHTTPProxyUsername:(id)arg5 withHTTPSEnable:(id)arg6 withHTTPSPort:(id)arg7 withHTTPSProxy:(id)arg8 withProxyAutoConfigEnable:(id)arg9 withProxyAutoDiscoveryEnable:(id)arg10 withProxyAutoConfigURLString:(id)arg11;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadHTTPEnable;
- (id)payloadHTTPPort;
- (id)payloadHTTPProxy;
- (id)payloadHTTPProxyPassword;
- (id)payloadHTTPProxyUsername;
- (id)payloadHTTPSEnable;
- (id)payloadHTTPSPort;
- (id)payloadHTTPSProxy;
- (id)payloadProxyAutoConfigEnable;
- (id)payloadProxyAutoConfigURLString;
- (id)payloadProxyAutoDiscoveryEnable;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadHTTPEnable:(id)arg1;
- (void)setPayloadHTTPPort:(id)arg1;
- (void)setPayloadHTTPProxy:(id)arg1;
- (void)setPayloadHTTPProxyPassword:(id)arg1;
- (void)setPayloadHTTPProxyUsername:(id)arg1;
- (void)setPayloadHTTPSEnable:(id)arg1;
- (void)setPayloadHTTPSPort:(id)arg1;
- (void)setPayloadHTTPSProxy:(id)arg1;
- (void)setPayloadProxyAutoConfigEnable:(id)arg1;
- (void)setPayloadProxyAutoConfigURLString:(id)arg1;
- (void)setPayloadProxyAutoDiscoveryEnable:(id)arg1;

@end
