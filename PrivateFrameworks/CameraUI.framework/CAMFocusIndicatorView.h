/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFocusIndicatorView : UIView {
    int  __exposureBiasSide;
    CAMExposureBiasSlider * __exposureBiasSlider;
    CAMFocusIndicatorRectView * __rectView;
    <CAMFocusIndicatorViewDelegate> * _delegate;
    float  _exposureBiasMaximum;
    float  _exposureBiasMinimum;
    float  _exposureBiasValue;
    bool  _inactive;
    bool  _showExposureBias;
    long long  _style;
}

@property (nonatomic) int _exposureBiasSide;
@property (nonatomic, readonly) CAMExposureBiasSlider *_exposureBiasSlider;
@property (nonatomic, readonly) CAMFocusIndicatorRectView *_rectView;
@property (nonatomic) <CAMFocusIndicatorViewDelegate> *delegate;
@property (nonatomic) float exposureBiasMaximum;
@property (nonatomic) float exposureBiasMinimum;
@property (nonatomic) float exposureBiasValue;
@property (getter=isInactive, nonatomic) bool inactive;
@property (getter=isPulsing, nonatomic) bool pulsing;
@property (nonatomic) bool showExposureBias;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)_commonCAMFocusIndicatorViewInitialization;
- (void)_createExposureBiasSlider;
- (void)_createRectViewAndUpdateBounds;
- (int)_exposureBiasSide;
- (id)_exposureBiasSlider;
- (void)_layoutExposureBiasSlider;
- (void)_layoutRectView:(id)arg1;
- (id)_rectView;
- (void)_updateTintColor;
- (id)delegate;
- (float)exposureBiasMaximum;
- (float)exposureBiasMinimum;
- (float)exposureBiasValue;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isInactive;
- (bool)isPulsing;
- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExposureBiasMaximum:(float)arg1;
- (void)setExposureBiasMinimum:(float)arg1;
- (void)setExposureBiasSide:(int)arg1 animated:(bool)arg2;
- (void)setExposureBiasValue:(float)arg1;
- (void)setInactive:(bool)arg1;
- (void)setPulsing:(bool)arg1;
- (void)setShowExposureBias:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)set_exposureBiasSide:(int)arg1;
- (bool)showExposureBias;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3;
- (long long)style;

@end