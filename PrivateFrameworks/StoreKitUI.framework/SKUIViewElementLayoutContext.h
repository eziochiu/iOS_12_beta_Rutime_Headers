/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewElementLayoutContext : NSObject {
    double  _activePageWidth;
    NSMutableDictionary * _aggregateValues;
    <SKUIArtworkRequestDelegate> * _artworkRequestDelegate;
    NSString * _backdropGroupName;
    SKUIBadgeTextAttachmentLoader * _badgeImageLoader;
    NSMapTable * _blurColors;
    MPUBorderDrawingCache * _borderDrawingCache;
    SKUIClientContext * _clientContext;
    unsigned long long  _containerViewElementType;
    double  _displayScale;
    NSMapTable * _editorialLayouts;
    NSHashTable * _expandedEditorialLayouts;
    SKUIItemOfferButton * _itemOfferButton;
    NSMutableDictionary * _itemOfferButtonSizes;
    SKUIViewElementTextLayoutCache * _labelLayoutCache;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _largeScreenElementPadding;
    NSMutableSet * _observedArtworkRequestIDs;
    UIViewController * _parentViewController;
    UIColor * _placeholderColor;
    SKUIResourceLoader * _resourceLoader;
    UIColor * _tintColor;
}

@property (nonatomic) double activePageWidth;
@property (nonatomic) <SKUIArtworkRequestDelegate> *artworkRequestDelegate;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, readonly) SKUIBadgeTextAttachmentLoader *badgeImageLoader;
@property (nonatomic, readonly) MPUBorderDrawingCache *borderDrawingCache;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic) unsigned long long containerViewElementType;
@property (nonatomic) double displayScale;
@property (nonatomic, retain) SKUIViewElementTextLayoutCache *labelLayoutCache;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } largeScreenElementPadding;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic, readonly) NSCache *placeholderImageCache;
@property (nonatomic, retain) SKUIResourceLoader *resourceLoader;
@property (nonatomic, retain) UIColor *tintColor;

+ (double)_calculateValueFromString:(id)arg1 withDefault:(double)arg2 coefficent:(double)arg3;
+ (double)itemWidthForElement:(id)arg1 withDefaultWidth:(double)arg2 fitWidth:(double)arg3;

- (void).cxx_destruct;
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;
- (id)_initSKUIViewElementLayoutContext;
- (bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (struct CGSize { double x1; double x2; })_sizeForImageElement:(id)arg1 applyTransform:(bool)arg2;
- (double)activePageWidth;
- (id)aggregateValueForKey:(id)arg1;
- (id)artworkRequestDelegate;
- (id)backdropGroupName;
- (id)badgeImageLoader;
- (id)blurColorForCacheKey:(id)arg1;
- (id)borderDrawingCache;
- (id)clientContext;
- (unsigned long long)containerViewElementType;
- (id)dataConsumerForImageElement:(id)arg1;
- (void)dealloc;
- (double)defaultItemWidthForViewElement:(id)arg1;
- (double)displayScale;
- (id)editorialLayoutForLabelElement:(id)arg1 width:(double)arg2;
- (void)expandEditorialForLabelElement:(id)arg1;
- (id)imageResourceCacheKeyForArtwork:(id)arg1;
- (id)imageResourceCacheKeyForViewElement:(id)arg1;
- (id)init;
- (id)initWithStorePageSectionContext:(id)arg1;
- (id)initWithStorePageSectionContext:(id)arg1 previousLayoutContext:(id)arg2;
- (void)invalidateAllEditorialLayouts;
- (bool)isEditorialLayoutExpanded:(id)arg1;
- (id)labelLayoutCache;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeScreenElementPadding;
- (bool)loadImageForArtwork:(id)arg1 dataConsumer:(id)arg2 reason:(long long)arg3;
- (bool)loadImageForArtwork:(id)arg1 reason:(long long)arg2;
- (bool)loadImageForBadgeElement:(id)arg1 reason:(long long)arg2;
- (bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2;
- (bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2 dataConsumer:(id)arg3;
- (bool)loadTemplatedImageForBadgeElement:(id)arg1 reason:(long long)arg2;
- (long long)maxWidthForElement:(id)arg1 withDefaultWidth:(long long)arg2;
- (id)parentViewController;
- (id)placeholderColor;
- (id)placeholderImageCache;
- (id)placeholderImageForImageElement:(id)arg1 dataConsumer:(id)arg2;
- (id)placeholderImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2;
- (id)requestIdentifierForArtwork:(id)arg1;
- (id)requestIdentifierForResourceCacheKey:(id)arg1;
- (id)requestIdentifierForViewElement:(id)arg1;
- (id)resourceLoader;
- (void)setActivePageWidth:(double)arg1;
- (void)setAggregateValue:(id)arg1 forKey:(id)arg2;
- (void)setArtworkRequestDelegate:(id)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBlurColor:(id)arg1 cacheKey:(id)arg2;
- (void)setClientContext:(id)arg1;
- (void)setContainerViewElementType:(unsigned long long)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setLabelLayoutCache:(id)arg1;
- (void)setLargeScreenElementPaddingFromContext:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setResourceLoader:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForBadgeElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForImageElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForItemOfferButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForViewElement:(id)arg1 width:(double)arg2;
- (id)textPropertiesForViewElement:(id)arg1 width:(double)arg2;
- (id)tintColor;
- (id)transientRequestIdentifierForViewElement:(id)arg1;

@end
