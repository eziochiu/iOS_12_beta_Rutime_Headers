/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemAirPlayDestinationsDeclaration_WhitelistItem : CEMPayloadBase {
    NSString * _payloadDeviceID;
}

@property (nonatomic, copy) NSString *payloadDeviceID;

+ (id)allowedPayloadKeys;
+ (id)buildWithDeviceID:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDeviceID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDeviceID:(id)arg1;

@end
