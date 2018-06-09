/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridSettings : PXSettings {
    bool  _allowDynamicDetailsTitles;
    bool  _badgeAllItemsAsFavorites;
    double  _defaultItemSideSize;
    bool  _displayAllItemsAsBursts;
    bool  _flashDegradedImages;
    bool  _forceJPEGThumbnailsInDefaultGrid;
    long long  _globalFooterVisibility;
    double  _leftScrubberRate;
    double  _magnifierRevealPreviewScale;
    double  _maximumSpacing;
    double  _minimumDistanceToUnfreeze;
    long long  _numberColumnsInDefaultGrid;
    long long  _numberOfColumnsInWideGrid;
    double  _previewRevealProgressToFreezeMagnifier;
    double  _rightScrubberRate;
    bool  _shouldExitEditingModeAfterDuplication;
    bool  _showTimelineScrubbers;
    bool  _simulateGlobalFooterImportantInformationUpdates;
    bool  _simulateLongTitles;
    double  _simulatedDetailsAttributesLoadingDelay;
    bool  _swipeSelectionEnabled;
    bool  _useFloatingHeaders;
}

@property (nonatomic) bool allowDynamicDetailsTitles;
@property (nonatomic) bool badgeAllItemsAsFavorites;
@property (nonatomic) double defaultItemSideSize;
@property (nonatomic) bool displayAllItemsAsBursts;
@property (nonatomic) bool flashDegradedImages;
@property (nonatomic) bool forceJPEGThumbnailsInDefaultGrid;
@property (nonatomic) long long globalFooterVisibility;
@property (nonatomic) double leftScrubberRate;
@property (nonatomic) double magnifierRevealPreviewScale;
@property (nonatomic) double maximumSpacing;
@property (nonatomic) double minimumDistanceToUnfreeze;
@property (nonatomic) long long numberColumnsInDefaultGrid;
@property (nonatomic) long long numberOfColumnsInWideGrid;
@property (nonatomic) double previewRevealProgressToFreezeMagnifier;
@property (nonatomic) double rightScrubberRate;
@property (nonatomic) bool shouldExitEditingModeAfterDuplication;
@property (nonatomic) bool showTimelineScrubbers;
@property (nonatomic) bool simulateGlobalFooterImportantInformationUpdates;
@property (nonatomic) bool simulateLongTitles;
@property (nonatomic) double simulatedDetailsAttributesLoadingDelay;
@property (getter=isSwipeSelectionEnabled, nonatomic) bool swipeSelectionEnabled;
@property (nonatomic) bool useFloatingHeaders;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowDynamicDetailsTitles;
- (bool)badgeAllItemsAsFavorites;
- (double)defaultItemSideSize;
- (bool)displayAllItemsAsBursts;
- (bool)flashDegradedImages;
- (bool)forceJPEGThumbnailsInDefaultGrid;
- (long long)globalFooterVisibility;
- (bool)isSwipeSelectionEnabled;
- (double)leftScrubberRate;
- (double)magnifierRevealPreviewScale;
- (double)maximumSpacing;
- (double)minimumDistanceToUnfreeze;
- (long long)numberColumnsInDefaultGrid;
- (long long)numberOfColumnsInWideGrid;
- (id)parentSettings;
- (double)previewRevealProgressToFreezeMagnifier;
- (double)rightScrubberRate;
- (void)setAllowDynamicDetailsTitles:(bool)arg1;
- (void)setBadgeAllItemsAsFavorites:(bool)arg1;
- (void)setDefaultItemSideSize:(double)arg1;
- (void)setDefaultValues;
- (void)setDisplayAllItemsAsBursts:(bool)arg1;
- (void)setFlashDegradedImages:(bool)arg1;
- (void)setForceJPEGThumbnailsInDefaultGrid:(bool)arg1;
- (void)setGlobalFooterVisibility:(long long)arg1;
- (void)setLeftScrubberRate:(double)arg1;
- (void)setMagnifierRevealPreviewScale:(double)arg1;
- (void)setMaximumSpacing:(double)arg1;
- (void)setMinimumDistanceToUnfreeze:(double)arg1;
- (void)setNumberColumnsInDefaultGrid:(long long)arg1;
- (void)setNumberOfColumnsInWideGrid:(long long)arg1;
- (void)setPreviewRevealProgressToFreezeMagnifier:(double)arg1;
- (void)setRightScrubberRate:(double)arg1;
- (void)setShouldExitEditingModeAfterDuplication:(bool)arg1;
- (void)setShowTimelineScrubbers:(bool)arg1;
- (void)setSimulateGlobalFooterImportantInformationUpdates:(bool)arg1;
- (void)setSimulateLongTitles:(bool)arg1;
- (void)setSimulatedDetailsAttributesLoadingDelay:(double)arg1;
- (void)setSwipeSelectionEnabled:(bool)arg1;
- (void)setUseFloatingHeaders:(bool)arg1;
- (bool)shouldExitEditingModeAfterDuplication;
- (bool)showTimelineScrubbers;
- (bool)simulateGlobalFooterImportantInformationUpdates;
- (bool)simulateLongTitles;
- (double)simulatedDetailsAttributesLoadingDelay;
- (bool)useFloatingHeaders;

@end
