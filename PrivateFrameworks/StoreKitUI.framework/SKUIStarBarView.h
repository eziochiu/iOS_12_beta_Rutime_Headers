/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStarBarView : UIView {
    UIColor * _emptyColor;
    UIImage * _emptyStarImage;
    UIColor * _filledColor;
    UIImage * _filledStarImage;
    long long  _numberOfStars;
    double  _value;
}

@property (nonatomic, copy) UIColor *emptyColor;
@property (nonatomic, copy) UIColor *filledColor;
@property (nonatomic) long long numberOfStars;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)emptyColor;
- (id)filledColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfStars;
- (void)setColoringUsingStyle:(id)arg1;
- (void)setEmptyColor:(id)arg1;
- (void)setFilledColor:(id)arg1;
- (void)setNumberOfStars:(long long)arg1;
- (void)setValue:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)value;

@end
