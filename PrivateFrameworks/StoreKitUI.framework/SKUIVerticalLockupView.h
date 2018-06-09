/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIVerticalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIPerspectiveView, SKUIViewElementView> {
    NSHashTable * _artworkRelatedChildViewElementViews;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    NSMapTable * _imageViewToImageResourceCacheKey;
    NSMapTable * _lineSpacings;
    SKUILockupViewElement * _lockupElement;
    double  _opacityOfViewsOtherThanProductImageView;
    double  _productImageAdjustedWidth;
    SKUISizeValue * _productImageBoundingSize;
    UIView * _productImageView;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _productImageViewOriginalTransform;
    long long  _sizingStyle;
    NSMapTable * _topInsets;
    NSMapTable * _viewElementViews;
    double  _zoomingImageAlpha;
    double  _zoomingImageWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double opacityOfViewsOtherThanProductImageView;
@property (nonatomic) long long sizingStyle;
@property (readonly) Class superclass;
@property (nonatomic) double zoomingImageAlpha;
@property (nonatomic) double zoomingImageWidth;

+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (double)_bottomInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (double)_topInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (double)opacityOfViewsOtherThanProductImageView;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setOpacityOfViewsOtherThanProductImageView:(double)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setSizingStyle:(long long)arg1;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setZoomingImageAlpha:(double)arg1;
- (void)setZoomingImageWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)sizingStyle;
- (void)updateForChangedDistanceFromVanishingPoint;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (double)zoomingImageAlpha;
- (double)zoomingImageWidth;

@end
