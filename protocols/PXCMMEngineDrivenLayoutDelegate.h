/* made by EzioChiu.
 */

@protocol PXCMMEngineDrivenLayoutDelegate <PXEngineDrivenAssetsTilingLayoutDelegate>

@required

- (long long)engineDrivenLayout:(PXCMMEngineDrivenLayout *)arg1 assetStatusAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)engineDrivenLayout:(PXCMMEngineDrivenLayout *)arg1 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)engineDrivenLayout:(PXCMMEngineDrivenLayout *)arg1 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;

@end
