/* made by EzioChiu.
 */

@protocol PXEngineDrivenAssetsTilingLayoutDelegate <NSObject>

@optional

- (double)engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 forAspectRatio:(double)arg3;
- (struct CGSize { double x1; double x2; })engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 contentTileSize:(struct CGSize { double x1; double x2; })arg3;
- (double)engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 zPositionForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)engineDrivenLayoutReferenceSizeDidChange:(PXEngineDrivenAssetsTilingLayout *)arg1;

@end
