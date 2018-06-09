/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackItemView : SKUIViewReuseView <SKUIViewElementView> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    NSMapTable * _imageViewToImageResourceCacheKey;
    NSArray * _imageViews;
    SKUIViewElementLayoutContext * _lastContext;
    SKUIAttributedStringView * _textView;
    SKUIStackItemViewElement * _viewElement;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *imageViewToImageResourceCacheKey;
@property (nonatomic, copy) NSArray *imageViews;
@property (nonatomic, retain) SKUIViewElementLayoutContext *lastContext;
@property (nonatomic, readonly) unsigned long long numberOfLines;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKUIAttributedStringView *textView;
@property (nonatomic, retain) SKUIStackItemViewElement *viewElement;

+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_textViewLayoutWithWidth:(double)arg1 string:(id)arg2;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 numberOfLines:(unsigned long long*)arg4;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)imageViewToImageResourceCacheKey;
- (id)imageViews;
- (id)lastContext;
- (void)layoutSubviews;
- (unsigned long long)numberOfLines;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setImageViewToImageResourceCacheKey:(id)arg1;
- (void)setImageViews:(id)arg1;
- (void)setLastContext:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textView;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewElement;
- (id)viewForElementIdentifier:(id)arg1;

@end
