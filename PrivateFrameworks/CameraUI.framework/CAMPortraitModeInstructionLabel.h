/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPortraitModeInstructionLabel : CAMInstructionLabel {
    long long  _devicePosition;
    long long  _flashMode;
    long long  _lightingType;
    unsigned long long  _numberOfPeopleFound;
    long long  _shallowDepthOfFieldStatus;
}

@property (nonatomic) long long devicePosition;
@property (nonatomic) long long flashMode;
@property (nonatomic) long long lightingType;
@property (nonatomic) unsigned long long numberOfPeopleFound;
@property (nonatomic) long long shallowDepthOfFieldStatus;

+ (id)_textForShallowDepthOfFieldStatus:(long long)arg1 numberOfPeopleFound:(unsigned long long)arg2 flashMode:(long long)arg3 devicePosition:(long long)arg4 lightingType:(long long)arg5;
+ (bool)shouldDisplayInstructionForShallowDepthOfFieldStatus:(long long)arg1;

- (double)_backgroundAlpha;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textInsets;
- (void)_updateTextWithPriorStatus:(long long)arg1;
- (long long)devicePosition;
- (long long)flashMode;
- (long long)lightingType;
- (unsigned long long)numberOfPeopleFound;
- (void)setDevicePosition:(long long)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setLightingType:(long long)arg1;
- (void)setNumberOfPeopleFound:(unsigned long long)arg1;
- (void)setShallowDepthOfFieldStatus:(long long)arg1;
- (long long)shallowDepthOfFieldStatus;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
