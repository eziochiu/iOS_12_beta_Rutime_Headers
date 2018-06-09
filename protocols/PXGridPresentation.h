/* made by EzioChiu.
 */

@protocol PXGridPresentation <NSObject>

@optional

- (UIViewController *)createAlbumListViewControllerWithConfiguration:(PXPhotoKitCollectionsDataSourceManagerConfiguration *)arg1;
- (void)createGridViewControllerWithAssets:(void *)arg1 withTitle:(void *)arg2 hideTabBar:(void *)arg3 containerViewController:(void *)arg4 navigationItemDelegate:(void *)arg5 andCompletion:(void *)arg6; // needs 6 arg types, found 11: <NSFastEnumeration> *, NSString *, bool, UIViewController *, <PXGridPresentationNavigationItemDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (UIViewController *)createImportHistoryGridViewControllerWithCollectionList:(PHCollectionList *)arg1;
- (UIViewController *)createPanoramaViewController;
- (UIViewController *)createPhotosAlbumViewControllerForAlbum:(PHAssetCollection *)arg1 withFetchResult:(PHFetchResult *)arg2;
- (UIViewController *)createPhotosPickerViewControllerWithSelectedAssets:(void *)arg1 anchorAtAsset:(void *)arg2 inAssetCollection:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, PHAsset *, PHAssetCollection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSOrderedSet *, void*
- (UIViewController *)createSharedAlbumListViewControllerWithConfiguration:(PXPhotoKitCollectionsDataSourceManagerConfiguration *)arg1;

@end
