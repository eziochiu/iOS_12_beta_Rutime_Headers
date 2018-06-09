/* made by EzioChiu.
 */

@protocol AVTAvatarAttributeEditorSectionController <NSObject>

@required

+ (bool)supportsSelection;

- (void)cell:(AVTAttributeCollectionViewCell *)arg1 willDisplayAtIndex:(long long)arg2;
- (<AVTAvatarAttributeEditorControllerSubSelectionDelegate> *)delegate;
- (void)didHighlightItemAtIndex:(void *)arg1 cell:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: long long, AVTAttributeCollectionViewCell *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)didSelectItemAtIndex:(long long)arg1 cell:(AVTAttributeCollectionViewCell *)arg2;
- (void)didUnhighlightItemAtIndex:(void *)arg1 cell:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: long long, AVTAttributeCollectionViewCell *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)indexForItem:(id <AVTAvatarAttributeEditorSectionItem>)arg1;
- (long long)numberOfItems;
- (<AVTAvatarAttributeEditorSectionItemPrefetching> *)prefetchingSectionItemForIndex:(long long)arg1;
- (void)resetToDefaultState;
- (<AVTAvatarAttributeEditorSection> *)section;
- (long long)selectedIndex;
- (void)setDelegate:(id <AVTAvatarAttributeEditorControllerSubSelectionDelegate>)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForItemAtIndex:(long long)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
- (void)updateCell:(AVTAttributeCollectionViewCell *)arg1 forItemAtIndex:(long long)arg2;
- (void)updateWithSection:(id <AVTAvatarAttributeEditorSection>)arg1;
- (UIView *)viewForIndex:(long long)arg1;

@end
