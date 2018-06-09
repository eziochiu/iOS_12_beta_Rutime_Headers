/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDiagnosticsSettings : PXSettings {
    bool  _enableCompleteMyMomentService;
    bool  _enableContextualGesture;
    bool  _enableGenericService;
    bool  _enableMemoriesRelatedService;
    bool  _enableTitleFontService;
    bool  _simulateLaunchedToTest;
}

@property (nonatomic) bool enableCompleteMyMomentService;
@property (nonatomic) bool enableContextualGesture;
@property (nonatomic) bool enableGenericService;
@property (nonatomic) bool enableMemoriesRelatedService;
@property (nonatomic) bool enableTitleFontService;
@property (nonatomic) bool simulateLaunchedToTest;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)enableCompleteMyMomentService;
- (bool)enableContextualGesture;
- (bool)enableGenericService;
- (bool)enableMemoriesRelatedService;
- (bool)enableTitleFontService;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setEnableCompleteMyMomentService:(bool)arg1;
- (void)setEnableContextualGesture:(bool)arg1;
- (void)setEnableGenericService:(bool)arg1;
- (void)setEnableMemoriesRelatedService:(bool)arg1;
- (void)setEnableTitleFontService:(bool)arg1;
- (void)setSimulateLaunchedToTest:(bool)arg1;
- (bool)simulateLaunchedToTest;

@end
