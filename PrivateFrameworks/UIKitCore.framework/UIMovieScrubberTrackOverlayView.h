/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMovieScrubberTrackOverlayView : UIView {
    unsigned int  _editing;
    unsigned int  _editingHandle;
    double  _endValue;
    UIImageView * _leftFillView;
    double  _maximumValue;
    double  _minimumValue;
    UIImageView * _rightFillView;
    double  _startValue;
    double  _value;
    unsigned int  _zoomed;
}

- (void).cxx_destruct;
- (void)_clampValueAndLayout;
- (void)_updateLeftFill;
- (void)_updateRightFill;
- (void)animateFillFramesAway;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setEditing:(bool)arg1;
- (void)setEditingHandle:(int)arg1;
- (void)setEndValue:(double)arg1;
- (void)setIsZoomed:(bool)arg1;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setStartValue:(double)arg1;
- (void)setValue:(double)arg1;

@end
