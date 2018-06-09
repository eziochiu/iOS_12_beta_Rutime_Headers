/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMPredicateWeeklyTimeRange : CEMPredicateBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadCalendarIdentifier;
    NSNumber * _payloadEndDay;
    NSString * _payloadEndTime;
    NSNumber * _payloadStartDay;
    NSString * _payloadStartTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadCalendarIdentifier;
@property (nonatomic, copy) NSNumber *payloadEndDay;
@property (nonatomic, copy) NSString *payloadEndTime;
@property (nonatomic, copy) NSNumber *payloadStartDay;
@property (nonatomic, copy) NSString *payloadStartTime;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithCalendarIdentifier:(id)arg1 withStartDay:(id)arg2 withStartTime:(id)arg3 withEndDay:(id)arg4 withEndTime:(id)arg5;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadCalendarIdentifier;
- (id)payloadEndDay;
- (id)payloadEndTime;
- (id)payloadStartDay;
- (id)payloadStartTime;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCalendarIdentifier:(id)arg1;
- (void)setPayloadEndDay:(id)arg1;
- (void)setPayloadEndTime:(id)arg1;
- (void)setPayloadStartDay:(id)arg1;
- (void)setPayloadStartTime:(id)arg1;

@end
