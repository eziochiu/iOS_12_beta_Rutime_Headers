/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColorsCollection : EDCollection <OADColorPalette> {
    unsigned long long  mDefaultColorsCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isSystemColorId:(unsigned long long)arg1;
+ (int)oadSchemeColorIdFromThemeIndex:(int)arg1;
+ (int)systemColorIdFromIndex:(unsigned long long)arg1;
+ (unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)arg1;

- (void)addColors:(const unsigned int*)arg1 count:(unsigned int)arg2 defaultColors:(const unsigned int*)arg3 defaultCount:(unsigned int)arg4;
- (void)addDefaultPalette;
- (unsigned long long)addOrEquivalentColorExcludingDefaults:(id)arg1;
- (void)addPalette:(const unsigned int*)arg1 paletteSize:(unsigned int)arg2 paletteX:(const unsigned int*)arg3 paletteXSize:(unsigned int)arg4;
- (id)colorWithIndex:(unsigned long long)arg1;
- (unsigned long long)defaultColorsCount;
- (const unsigned int*)defaultPalette;
- (id)description;
- (id)initWithDefaultSetup:(bool)arg1;
- (void)setupDefaults;

@end
