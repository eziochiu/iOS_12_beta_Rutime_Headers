/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDDistillRunner : NSObject {
    long long  _assetStoreVersionNumber;
    NSString * _assetStoreVersionString;
    NSURL * _carScratchURL;
    TDDistiller * _distiller;
    TDLogger * _logger;
    NSString * _minDeploymentTarget;
    NSURL * _outputURL;
    bool  _packDocument;
}

@property long long assetStoreVersionNumber;
@property (copy) NSString *assetStoreVersionString;
@property (nonatomic, retain) TDLogger *logger;
@property (nonatomic) NSString *minDeploymentTarget;
@property (nonatomic, copy) NSURL *outputURL;
@property (nonatomic) bool packImagesInDocument;

- (bool)_isDistillUnnecessaryForDocument:(id)arg1;
- (void)_moveScratchToOutputPath;
- (void)_removeScratchPath;
- (long long)assetStoreVersionNumber;
- (id)assetStoreVersionString;
- (id)carScratchURL;
- (void)dealloc;
- (id)init;
- (id)logger;
- (id)minDeploymentTarget;
- (id)outputURL;
- (bool)packImagesInDocument;
- (bool)runDistillWithDocumentURL:(id)arg1 outputURL:(id)arg2 attemptIncremental:(bool)arg3 forceDistill:(bool)arg4;
- (void)setAssetStoreVersionNumber:(long long)arg1;
- (void)setAssetStoreVersionString:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setMinDeploymentTarget:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setPackImagesInDocument:(bool)arg1;

@end
