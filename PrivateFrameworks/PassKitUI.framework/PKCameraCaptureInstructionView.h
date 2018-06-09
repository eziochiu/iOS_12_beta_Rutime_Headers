/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCameraCaptureInstructionView : UIView {
    long long  _context;
    PKTableHeaderView * _headerView;
    UIButton * _primaryButton;
    UIScrollView * _scrollView;
    UIButton * _secondaryButton;
}

@property (nonatomic, retain) PKTableHeaderView *headerView;
@property (nonatomic, retain) UIButton *primaryButton;
@property (nonatomic, retain) UIButton *secondaryButton;

- (void).cxx_destruct;
- (void)dealloc;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2;
- (bool)isBuddyiPad;
- (void)layoutSubviews;
- (id)primaryButton;
- (id)secondaryButton;
- (void)setHeaderView:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
