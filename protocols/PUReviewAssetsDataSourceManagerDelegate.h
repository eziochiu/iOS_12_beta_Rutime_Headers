/* made by EzioChiu.
 */

@protocol PUReviewAssetsDataSourceManagerDelegate <NSObject>

@required

- (void)assetsDataSourceManager:(PUAssetsDataSourceManager *)arg1 didChangeAssetsDataSource:(PUAssetsDataSource *)arg2 changeDetails:(PXArrayChangeDetails *)arg3;

@end
