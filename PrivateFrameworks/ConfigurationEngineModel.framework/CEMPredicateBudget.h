/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMPredicateBudget : CEMPredicateBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadCalendarIdentifier;
    NSArray * _payloadIdentifiers;
    NSString * _payloadMonitor;
    NSArray * _payloadTimeBudget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadCalendarIdentifier;
@property (nonatomic, copy) NSArray *payloadIdentifiers;
@property (nonatomic, copy) NSString *payloadMonitor;
@property (nonatomic, copy) NSArray *payloadTimeBudget;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withTimeBudget:(id)arg4;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadCalendarIdentifier;
- (id)payloadIdentifiers;
- (id)payloadMonitor;
- (id)payloadTimeBudget;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCalendarIdentifier:(id)arg1;
- (void)setPayloadIdentifiers:(id)arg1;
- (void)setPayloadMonitor:(id)arg1;
- (void)setPayloadTimeBudget:(id)arg1;

@end
