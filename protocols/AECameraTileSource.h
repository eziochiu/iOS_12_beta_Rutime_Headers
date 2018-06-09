/* made by EzioChiu.
 */

@protocol AECameraTileSource <NSObject>

@required

- (void)applyExistingGeometryForTile:(id <PXUIViewBasicTile>)arg1;
- (UIViewController *)cameraParentViewController;
- (void)ensureSubviewForTile:(id <PXUIViewBasicTile>)arg1;

@end