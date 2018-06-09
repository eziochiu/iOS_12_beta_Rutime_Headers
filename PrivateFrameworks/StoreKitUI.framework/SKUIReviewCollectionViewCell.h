/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView> {
    id /* block */  _descriptionTapAction;
    SKUITextBoxView * _descriptionView;
    id /* block */  _responseDescriptionTapAction;
    SKUIResponseView * _responseView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ descriptionTapAction;
@property (nonatomic, retain) SKUITextBoxView *descriptionView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ responseDescriptionTapAction;
@property (nonatomic, retain) SKUIResponseView *responseView;
@property (readonly) Class superclass;

+ (id)_attributedStringForDateLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForTitleLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_resetTapGestures;
- (void)contentViewTapped:(id)arg1;
- (id /* block */)descriptionTapAction;
- (id)descriptionView;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id /* block */)responseDescriptionTapAction;
- (id)responseView;
- (void)setDescriptionTapAction:(id /* block */)arg1;
- (void)setDescriptionView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setResponseDescriptionTapAction:(id /* block */)arg1;
- (void)setResponseView:(id)arg1;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
