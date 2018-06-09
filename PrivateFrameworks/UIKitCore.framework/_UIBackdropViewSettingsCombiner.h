/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings {
    _UIBackdropViewSettings * _inputSettingsA;
    _UIBackdropViewSettings * _inputSettingsB;
    _UIBackdropViewSettings * _outputSettingsA;
    _UIBackdropViewSettings * _outputSettingsB;
    double  _weighting;
}

@property (nonatomic, retain) _UIBackdropViewSettings *inputSettingsA;
@property (nonatomic, retain) _UIBackdropViewSettings *inputSettingsB;
@property (nonatomic, retain) _UIBackdropViewSettings *outputSettingsA;
@property (nonatomic, retain) _UIBackdropViewSettings *outputSettingsB;
@property (nonatomic) double weighting;

- (void).cxx_destruct;
- (void)computeOutputSettingsUsingModel:(id)arg1;
- (void)copyAdditionalSettingsFromSettings:(id)arg1;
- (id)inputSettingsA;
- (id)inputSettingsB;
- (bool)isBackdropVisible;
- (id)outputSettingsA;
- (id)outputSettingsB;
- (bool)requiresBackdropLayer;
- (void)setDefaultValues;
- (void)setInputSettingsA:(id)arg1;
- (void)setInputSettingsB:(id)arg1;
- (void)setOutputSettingsA:(id)arg1;
- (void)setOutputSettingsB:(id)arg1;
- (void)setRequiresColorStatistics:(bool)arg1;
- (void)setWeighting:(double)arg1;
- (double)weighting;

@end
