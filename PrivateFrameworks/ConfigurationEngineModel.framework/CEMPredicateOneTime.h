/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMPredicateOneTime : CEMPredicateBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadSeconds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadSeconds;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithSeconds:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadSeconds;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadSeconds:(id)arg1;

@end
