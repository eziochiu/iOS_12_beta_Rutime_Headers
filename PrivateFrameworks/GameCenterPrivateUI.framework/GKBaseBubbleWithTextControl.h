/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBaseBubbleWithTextControl : GKBubbleControl {
    NSArray * _labels;
    double  _referenceZPosition;
    id  _updateRasterizationScaleToken;
}

@property (nonatomic, retain) NSArray *labels;
@property (nonatomic) double referenceZPosition;
@property (nonatomic, retain) id updateRasterizationScaleToken;

- (id)_scaledTextStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFlipped;
- (id)labels;
- (double)referenceZPosition;
- (void)setLabels:(id)arg1;
- (void)setReferenceZPosition:(double)arg1;
- (void)setUpdateRasterizationScaleToken:(id)arg1;
- (void)updateLabelRasterizationScaleForLabels;
- (id)updateRasterizationScaleToken;
- (void)updateTextFieldsFor3DScaling;

@end
