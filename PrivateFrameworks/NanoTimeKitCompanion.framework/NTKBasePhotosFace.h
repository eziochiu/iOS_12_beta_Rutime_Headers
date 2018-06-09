/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBasePhotosFace : NTKFace

+ (bool)_customEditModeIsRows:(long long)arg1 forDevice:(id)arg2;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;

- (bool)_allowsEditing;
- (id)_complicationSlotDescriptors;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (id)_orderedComplicationSlots;
- (id)_resourceDirectorySnapshotKey;

@end
