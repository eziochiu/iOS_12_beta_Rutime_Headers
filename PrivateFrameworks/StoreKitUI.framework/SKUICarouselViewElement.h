/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICarouselViewElement : SKUIViewElement {
    double  _displayInterval;
}

@property (nonatomic, readonly) double displayInterval;
@property (nonatomic, readonly) SKUIProgressIndicatorViewElement *progressIndicatorElement;

- (id)applyUpdatesWithElement:(id)arg1;
- (double)displayInterval;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;
- (id)progressIndicatorElement;

@end
