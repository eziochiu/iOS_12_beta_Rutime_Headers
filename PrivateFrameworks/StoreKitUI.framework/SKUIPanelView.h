/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPanelView : SKUIViewReuseView <SKUIAnimatorDOMFeatureDelegate, SKUIViewElementView> {
    NSMapTable * _animators;
    UIResponder * _inputResponder;
    NSMapTable * _viewElements;
    NSMapTable * _viewMargins;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (void)_enumerateChildrenOfViewElement:(id)arg1 usingBlock:(id /* block */)arg2;
+ (bool)_isValidTextInputViewElement:(id)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_marginsForViewElement:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3 context:(id)arg4;
+ (bool)_shouldDisplayViewElement:(id)arg1;
+ (struct CGSize { double x1; double x2; })_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (bool)_useEditorialLayoutForLabelElement:(id)arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)animatorFeature:(id)arg1 performAnimationWithName:(id)arg2 options:(id)arg3;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (bool)resignFirstResponder;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
