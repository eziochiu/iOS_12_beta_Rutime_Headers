/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceColorEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long faceColor;

+ (id)__allOrderedColors;
+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithFaceColor:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)faceColor;
- (bool)isEqual:(id)arg1;
- (bool)optionExistsInOSVersion:(unsigned int)arg1;
- (long long)swatchStyle;

@end
