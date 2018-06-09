/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem> {
    HFAccessoryBuilder * _accessoryBuilder;
    HFItem<HFServiceLikeItem> * _accessoryItem;
}

@property (nonatomic, retain) HFAccessoryBuilder *accessoryBuilder;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *accessoryItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessoryBuilder;
- (id)accessoryItem;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)homeKitObject;
- (id)init;
- (id)initWithAccessoryBuilder:(id)arg1 valueSource:(id)arg2;
- (id)services;
- (void)setAccessoryBuilder:(id)arg1;
- (void)setAccessoryItem:(id)arg1;
- (id)valueSource;

@end
