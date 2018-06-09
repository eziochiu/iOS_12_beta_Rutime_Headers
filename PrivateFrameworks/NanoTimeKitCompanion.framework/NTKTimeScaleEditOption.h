/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimeScaleEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long timeScale;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithTimeScale:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionsDescription;

- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;
- (unsigned long long)timeScale;

@end
