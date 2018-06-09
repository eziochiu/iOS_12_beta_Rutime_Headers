/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem> {
    HFServiceBuilder * _serviceBuilder;
    HFServiceItem * _serviceItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HFServiceBuilder *serviceBuilder;
@property (nonatomic, readonly) HFServiceItem *serviceItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)homeKitObject;
- (id)init;
- (id)initWithServiceBuilder:(id)arg1;
- (id)initWithServiceBuilder:(id)arg1 valueSource:(id)arg2;
- (id)serviceBuilder;
- (id)serviceItem;
- (id)services;
- (id)valueSource;

@end
