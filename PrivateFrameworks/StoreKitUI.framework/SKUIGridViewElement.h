/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGridViewElement : SKUIViewElement {
    id  _persistenceKey;
    bool  _showsEditMode;
}

@property (nonatomic, readonly) bool allowsMultipleSelectionDuringEditing;
@property (nonatomic, readonly) SKUICollectionDOMFeature *collectionFeature;
@property (nonatomic, readonly) bool showsEditMode;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (long long)_countOfInputCheckboxesWithBaseElement:(id)arg1 limit:(long long)arg2;
- (bool)allowsMultipleSelectionDuringEditing;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)collectionFeature;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;
- (id)persistenceKey;
- (bool)showsEditMode;

@end
