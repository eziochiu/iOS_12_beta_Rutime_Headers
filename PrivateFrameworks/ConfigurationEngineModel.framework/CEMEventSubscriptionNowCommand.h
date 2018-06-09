/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMEventSubscriptionNowCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadEvents;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withEvents:(id)arg2;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadEvents;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadEvents:(id)arg1;

@end
