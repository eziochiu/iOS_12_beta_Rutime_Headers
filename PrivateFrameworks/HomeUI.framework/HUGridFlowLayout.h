/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout> {
    HFWallpaperSlice * _blurredWallpaperSlice;
    NSHashTable * _childGridLayouts;
    HUGridLayoutOptions * _layoutOptions;
    NSMutableDictionary * _overrideAttributesByIndexPath;
    HUGridFlowLayout * _parentGridLayout;
    HUWallpaperView * _wallpaperView;
}

@property (nonatomic, retain) HFWallpaperSlice *blurredWallpaperSlice;
@property (nonatomic, retain) NSHashTable *childGridLayouts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, readonly) NSMutableDictionary *overrideAttributesByIndexPath;
@property (nonatomic) HUGridFlowLayout *parentGridLayout;
@property (readonly) Class superclass;
@property (nonatomic) HUWallpaperView *wallpaperView;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)_modifiedLayoutAttributesForAttributes:(id)arg1;
- (void)_updateContainingGridLayout;
- (void)applyOverrideAttributes:(id)arg1 toItemAtIndexPath:(id)arg2;
- (id)blurredWallpaperSlice;
- (id)childGridLayouts;
- (void)clearAllOverrideAttributes;
- (void)clearOverrideAttributesForItemAtIndexPath:(id)arg1;
- (id)init;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutOptions;
- (id)overrideAttributesByIndexPath;
- (id)parentGridLayout;
- (void)prepareLayout;
- (void)registerChildGridLayout:(id)arg1;
- (void)setBlurredWallpaperSlice:(id)arg1;
- (void)setChildGridLayouts:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setParentGridLayout:(id)arg1;
- (void)setWallpaperView:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)unregisterChildGridLayout:(id)arg1;
- (id)wallpaperView;

@end
