/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController {
    SKUIGiftConfirmView * _confirmView;
    bool  _isShowingConfirmation;
    SKUIGiftPurchaseRequest * _purchaseRequest;
    SKUIFocusedTouchGestureRecognizer * _touchRecognizer;
}

- (void).cxx_destruct;
- (void)_buyButtonAction:(id)arg1;
- (id)_buyButtonTitle;
- (void)_cancelBuyConfirmation:(id)arg1;
- (id)_confirmButtonTitle;
- (void)_finishPurchaseWithResult:(bool)arg1 errorMessage:(id)arg2;
- (id)_newBuyBarButtonItemWithTitle:(id)arg1;
- (void)_purchaseGift;
- (void)_removeCancelGestureRecognizer;
- (void)_setShowingConfirmation:(bool)arg1 animated:(bool)arg2;
- (void)_showSuccessPage;
- (void)_termsButtonAction:(id)arg1;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)loadView;

@end
