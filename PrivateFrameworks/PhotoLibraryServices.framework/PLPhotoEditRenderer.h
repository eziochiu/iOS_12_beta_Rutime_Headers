/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditRenderer : NSObject {
    NSDictionary * __smartBWAdjustments;
    NSDictionary * __smartColorAdjustments;
    NSDictionary * __smartToneAdjustments;
    PLEditSource * _editSource;
    NURenderContext * _geometryContext;
    NUImageExportClient * _imageExportClient;
    PLPhotoEditModel * _photoEditModel;
    NUPriority * _priority;
    NUImagePropertiesClient * _propertiesClient;
    NUBufferRenderClient * _renderClient;
    double  _smartBWLevelInCachedAdjustments;
    NSDictionary * _smartBWStatisticsInCachedAdjustments;
    double  _smartColorLevelInCachedAdjustments;
    NSDictionary * _smartColorStatisticsInCachedAdjustments;
    long long  _smartFiltersCubeSize;
    NURenderContext * _smartToneAutoCalculatorContext;
    double  _smartToneLevelInCachedAdjustments;
    NSDictionary * _smartToneStatisticsInCachedAdjustments;
    NUVideoExportClient * _videoExportClient;
    NUVideoPropertiesClient * _videoPropertiesClient;
    NURenderContext * _videoRenderContext;
}

@property (nonatomic, readonly, retain) NUComposition *composition;
@property (nonatomic, readonly, retain) PLEditSource *editSource;
@property (nonatomic, retain) PLPhotoEditModel *photoEditModel;
@property (nonatomic, readonly) double smartBWBaseGrain;
@property (nonatomic, readonly) double smartBWBaseHue;
@property (nonatomic, readonly) double smartBWBaseNeutralGamma;
@property (nonatomic, readonly) double smartBWBaseStrength;
@property (nonatomic, readonly) double smartBWBaseTone;
@property (nonatomic, readonly) double smartColorBaseCast;
@property (nonatomic, readonly) double smartColorBaseContrast;
@property (nonatomic, readonly) double smartColorBaseVibrancy;
@property (nonatomic) long long smartFiltersCubeSize;
@property (nonatomic, readonly) double smartToneBaseBlackPoint;
@property (nonatomic, readonly) double smartToneBaseBrightness;
@property (nonatomic, readonly) double smartToneBaseContrast;
@property (nonatomic, readonly) double smartToneBaseExposure;
@property (nonatomic, readonly) double smartToneBaseHighlights;
@property (nonatomic, readonly) double smartToneBaseLocalLight;
@property (nonatomic, readonly) double smartToneBaseShadows;

+ (id)_editedImagePropertiesFromOriginalImageProperties:(id)arg1 preserveRegions:(bool)arg2;
+ (id)compositionWithModel:(id)arg1 source:(id)arg2;
+ (bool)currentDeviceShouldAllowLocalLight;
+ (void)initialize;
+ (bool)isSupportedAutoLoopRecipe:(id)arg1;
+ (id)newImageDataFromCGImage:(struct CGImage { }*)arg1 withCompressionQuality:(double)arg2 metadataSourceImageURL:(id)arg3 preserveRegionsInMetadata:(bool)arg4;
+ (void)updatePhotoEditModel:(id)arg1 fromPortraitMetadata:(id)arg2;
+ (id)whiteBalanceEnumMap;
+ (id)whiteBalanceIntToString:(unsigned long long)arg1;
+ (unsigned long long)whiteBalanceStringToInt:(id)arg1;

- (void).cxx_destruct;
- (void)_exportLivePhotoVideoToURL:(id)arg1 preset:(id)arg2 composition:(id)arg3 metadata:(id)arg4 completion:(id /* block */)arg5;
- (void)_generateJPEGImageDataForComposition:(id)arg1 withCompressionQuality:(double)arg2 livePhotoPairingIdentifier:(id)arg3 properties:(id)arg4 depthData:(id)arg5 matte:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)_smartBWAdjustments;
- (double)_smartBWBaseValueForKey:(id)arg1 defaultValue:(double)arg2;
- (id)_smartColorAdjustments;
- (id)_smartToneAdjustments;
- (void)applySourceChangesToModel:(id)arg1 source:(id)arg2 withBlock:(id /* block */)arg3;
- (void)calculateLongExposureFusionParametersWithCompletionHandler:(id /* block */)arg1;
- (id)composition;
- (id)editSource;
- (void)exportVideoToURL:(id)arg1 preset:(id)arg2 livePhotoPairingIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)generateJPEGImageDataWithCompressionQuality:(double)arg1 livePhotoPairingIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getGeometryForComposition:(id)arg1;
- (id)initWithEditSource:(id)arg1;
- (id)initWithEditSource:(id)arg1 renderPriority:(long long)arg2;
- (id)photoEditModel;
- (void)renderImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)renderImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 completion:(id /* block */)arg4;
- (void)renderVideoWithTargetSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)setPhotoEditModel:(id)arg1;
- (void)setSmartFiltersCubeSize:(long long)arg1;
- (double)smartBWBaseGrain;
- (double)smartBWBaseHue;
- (double)smartBWBaseNeutralGamma;
- (double)smartBWBaseStrength;
- (double)smartBWBaseTone;
- (double)smartColorBaseCast;
- (double)smartColorBaseContrast;
- (double)smartColorBaseVibrancy;
- (long long)smartFiltersCubeSize;
- (double)smartToneBaseBlackPoint;
- (double)smartToneBaseBrightness;
- (double)smartToneBaseContrast;
- (double)smartToneBaseExposure;
- (double)smartToneBaseHighlights;
- (double)smartToneBaseLocalLight;
- (double)smartToneBaseShadows;

@end
