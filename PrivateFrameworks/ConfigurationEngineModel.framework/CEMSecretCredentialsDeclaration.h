/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSecretCredentialsDeclaration : CEMPayloadBase {
    NSString * _payloadSecret;
}

@property (nonatomic, copy) NSString *payloadSecret;

+ (id)allowedPayloadKeys;
+ (id)buildWithSecret:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadSecret;
- (id)serializePayload;
- (void)setPayloadSecret:(id)arg1;

@end
