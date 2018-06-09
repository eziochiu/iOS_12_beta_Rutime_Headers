/* made by EzioChiu.
 */

@protocol PXMutableAssetVariationCollectionViewCell <NSObject>

@required

- (PXAssetEditOperationManager *)editOperationManager;
- (bool)isPlaybackAllowed;
- (PXAssetVariationRenderProvider *)renderProvider;
- (void)setEditOperationManager:(PXAssetEditOperationManager *)arg1;
- (void)setPlaybackAllowed:(bool)arg1;
- (void)setRenderProvider:(PXAssetVariationRenderProvider *)arg1;
- (void)setSpec:(PXWidgetSpec *)arg1;
- (void)setVariationOption:(PXAssetVariationOption *)arg1;
- (PXWidgetSpec *)spec;
- (PXAssetVariationOption *)variationOption;

@end
