/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessoryInfoDetailsItemProvider : HFItemProvider {
    HMAccessory * _accessory;
    NSMutableSet * _accessoryInfoDetailItems;
    HFAccessoryInfoItem * _firmwareItem;
    HMHome * _home;
    HFAccessoryInfoItem * _softwareItem;
    <HFCharacteristicValueSource> * _valueSource;
    HFAccessoryInfoItem * _wifiItem;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) NSMutableSet *accessoryInfoDetailItems;
@property (nonatomic, readonly) HFAccessoryInfoItem *firmwareItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFAccessoryInfoItem *softwareItem;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;
@property (nonatomic, readonly) HFAccessoryInfoItem *wifiItem;

+ (id)_displayValueForCachedValue:(id)arg1 characteristicType:(id)arg2 accessoryInfoService:(id)arg3;
+ (id /* block */)accessoryInfoServiceDetailComparator;
+ (id)preferredCharacteristicOrderArray;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryInfoDetailItems;
- (bool)canToggleAccessoryInfoItem:(id)arg1;
- (id)firmwareItem;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 accessory:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryInfoDetailItems:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)softwareItem;
- (void)toggleAccessoryInfoItem:(id)arg1;
- (id)valueSource;
- (id)wifiItem;

@end
