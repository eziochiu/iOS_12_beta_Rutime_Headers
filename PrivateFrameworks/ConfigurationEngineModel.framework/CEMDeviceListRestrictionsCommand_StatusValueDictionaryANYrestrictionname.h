/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMDeviceListRestrictionsCommand_StatusValueDictionaryANYrestrictionname : CEMPayloadBase {
    NSNumber * _statusValue;
}

@property (nonatomic, copy) NSNumber *statusValue;

+ (id)allowedStatusKeys;
+ (id)buildWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusValue:(id)arg1;
- (id)statusValue;

@end
