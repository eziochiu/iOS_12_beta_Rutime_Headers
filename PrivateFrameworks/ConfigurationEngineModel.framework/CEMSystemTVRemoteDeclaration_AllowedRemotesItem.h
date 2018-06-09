/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemTVRemoteDeclaration_AllowedRemotesItem : CEMPayloadBase {
    NSString * _payloadRemoteDeviceID;
}

@property (nonatomic, copy) NSString *payloadRemoteDeviceID;

+ (id)allowedPayloadKeys;
+ (id)buildWithRemoteDeviceID:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadRemoteDeviceID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadRemoteDeviceID:(id)arg1;

@end
