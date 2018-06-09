/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPrideFace : NTKFace

+ (id)_debugReleaseDate;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (void)_setWasAvailable;
+ (bool)_wasAvailable;
+ (void)callBlockWhenFaceBecomesAvailable:(id /* block */)arg1;
+ (unsigned long long)enabledState;
+ (bool)isAvailableForDevice:(id)arg1;
+ (bool)isRestrictedForDevice:(id)arg1;
+ (id)releaseDate;
+ (bool)releaseImminent;
+ (void)setEnabledState:(unsigned long long)arg1;

- (id)_complicationSlotDescriptors;
- (long long)_customEditModeForUniqueConfiguration;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_hasOptionsForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (id)_orderedComplicationSlots;

@end
