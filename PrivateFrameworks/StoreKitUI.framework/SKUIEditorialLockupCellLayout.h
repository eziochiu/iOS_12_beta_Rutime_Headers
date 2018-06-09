/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    SKUIEditorialCellLayout * _editorialCellLayout;
    UIView * _editorialContainerView;
    double  _editorialHeight;
    long long  _layoutStyle;
    SKUILockupItemCellLayout * _lockupLayout;
    SKUICellLayoutView * _lockupView;
    UIColor * _offerNoticeTextColor;
    SKUITextBoxView * _textBoxView;
    unsigned long long  _visibleFields;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) SKUILockupItemCellLayout *lockupCellLayout;
@property (nonatomic, readonly) SKUITextBoxView *textBoxView;
@property (nonatomic) unsigned long long visibleFields;

+ (double)_imagePaddingForArtworkSize:(long long)arg1;
+ (double)editorialWidthForCellWidth:(double)arg1 lockupStyle:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg2;

- (void).cxx_destruct;
- (id)_editorialCellLayout;
- (id)_editorialContainerView;
- (bool)_isItemOfferButtonHidden;
- (id)_lockupView;
- (bool)_showsItemOfferUnderEditorial;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)iconImage;
- (id)iconImageView;
- (bool)isIconImageHidden;
- (id)itemOffer;
- (id)itemOfferNoticeString;
- (id)itemState;
- (void)layoutForItemOfferChange;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)lockupCellLayout;
- (void)setBackgroundColor:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageHidden:(bool)arg1;
- (void)setItemOffer:(id)arg1;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (void)setItemOfferNoticeString:(id)arg1;
- (void)setItemState:(id)arg1 animated:(bool)arg2;
- (void)setLayoutStyle:(long long)arg1;
- (void)setRestricted:(bool)arg1;
- (void)setVisibleFields:(unsigned long long)arg1;
- (id)textBoxView;
- (unsigned long long)visibleFields;

@end
