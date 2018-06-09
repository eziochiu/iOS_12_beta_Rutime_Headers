/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingOptionItem : HFAccessorySettingItem {
    HMAccessorySelectionSettingItem * _optionItem;
}

@property (nonatomic, retain) HMAccessorySelectionSettingItem *optionItem;

- (void).cxx_destruct;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)homeKitObject;
- (id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2 optionItem:(id)arg3;
- (id)optionItem;
- (void)setOptionItem:(id)arg1;
- (id)settingKeyPath;
- (id)toggleSelection;
- (id)value;

@end
