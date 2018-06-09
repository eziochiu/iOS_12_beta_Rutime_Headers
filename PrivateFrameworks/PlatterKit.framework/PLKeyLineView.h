/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLKeyLineView : UIImageView {
    double  _cornerRadius;
    double  _lineWidth;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) double lineWidth;

- (id)_cachedKeyLineImageWithCornerRadius:(double)arg1 lineWidth:(double)arg2;
- (double)cornerRadius;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)lineWidth;
- (void)setCornerRadius:(double)arg1;
- (void)setKeyLineViewAlphaForProgress:(double)arg1;
- (void)setLineWidth:(double)arg1;

@end
