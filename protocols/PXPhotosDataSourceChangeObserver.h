/* made by EzioChiu.
 */

@protocol PXPhotosDataSourceChangeObserver <NSObject>

@optional

- (void)photosDataSource:(PXPhotosDataSource *)arg1 didChange:(PXPhotosDataSourceChange *)arg2;
- (void)photosDataSource:(PXPhotosDataSource *)arg1 didReceivePhotoLibraryChange:(PHChange *)arg2;
- (NSArray *)photosDataSourceInterestingAssetReferences:(PXPhotosDataSource *)arg1;
- (void)photosDataSourceWillChange:(PXPhotosDataSource *)arg1;

@end
