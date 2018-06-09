/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIImageViewElement : SKUIViewElement {
    NSString * _alt;
    BOOL  _enabled;
    NSString * _entityResourceName;
    NSURL * _entityURL;
    bool  _hasValidEntityValues;
    struct CGSize { 
        double width; 
        double height; 
    }  _layerShadowOffset;
    float  _layerShadowOpacity;
    double  _layerShadowRadius;
    SKUIImageViewElementCacheKey * _resourceCacheKey;
    NSString * _resourceName;
    UIColor * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _shadowRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    SKUIImageViewElementCacheKey * _transientResourceCacheKey;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic) struct CGSize { double x1; double x2; } layerShadowOffset;
@property (nonatomic) float layerShadowOpacity;
@property (nonatomic) double layerShadowRadius;
@property (nonatomic, readonly) id resourceCacheKey;
@property (nonatomic, readonly) NSString *resourceName;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) id transientResourceCacheKey;

- (void).cxx_destruct;
- (id)URL;
- (void)_loadEntityValuesIfNeeded;
- (id)accessibilityText;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)entityValueProperties;
- (void)entityValueProviderDidChange;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (struct CGSize { double x1; double x2; })layerShadowOffset;
- (float)layerShadowOpacity;
- (double)layerShadowRadius;
- (long long)pageComponentType;
- (bool)rendersWithParallax;
- (bool)rendersWithPerspective;
- (id)resourceCacheKey;
- (id)resourceName;
- (void)setLayerShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayerShadowOpacity:(float)arg1;
- (void)setLayerShadowRadius:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowRadius:(double)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowRadius;
- (struct CGSize { double x1; double x2; })size;
- (id)transientResourceCacheKey;
- (id)uniquingMapKey;

@end
