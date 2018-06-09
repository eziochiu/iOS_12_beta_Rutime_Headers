/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKFooterTransactionView : UIView <PKPeerPaymentContactResolverDelegate> {
    bool  _animated;
    PKStackedTextItemGroupView * _contentView;
    unsigned long long  _deferUpdateCounter;
    PKStackedTextItemGroup * _displayItem;
    PKStackedTextItemGroupView * _headerView;
    UIImageView * _imageView;
    bool  _needsContentUpdate;
    PKPaymentPass * _pass;
    PKPeerPaymentContactResolver * _peerPaymentContactResolver;
    UIView * _separatorView;
    PKPaymentTransaction * _transaction;
    PKTransitPassProperties * _transitProperties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPeerPaymentContactResolver *peerPaymentContactResolver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentTransaction *transaction;
@property (nonatomic, readonly) PKTransitPassProperties *transitProperties;

- (void).cxx_destruct;
- (bool)_deemphasizeAmount;
- (id)_image;
- (id)_locationText;
- (id)_merchantText;
- (id)_peerPaymentCounterpart;
- (id)_relativeDateText;
- (id)_statusText;
- (bool)_strikethroughAmount;
- (void)_updateContentAnimated:(bool)arg1;
- (void)beginUpdates;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)endUpdates:(bool)arg1;
- (bool)hasContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 peerPaymentContactResolver:(id)arg2;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (id)pass;
- (id)peerPaymentContactResolver;
- (void)setPass:(id)arg1 animated:(bool)arg2;
- (void)setTransaction:(id)arg1 animated:(bool)arg2;
- (void)setTransitProperties:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)transaction;
- (id)transitProperties;

@end
