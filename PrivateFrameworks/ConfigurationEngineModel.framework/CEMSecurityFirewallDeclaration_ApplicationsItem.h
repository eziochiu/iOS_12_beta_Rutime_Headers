/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase {
    NSNumber * _payloadAllowed;
    NSString * _payloadBundleID;
}

@property (nonatomic, copy) NSNumber *payloadAllowed;
@property (nonatomic, copy) NSString *payloadBundleID;

+ (id)allowedPayloadKeys;
+ (id)buildWithBundleID:(id)arg1 withAllowed:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAllowed;
- (id)payloadBundleID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowed:(id)arg1;
- (void)setPayloadBundleID:(id)arg1;

@end
