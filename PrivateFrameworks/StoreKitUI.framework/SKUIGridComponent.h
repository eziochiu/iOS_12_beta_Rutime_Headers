/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGridComponent : SKUIPageComponent {
    NSMutableArray * _children;
    struct SKUIEditorialStyle { 
        long long alignment; 
        long long bodyFontWeight; 
        float bodyFontSize; 
        float linkSpacing; 
        long long titleFontWeight; 
        float titleFontSize; 
        float titleSpacing; 
    }  _editorialStyle;
    long long  _gridType;
    struct SKUILockupStyle { 
        long long artworkSize; 
        long long layoutStyle; 
        unsigned long long visibleFields; 
    }  _lockupStyle;
    long long  _missingItemCount;
    bool  _showsIndexNumbers;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) struct SKUIEditorialStyle { long long x1; long long x2; float x3; float x4; long long x5; float x6; float x7; } editorialStyle;
@property (nonatomic, readonly) long long gridType;
@property (nonatomic, readonly) struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; } lockupStyle;
@property (nonatomic, readonly) bool showsIndexNumbers;

- (void).cxx_destruct;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg2;
- (void)_reloadMissingItemCount;
- (void)_setChildrenWithFeaturedContextContext:(id)arg1;
- (id)_updateWithInvalidItemIdentifiers:(id)arg1;
- (id)_updateWithMissingItems:(id)arg1;
- (id)children;
- (long long)componentType;
- (id)description;
- (struct SKUIEditorialStyle { long long x1; long long x2; float x3; float x4; long long x5; float x6; float x7; })editorialStyle;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (long long)gridType;
- (id)initWithBrickItems:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithGridItems:(id)arg1;
- (id)initWithLockups:(id)arg1;
- (id)initWithRoomContext:(id)arg1 gridType:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (bool)isMissingItemData;
- (struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })lockupStyle;
- (id)metricsElementName;
- (bool)showsIndexNumbers;

@end
