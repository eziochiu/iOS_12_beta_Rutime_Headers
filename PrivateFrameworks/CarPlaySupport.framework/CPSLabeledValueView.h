/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSLabeledValueView : UIView {
    UILabel * _label;
    UILabel * _valueText;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UILabel *valueText;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)valueText;

@end
