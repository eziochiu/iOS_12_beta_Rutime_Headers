/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupMoreInfoView : UIScrollView {
    struct CGSize { 
        double width; 
        double height; 
    }  _boundSize;
    long long  _context;
    UIImageView * _customImageView;
    PKTableHeaderView * _headerView;
    PKPaymentSetupMoreInfoItem * _moreInfoItem;
    PKPaymentPass * _pass;
    PKPassView * _passView;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) UIImageView *customImageView;
@property (nonatomic, readonly) PKTableHeaderView *headerView;
@property (nonatomic, readonly) PKPaymentSetupMoreInfoItem *moreInfoItem;
@property (nonatomic, readonly) PKPaymentPass *pass;

- (void).cxx_destruct;
- (long long)context;
- (id)customImageView;
- (id)headerView;
- (id)initWithMoreInfoItem:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3;
- (void)layoutSubviews;
- (id)moreInfoItem;
- (id)pass;
- (void)pk_applyAppearance:(id)arg1;

@end
