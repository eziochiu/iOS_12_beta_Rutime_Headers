/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface CAMBadgeView : UIView {
    UIColor * __contentColor;
    UIColor * __fillColor;
    double  __fillCornerRadius;
    <CAMBadgeViewDelegate> * _delegate;
}

@property (setter=_setContentColor:, nonatomic, retain) UIColor *_contentColor;
@property (setter=_setFillColor:, nonatomic, retain) UIColor *_fillColor;
@property (setter=_setFillCornerRadius:, nonatomic) double _fillCornerRadius;
@property (nonatomic) <CAMBadgeViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)_contentColor;
- (id)_fillColor;
- (double)_fillCornerRadius;
- (id)_invertMaskImage:(id)arg1;
- (id)_maskImage;
- (void)_setContentColor:(id)arg1;
- (void)_setFillColor:(id)arg1;
- (void)_setFillCornerRadius:(double)arg1;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
