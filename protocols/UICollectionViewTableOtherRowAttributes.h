/* made by EzioChiu.
 */

@protocol UICollectionViewTableOtherRowAttributes

@required

- (long long)accessoryType;
- (long long)editingStyle;
- (void)setAccessoryType:(long long)arg1;
- (void)setEditingStyle:(long long)arg1;
- (void)setShouldIndentWhileEditing:(bool)arg1;
- (void)setShowsReorderControl:(bool)arg1;
- (bool)shouldIndentWhileEditing;
- (bool)showsReorderControl;

@end
