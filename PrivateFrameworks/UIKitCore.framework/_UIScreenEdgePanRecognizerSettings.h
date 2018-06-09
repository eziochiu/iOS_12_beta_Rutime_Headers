/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIScreenEdgePanRecognizerSettings : _UISettings {
    bool  _analysisFailureOverlayVisible;
    bool  _analysisLoggingEnabled;
    bool  _analysisLoggingOverlayVisible;
    _UIScreenEdgePanRecognizerCornerSettings * _cornerSettings;
    _UIScreenEdgePanRecognizerDwellSettings * _dwellSettings;
    _UIScreenEdgePanRecognizerEdgeSettings * _edgeSettings;
    NSString * _multitaskingGestureMode;
    NSString * _navigationGestureMode;
}

@property (nonatomic) bool analysisFailureOverlayVisible;
@property (nonatomic) bool analysisLoggingEnabled;
@property (nonatomic) bool analysisLoggingOverlayVisible;
@property (nonatomic, retain) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings;
@property (nonatomic, retain) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings;
@property (nonatomic, retain) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings;
@property (nonatomic, copy) NSString *multitaskingGestureMode;
@property (nonatomic, copy) NSString *navigationGestureMode;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (bool)analysisFailureOverlayVisible;
- (bool)analysisLoggingEnabled;
- (bool)analysisLoggingOverlayVisible;
- (id)cornerSettings;
- (id)dwellSettings;
- (id)edgeSettings;
- (id)multitaskingGestureMode;
- (id)multitaskingGestureModePost351;
- (id)navigationGestureMode;
- (id)navigationGestureModePost351;
- (void)setAnalysisFailureOverlayVisible:(bool)arg1;
- (void)setAnalysisLoggingEnabled:(bool)arg1;
- (void)setAnalysisLoggingOverlayVisible:(bool)arg1;
- (void)setCornerSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setDwellSettings:(id)arg1;
- (void)setEdgeSettings:(id)arg1;
- (void)setMultitaskingGestureMode:(id)arg1;
- (void)setMultitaskingGestureModePost351:(id)arg1;
- (void)setNavigationGestureMode:(id)arg1;
- (void)setNavigationGestureModePost351:(id)arg1;

@end
