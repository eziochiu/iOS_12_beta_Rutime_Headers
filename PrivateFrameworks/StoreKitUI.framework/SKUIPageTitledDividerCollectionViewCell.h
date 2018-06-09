/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView> {
    double  _buttonContentHorizontalPadding;
    SKUIButtonViewElement * _buttonViewElement;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UIButton * _dividerButton;
    NSNumber * _dividerButtonImageRequestIdentifier;
    UILabel * _dividerLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageVerticalPadding;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _internalHorizontalMargins;
    UIView * _leftLine;
    UIView * _rightLine;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _titleVerticalPadding;
    double  _topEdgeInset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dividerTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double topEdgeInset;

+ (id)_attributedStringForButtonViewElement:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForDividerTitle:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForViewElementText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentEdgeInsetsForViewElement:(id)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageVerticalPaddingForViewElement:(id)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_titleVerticalPaddingForViewElement:(id)arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 dividerTitle:(id)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (double)viewElementInsetDividerHeight:(id)arg1;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (id)_imageForImageViewElement:(id)arg1 returningRequestIdentifier:(out id*)arg2 context:(id)arg3;
- (void)applyLayoutAttributes:(id)arg1;
- (id)dividerTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDividerTitle:(id)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setTopEdgeInset:(double)arg1;
- (double)topEdgeInset;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
