/* made by EzioChiu.
 */

@protocol PLAssetContainerObserver <NSObject>

@required

- (void)assetContainerDidChange:(PLAssetContainerChangeNotification *)arg1;

@end
