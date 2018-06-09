/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage {
    NSMutableDictionary * _bitmapInfo;
    unsigned int  _enableLargeCarKeyWorkaround;
    unsigned int  _useBitmapIndex;
}

@property (nonatomic) bool useBitmapIndex;

- (void)_allocateExtendedMetadata;
- (bool)_saveBitmapInfo;
- (void)_setZeroCodeInfo:(struct { unsigned int x1; unsigned int x2; })arg1 forKey:(const void*)arg2 withLength:(unsigned long long)arg3 inTree:(const void*)arg4;
- (bool)_writeOutKeyFormatWithWorkaround;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)removeAssetForKey:(id)arg1;
- (void)removeAssetForKey:(const void*)arg1 withLength:(unsigned long long)arg2;
- (void)setAppearanceIdentifier:(unsigned short)arg1 forName:(id)arg2;
- (void)setAsset:(id)arg1 forKey:(id)arg2;
- (void)setAsset:(id)arg1 forKey:(const void*)arg2 withLength:(unsigned long long)arg3;
- (void)setAssociatedChecksum:(unsigned int)arg1;
- (void)setAuthoringTool:(id)arg1;
- (void)setCatalogGlobalData:(id)arg1;
- (void)setColor:(struct _rgbquad { unsigned int x1 : 8; unsigned int x2 : 8; unsigned int x3 : 8; unsigned int x4 : 8; })arg1 forName:(const char *)arg2 excludeFromFilter:(bool)arg3;
- (void)setColorSpaceID:(unsigned int)arg1;
- (void)setDeploymentPlatform:(id)arg1;
- (void)setDeploymentPlatformVersion:(id)arg1;
- (void)setEnableLargeCarKeyWorkaround:(bool)arg1;
- (void)setExternalTags:(id)arg1;
- (void)setFontName:(id)arg1 baselineOffset:(float)arg2 forFontSelector:(id)arg3;
- (void)setFontSize:(float)arg1 forFontSizeSelector:(id)arg2;
- (void)setKeyFormatData:(id)arg1;
- (void)setKeySemantics:(int)arg1;
- (void)setRenditionCount:(unsigned int)arg1;
- (void)setRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 hotSpot:(struct CGPoint { double x1; double x2; })arg2 forName:(const char *)arg3;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void)setStorageVersion:(unsigned int)arg1;
- (void)setThinningArguments:(id)arg1;
- (void)setUseBitmapIndex:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersionString:(const char *)arg1;
- (void)setZeroCodeBezelInformation:(struct { unsigned int x1; unsigned int x2; })arg1 forKey:(const void*)arg2 withLength:(unsigned long long)arg3;
- (void)setZeroCodeGlyphInformation:(struct { unsigned int x1; unsigned int x2; })arg1 forKey:(const void*)arg2 withLength:(unsigned long long)arg3;
- (void)updateBitmapInfo;
- (bool)useBitmapIndex;
- (bool)writeToDisk;
- (bool)writeToDiskAndCompact:(bool)arg1;

@end
