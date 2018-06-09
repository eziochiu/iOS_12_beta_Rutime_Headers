/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposeRecipientContainerView : UIView {
    _UIBackdropView * _backdropView;
    UIView * _separatorView;
}

@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, retain) UIView *separatorView;

- (void).cxx_destruct;
- (id)backdropView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setBackdropView:(id)arg1;
- (void)setSeparatorView:(id)arg1;

@end
