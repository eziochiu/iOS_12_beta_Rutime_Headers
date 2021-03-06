/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@interface MSStructuredPageTableDataSource : SUStructuredPageGroupedTableDataSource

- (bool)canDoubleTapIndexPath:(id)arg1;
- (bool)canShowPreviewForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id*)arg2;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;

@end
