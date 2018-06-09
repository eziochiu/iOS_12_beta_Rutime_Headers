/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISegmentedControlViewElement : SKUIViewElement {
    long long  _maximumNumberOfVisibleItems;
    NSString * _moreListTitle;
}

@property (nonatomic, readonly) SKUIDividerViewElement *bottomDivider;
@property (nonatomic, readonly) long long initialSelectedItemIndex;
@property (nonatomic, readonly) long long maximumNumberOfVisibleItems;
@property (nonatomic, readonly) NSString *moreListTitle;
@property (nonatomic, readonly) NSArray *segmentItemTitles;

- (void).cxx_destruct;
- (void)_enumerateItemElementsUsingBlock:(id /* block */)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)bottomDivider;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)initialSelectedItemIndex;
- (long long)maximumNumberOfVisibleItems;
- (id)moreListTitle;
- (long long)pageComponentType;
- (id)segmentItemTitles;

@end
