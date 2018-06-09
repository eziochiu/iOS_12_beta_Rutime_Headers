/* made by EzioChiu.
 */

@protocol VUILibraryPopoverDataSource <NSObject>

@required

- (long long)numberOfSectionsInPopoverView:(UICollectionView *)arg1;
- (VUILibraryListPopoverViewCell *)popoverView:(UICollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)popoverView:(UICollectionView *)arg1 numberOfItemsInSection:(long long)arg2;

@end
