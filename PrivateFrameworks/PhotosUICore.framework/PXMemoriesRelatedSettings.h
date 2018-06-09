/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesRelatedSettings : PXSettings {
    unsigned long long  _deleteBehavior;
    bool  _enableFeedbackComboUI;
    bool  _enableFeedbackUI;
    bool  _enableManualRefreshUI;
    bool  _enableMemoriesLivingOnFeedback;
    bool  _enableMemoryBlurryHeader;
    bool  _fakePeopleProximity;
    long long  _minimumNumberOfCuratedAssetsForInterestingMoments;
    long long  _minimumNumberOfCuratedAssetsForMemories;
    long long  _minimumNumberOfCuratedAssetsForMovieHeader;
    double  _refreshPhotoKitTimeout;
    double  _widgetRefreshTimeInterval;
}

@property (nonatomic) unsigned long long deleteBehavior;
@property (nonatomic) bool enableFeedbackComboUI;
@property (nonatomic) bool enableFeedbackUI;
@property (nonatomic) bool enableManualRefreshUI;
@property (nonatomic) bool enableMemoriesLivingOnFeedback;
@property (nonatomic) bool enableMemoryBlurryHeader;
@property (nonatomic) bool fakePeopleProximity;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForInterestingMoments;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMemories;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMovieHeader;
@property (nonatomic) double refreshPhotoKitTimeout;
@property (nonatomic) double widgetRefreshTimeInterval;

+ (void)_presentAlertForMemoriesGenerationResult:(id)arg1 error:(id)arg2 inModuleController:(id)arg3;
+ (void)_presentAlertWithTitle:(id)arg1 andMessage:(id)arg2 inModuleController:(id)arg3;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (unsigned long long)deleteBehavior;
- (bool)enableFeedbackComboUI;
- (bool)enableFeedbackUI;
- (bool)enableManualRefreshUI;
- (bool)enableMemoriesLivingOnFeedback;
- (bool)enableMemoryBlurryHeader;
- (bool)fakePeopleProximity;
- (long long)minimumNumberOfCuratedAssetsForInterestingMoments;
- (long long)minimumNumberOfCuratedAssetsForMemories;
- (long long)minimumNumberOfCuratedAssetsForMovieHeader;
- (id)parentSettings;
- (void)performPostSaveActions;
- (double)refreshPhotoKitTimeout;
- (void)setDefaultValues;
- (void)setDeleteBehavior:(unsigned long long)arg1;
- (void)setEnableFeedbackComboUI:(bool)arg1;
- (void)setEnableFeedbackUI:(bool)arg1;
- (void)setEnableManualRefreshUI:(bool)arg1;
- (void)setEnableMemoriesLivingOnFeedback:(bool)arg1;
- (void)setEnableMemoryBlurryHeader:(bool)arg1;
- (void)setFakePeopleProximity:(bool)arg1;
- (void)setMinimumNumberOfCuratedAssetsForInterestingMoments:(long long)arg1;
- (void)setMinimumNumberOfCuratedAssetsForMemories:(long long)arg1;
- (void)setMinimumNumberOfCuratedAssetsForMovieHeader:(long long)arg1;
- (void)setRefreshPhotoKitTimeout:(double)arg1;
- (void)setWidgetRefreshTimeInterval:(double)arg1;
- (double)widgetRefreshTimeInterval;

@end