/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUScrubberSettings : PXSettings {
    double  _baseVideoWidth;
    long long  _chromeShownPlaybackIndicator;
    double  _decelerationTargetExpansionDistance;
    long long  _defaultPlaybackIndicator;
    bool  _dynamicSeekTolerance;
    double  _filmstripAspectRatio;
    long long  _initialPlaybackIndicator;
    double  _interItemSpacing;
    double  _interSectionSpacing;
    unsigned long long  _interactiveLoupeBehavior;
    double  _maxAspectRatio;
    double  _minVideoDuration;
    long long  _playingPlaybackIndicator;
    unsigned long long  _previewInteractiveLoupeBehavior;
    long long  _scrubbingPlaybackIndicator;
    double  _settleAnimationDuration;
    double  _settleRequiredDecelerationDistance;
    double  _slitAspectRatio;
    double  _smoothingAnimationDuration;
    double  _tapAnimationDuration;
    double  _topOutset;
    bool  _usePreviewScrubberMargins;
    bool  _useSmoothingAnimation;
    bool  _useTrianglePositionIndicator;
    double  _verticalMargin;
}

@property (nonatomic) double baseVideoWidth;
@property (nonatomic) long long chromeShownPlaybackIndicator;
@property (nonatomic) double decelerationTargetExpansionDistance;
@property (nonatomic) long long defaultPlaybackIndicator;
@property (nonatomic) bool dynamicSeekTolerance;
@property (nonatomic) double filmstripAspectRatio;
@property (nonatomic) long long initialPlaybackIndicator;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) unsigned long long interactiveLoupeBehavior;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic) double minVideoDuration;
@property (nonatomic) long long playingPlaybackIndicator;
@property (nonatomic) unsigned long long previewInteractiveLoupeBehavior;
@property (nonatomic) long long scrubbingPlaybackIndicator;
@property (nonatomic) double settleAnimationDuration;
@property (nonatomic) double settleRequiredDecelerationDistance;
@property (nonatomic) double slitAspectRatio;
@property (nonatomic) double smoothingAnimationDuration;
@property (nonatomic) double tapAnimationDuration;
@property (nonatomic) double topOutset;
@property (nonatomic) bool usePreviewScrubberMargins;
@property (nonatomic) bool useSmoothingAnimation;
@property (nonatomic) bool useTrianglePositionIndicator;
@property (nonatomic) double verticalMargin;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)baseVideoWidth;
- (long long)chromeShownPlaybackIndicator;
- (double)decelerationTargetExpansionDistance;
- (long long)defaultPlaybackIndicator;
- (bool)dynamicSeekTolerance;
- (double)filmstripAspectRatio;
- (long long)initialPlaybackIndicator;
- (double)interItemSpacing;
- (double)interSectionSpacing;
- (unsigned long long)interactiveLoupeBehavior;
- (double)maxAspectRatio;
- (double)minVideoDuration;
- (id)parentSettings;
- (long long)playingPlaybackIndicator;
- (unsigned long long)previewInteractiveLoupeBehavior;
- (long long)scrubbingPlaybackIndicator;
- (void)setBaseVideoWidth:(double)arg1;
- (void)setChromeShownPlaybackIndicator:(long long)arg1;
- (void)setDecelerationTargetExpansionDistance:(double)arg1;
- (void)setDefaultPlaybackIndicator:(long long)arg1;
- (void)setDefaultValues;
- (void)setDynamicSeekTolerance:(bool)arg1;
- (void)setFilmstripAspectRatio:(double)arg1;
- (void)setInitialPlaybackIndicator:(long long)arg1;
- (void)setInterItemSpacing:(double)arg1;
- (void)setInterSectionSpacing:(double)arg1;
- (void)setInteractiveLoupeBehavior:(unsigned long long)arg1;
- (void)setMaxAspectRatio:(double)arg1;
- (void)setMinVideoDuration:(double)arg1;
- (void)setPlayingPlaybackIndicator:(long long)arg1;
- (void)setPreviewInteractiveLoupeBehavior:(unsigned long long)arg1;
- (void)setScrubbingPlaybackIndicator:(long long)arg1;
- (void)setSettleAnimationDuration:(double)arg1;
- (void)setSettleRequiredDecelerationDistance:(double)arg1;
- (void)setSlitAspectRatio:(double)arg1;
- (void)setSmoothingAnimationDuration:(double)arg1;
- (void)setTapAnimationDuration:(double)arg1;
- (void)setTopOutset:(double)arg1;
- (void)setUsePreviewScrubberMargins:(bool)arg1;
- (void)setUseSmoothingAnimation:(bool)arg1;
- (void)setUseTrianglePositionIndicator:(bool)arg1;
- (void)setVerticalMargin:(double)arg1;
- (double)settleAnimationDuration;
- (double)settleRequiredDecelerationDistance;
- (double)slitAspectRatio;
- (double)smoothingAnimationDuration;
- (double)tapAnimationDuration;
- (double)topOutset;
- (bool)usePreviewScrubberMargins;
- (bool)useSmoothingAnimation;
- (bool)useTrianglePositionIndicator;
- (double)verticalMargin;

@end
