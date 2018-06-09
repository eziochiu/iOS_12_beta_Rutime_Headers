/* made by EzioChiu.
 */

@protocol PXTilingControllerCompositionInput <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundsForTilingController:(PXTilingController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromTilingController:(PXTilingController *)arg2;
- (PXTilingScrollInfo *)convertScrollInfo:(PXTilingScrollInfo *)arg1 fromTilingController:(PXTilingController *)arg2;
- (NSArray *)invalidationContexts;
- (struct CGPoint { double x1; double x2; })originForTilingController:(PXTilingController *)arg1;
- (struct CGPoint { double x1; double x2; })preferredOriginForTilingController:(PXTilingController *)arg1;
- (struct CGSize { double x1; double x2; })referenceSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollBoundsForTilingController:(PXTilingController *)arg1;
- (PXTilingScrollInfo *)scrollInfoForTilingController:(PXTilingController *)arg1;
- (NSArray *)tilingControllersRequestingFocus;

@end
