/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessorySelectionSetting : HMAccessorySetting <HFPrettyDescription, HFStateDumpSerializable, _HMAccesorySettingDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *items;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void)_setting:(id)arg1 didAddConstraint:(id)arg2;
- (void)addItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithInternal:(id)arg1;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 items:(id)arg4;
- (id)items;
- (void)removeItem:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
