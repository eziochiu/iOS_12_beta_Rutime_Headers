/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessorySettings : NSObject <HFPrettyDescription, HFStateDumpSerializable, HMFLogging, HMObjectMerge> {
    <HMAccessorySettingsDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMAccessorySettingGroup * _rootGroup;
    <HMAccessorySettingsContainer> * _settingsContainer;
    <HMControllable> * _settingsControl;
}

@property (readonly) HMAccessory *accessory;
@property (getter=isControllable, readonly) bool controllable;
@property (readonly, copy) NSString *debugDescription;
@property <HMAccessorySettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NATreeNode *hf_codex;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) HMAccessorySettingGroup *rootGroup;
@property (readonly) <HMAccessorySettingsContainer> *settingsContainer;
@property <HMControllable> *settingsControl;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)localizationKeyForKeyPath:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)__notifyDelegateSettingsDidUpdate;
- (void)__notifyDelegateSettingsWillUpdateWithCompletionHanlder:(id /* block */)arg1;
- (void)_configureWithContext:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_updateSettingsWithBlock:(id /* block */)arg1;
- (id)accessory;
- (id)delegate;
- (id)initWithSettingsContainer:(id)arg1 settingsControl:(id)arg2 rootGroup:(id)arg3;
- (bool)isControllable;
- (id)propertyQueue;
- (id)rootGroup;
- (void)setDelegate:(id)arg1;
- (void)setSettingsContainer:(id)arg1;
- (void)setSettingsControl:(id)arg1;
- (id)settingsContainer;
- (id)settingsControl;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_MediaAccessoryCodex;

- (id)hf_accessorySettingAtKeyPath:(id)arg1;
- (id)hf_accessorySettingGroupAtKeyPath:(id)arg1;
- (id)hf_accessorySettingItemAtKeyPath:(id)arg1;
- (id)hf_codex;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
