/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMQRCodeInstructionLabel : CAMInstructionLabel {
    long long  _devicePosition;
    NSArray * _mrcResults;
}

@property (nonatomic) long long devicePosition;
@property (setter=setMRCResults:, nonatomic, retain) NSArray *mrcResults;

+ (id)_textForMRCResults:(id)arg1 devicePosition:(long long)arg2;
+ (bool)shouldDisplayInstructionForMRCResults:(id)arg1 devicePosition:(long long)arg2;

- (void).cxx_destruct;
- (double)_backgroundAlpha;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textInsets;
- (void)_updateTextWithPriorMRCResults:(id)arg1;
- (long long)devicePosition;
- (id)mrcResults;
- (void)setDevicePosition:(long long)arg1;
- (void)setMRCResults:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
