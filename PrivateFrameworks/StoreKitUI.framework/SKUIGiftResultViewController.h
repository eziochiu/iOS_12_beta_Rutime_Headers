/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftResultViewController : SKUIGiftStepViewController {
    UIButton * _giftAgainButton;
    UIImage * _itemImage;
    SKUIGiftItemView * _itemView;
}

- (void).cxx_destruct;
- (void)_doneButtonAction:(id)arg1;
- (void)_giftAgainAction:(id)arg1;
- (id)_itemImage;
- (id)_itemView;
- (void)_setItemImage:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (void)viewWillAppear:(bool)arg1;

@end
