/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFZoneItem : HFItem <HFHomeKitItemProtocol, HFItemDeletionProtocol, NAIdentifiable> {
    HMHome * _home;
    HMZone * _zone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMZone *zone;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)hf_canDeleteItem;
- (id)hf_deleteItem;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 zone:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setZone:(id)arg1;
- (id)zone;

@end
