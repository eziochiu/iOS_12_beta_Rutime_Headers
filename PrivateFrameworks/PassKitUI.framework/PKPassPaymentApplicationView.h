/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentApplicationView : UIView {
    <PKPassPaymentApplicationViewDelegate> * _delegate;
    PKPassPaymentSummaryHeaderView * _headerView;
    UIView * _horizontalSeparator;
    PKPaymentPass * _pass;
    NSArray * _paymentApplications;
    PKPaymentService * _paymentService;
    UISegmentedControl * _segmentedControl;
    PKPaymentApplication * _selectedApplication;
    bool  _showHeader;
}

@property (nonatomic) <PKPassPaymentApplicationViewDelegate> *delegate;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPaymentApplication *selectedApplication;
@property (nonatomic) bool showHeader;

- (void).cxx_destruct;
- (void)_selectedApplicationDidChange:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPass:(id)arg1;
- (void)layoutSubviews;
- (id)pass;
- (id)selectedApplication;
- (void)setDelegate:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setSelectedApplication:(id)arg1;
- (void)setShowHeader:(bool)arg1;
- (bool)showHeader;

@end
