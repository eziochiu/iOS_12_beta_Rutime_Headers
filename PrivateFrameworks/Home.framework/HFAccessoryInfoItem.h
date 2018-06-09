/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessoryInfoItem : HFItem {
    HMAccessory * _accessory;
    unsigned long long  _infoType;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic) unsigned long long infoType;

+ (id)localizedStringForCharacteristic:(id)arg1;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessory;
- (unsigned long long)infoType;
- (id)init;
- (id)initWithAccessory:(id)arg1 infoType:(unsigned long long)arg2;
- (void)setAccessory:(id)arg1;
- (void)setInfoType:(unsigned long long)arg1;

@end
