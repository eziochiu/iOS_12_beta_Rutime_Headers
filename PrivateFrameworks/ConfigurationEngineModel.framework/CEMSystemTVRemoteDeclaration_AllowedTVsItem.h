/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemTVRemoteDeclaration_AllowedTVsItem : CEMPayloadBase {
    NSString * _payloadTVDeviceID;
}

@property (nonatomic, copy) NSString *payloadTVDeviceID;

+ (id)allowedPayloadKeys;
+ (id)buildWithTVDeviceID:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadTVDeviceID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadTVDeviceID:(id)arg1;

@end
