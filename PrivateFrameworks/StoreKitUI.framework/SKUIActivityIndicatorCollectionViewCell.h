/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIActivityIndicatorCollectionViewCell : SKUICollectionViewCell <SKUIViewElementView> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    SKUIActivityIndicatorView * _indicatorView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end