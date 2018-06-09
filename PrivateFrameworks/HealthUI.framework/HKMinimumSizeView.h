/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMinimumSizeView : UIView {
    double  _minimumHeight;
    double  _minimumWidth;
}

@property (nonatomic) double minimumHeight;
@property (nonatomic) double minimumWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)minimumHeight;
- (double)minimumWidth;
- (void)setMinimumHeight:(double)arg1;
- (void)setMinimumWidth:(double)arg1;

@end
