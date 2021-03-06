/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVConfirmationDialogTemplateView : UIView {
    UIVisualEffectView * _backdropView;
    UIView * _cardView;
}

@property (nonatomic, readonly) UIVisualEffectView *backdropView;
@property (nonatomic, retain) UIView *cardView;

- (void).cxx_destruct;
- (void)_configureSubviews;
- (id)backdropView;
- (id)cardView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCardView:(id)arg1;

@end
