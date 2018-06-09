/* made by EzioChiu.
 */

@protocol PXPhotoKitAdjustedDisplayAsset <PXDisplayAsset>

@required

- (NSString *)adjustedContentIdentifier;
- (PLPhotoEditModel *)applyAdjustmentsToEditModel:(PLPhotoEditModel *)arg1 editSource:(PLEditSource *)arg2;
- (PHAsset *)photoKitAsset;
- (bool)wantsAdjustments;

@end
