/* made by EzioChiu.
 */

@protocol UICollectionViewDataSource <NSObject>

@required

- (UICollectionViewCell *)collectionView:(UICollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)collectionView:(UICollectionView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional

- (bool)collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)collectionView:(UICollectionView *)arg1 indexPathForIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (void)collectionView:(UICollectionView *)arg1 moveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (UICollectionReusableView *)collectionView:(UICollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NSArray *)indexTitlesForCollectionView:(UICollectionView *)arg1;
- (long long)numberOfSectionsInCollectionView:(UICollectionView *)arg1;

@end
