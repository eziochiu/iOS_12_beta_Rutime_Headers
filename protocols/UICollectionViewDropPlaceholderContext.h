/* made by EzioChiu.
 */

@protocol UICollectionViewDropPlaceholderContext <UIDragAnimating>

@required

- (bool)commitInsertionWithDataSourceUpdates:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSIndexPath *, void*
- (bool)deletePlaceholder;
- (UIDragItem *)dragItem;
- (void)setNeedsCellUpdate;

@end
