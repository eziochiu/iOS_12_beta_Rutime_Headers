/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKLabelCache : NSObject {
    NSMutableDictionary * _atlases;
    NSMutableSet * _preloadSet;
}

+ (void)_purgeCache;
+ (id)labelForDevice:(id)arg1 faceStyle:(long long)arg2 number:(unsigned long long)arg3 fontSize:(double)arg4 paddedWithZeros:(bool)arg5;
+ (id)labelForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(bool)arg5 filter:(bool)arg6;
+ (bool)localeChanged;
+ (id)numeralsSetFromCurrentLocale;
+ (void)primeForDevice:(id)arg1;
+ (bool)setNumeralsSet:(id)arg1;
+ (id)versionFilePath;
+ (void)wipe;

- (void).cxx_destruct;
- (void)_exportTextureAtlasForDevice:(id)arg1 forFont:(long long)arg2 modifier:(id)arg3 values:(id)arg4 padWithZeroes:(bool)arg5 preload:(bool)arg6;
- (void)_exportTextureAtlasForFaceStyle:(long long)arg1 forDevice:(id)arg2;
- (id)_keyForLabelWithFont:(long long)arg1 fontSize:(double)arg2 padWithZeroes:(bool)arg3;
- (id)_keyForLabelWithFont:(long long)arg1 modifier:(id)arg2 padWithZeroes:(bool)arg3;
- (id)_labelForDevice:(id)arg1 faceStyle:(long long)arg2 number:(unsigned long long)arg3 fontSize:(double)arg4 paddedWithZeros:(bool)arg5;
- (id)_labelForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(bool)arg5 filter:(bool)arg6;
- (void)_loadAtlases;
- (bool)_localeChanged;
- (id)_nameForFaceStyle:(long long)arg1;
- (void)_primeForDevice:(id)arg1 font:(long long)arg2 modifier:(id)arg3 values:(id)arg4 padWithZeroes:(bool)arg5 preload:(bool)arg6;
- (id)_textureForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(bool)arg5;
- (void)checkVersion;
- (void)dealloc;
- (id)init;

@end
