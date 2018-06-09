/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentCardFrontFaceView : PKPassFrontFaceView {
    UILabel * _balanceLabel;
}

- (void).cxx_destruct;
- (void)_handleAccountChanged:(id)arg1;
- (void)_updateBalanceWithAccount:(id)arg1;
- (void)createHeaderContentViews;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setShowsLiveBalance:(bool)arg1;
- (bool)showsShare;
- (id)templateForLayoutMode:(long long)arg1;

@end
