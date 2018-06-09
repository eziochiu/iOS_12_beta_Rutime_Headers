/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLVideoRemaker : NSObject {
    PFVideoAVObjectBuilder * __videoAVObjectBuilder;
    NSString * _customAccessibilityLabel;
    id  _delegate;
    double  _duration;
    NSString * _exportPresetOverride;
    AVAssetExportSession * _exportSession;
    int  _mode;
    float  _percentComplete;
    id /* block */  _progressHandler;
    NSTimer * _progressTimer;
    PLProgressView * _progressView;
    bool  _shouldExportToPhotoDataDirectory;
    double  _trimEndTime;
    double  _trimStartTime;
    NSString * _trimmedPath;
}

@property (nonatomic, readonly, retain) PFVideoAVObjectBuilder *_videoAVObjectBuilder;
@property (nonatomic, copy) NSString *customAccessibilityLabel;
@property (nonatomic, readonly) NSString *exportPreset;
@property (nonatomic, copy) NSString *exportPresetOverride;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) bool shouldExportToPhotoDataDirectory;

+ (long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2;
+ (long long)fileLengthLimitForRemakerMode:(int)arg1;
+ (int)getHDRemakerModeForMode:(int)arg1;
+ (int)getSDRemakerModeForMode:(int)arg1;
+ (double)maximumDurationForTrimMode:(int)arg1;

- (void)_didEndRemakingWithTemporaryPath:(id)arg1;
- (void)_exportCompletedWithSuccess:(bool)arg1;
- (id)_fileFormatForURL:(id)arg1;
- (id)_metadata;
- (void)_removeProgressTimer;
- (void)_resetProgressTimer;
- (void)_updateProgress;
- (id)_videoAVObjectBuilder;
- (void)cancel;
- (id)customAccessibilityLabel;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (id)exportPreset;
- (id)exportPresetOverride;
- (id)initWithAVAsset:(id)arg1;
- (id)initWithManagedAsset:(id)arg1 applyVideoAdjustments:(bool)arg2;
- (id)initWithPublishingMedia:(id)arg1;
- (id)messageForRemakingProgress;
- (int)mode;
- (id /* block */)progressHandler;
- (id)progressView;
- (void)remake;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setExportPresetOverride:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setShouldExportToPhotoDataDirectory:(bool)arg1;
- (void)setTrimEndTime:(double)arg1;
- (void)setTrimStartTime:(double)arg1;
- (bool)shouldExportToPhotoDataDirectory;
- (double)trimEndTime;
- (double)trimStartTime;

@end
