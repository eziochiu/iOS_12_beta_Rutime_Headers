/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartPlatformSettings : NSObject {
    NSDictionary * mSettings;
}

+ (id)p_defaultSettingsDictionary;
+ (id)p_platformSettingsDictionary;
+ (id)sharedInstance;

- (double)backgroundLayoutContentsScaleFactor;
- (bool)backgroundLayoutUsesTiledRendering;
- (unsigned long long)buildFramebufferMemoryLimitInBytes;
- (bool)buildImageDefaultAntialias;
- (unsigned long long)buildImageTileSize;
- (unsigned long long)buildMultisamples;
- (bool)buildShouldDiscardBuffers;
- (double)buildTargetFPS;
- (bool)buildTextureRendersAsSingleImage;
- (bool)buildsCanUseDynamicShadows;
- (bool)buildsUseLowDetailedGeometries;
- (void)dealloc;
- (id)description;
- (unsigned long long)highQualityShadowsSize;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)insertionIconSupersamplingSamples;
- (bool)interactiveCanvasCanUseHighQualityRenderer;
- (unsigned long long)interactiveCanvasMultisamples;
- (bool)interactiveModeUsesFastPerformanceHint;
- (bool)knobTrackingUsesRealTimePerformanceHint;
- (unsigned long long)labelMaxTextureSize;
- (float)normalizedLabelPickingSlackForViewScale:(double)arg1 viewport:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (float)p_labelPickingSlack;
- (int)p_labelPickingSlackMethod;
- (float)prefilteredLinesFilterRadius;
- (double)printingDPI;
- (unsigned long long)printingMaxImageSize;
- (bool)protectCachedShaders;
- (unsigned long long)resourceCacheMemoryLimitInBytes;
- (float)rotationTrackerSpeed;
- (bool)shouldHandleResourceCacheOutOfMemory;
- (bool)skipFirstMipmapLevel;
- (unsigned long long)supersamplingSamples;
- (unsigned long long)supersamplingTileSize;
- (bool)useHighQualityShadows;
- (bool)useInteractiveModeWhileSelected;
- (bool)useLayoutInwardForInsertionIcons;
- (bool)useTiledFullSizeInteractiveLayer;

@end
