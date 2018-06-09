/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOnboardingInstructionsView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    long long  _contentPosition;
    UILabel * _explanationLabel;
    NSMutableArray * _labelsStack;
    UILabel * _titleLabel;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) long long contentPosition;
@property (nonatomic, readonly) UILabel *explanationLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)explanationAttributedStringWithString:(id)arg1;
+ (id)titleAttributedStringWithString:(id)arg1;

- (void).cxx_destruct;
- (id)_newExplanationLabel;
- (id)_newTitleLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (long long)contentPosition;
- (id)explanationLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)popLabelState;
- (void)pushLabelState;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentPosition:(long long)arg1;
- (void)setContentPosition:(long long)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (id)titleLabel;

@end
