/* made by EzioChiu.
 */

@protocol ATAssetLinkControllerObserver <NSObject>

@required

- (void)assetLinkController:(ATAssetLinkController *)arg1 didFinishAsset:(ATAsset *)arg2;
- (void)assetLinkController:(ATAssetLinkController *)arg1 didUpdateAsset:(ATAsset *)arg2;

@optional

- (void)assetLinkController:(ATAssetLinkController *)arg1 didEnqueueAsset:(ATAsset *)arg2;
- (void)assetLinkController:(ATAssetLinkController *)arg1 didProcessFinishedAsset:(ATAsset *)arg2;
- (void)assetLinkController:(ATAssetLinkController *)arg1 didUpdateAssetState:(NSArray *)arg2;

@end
