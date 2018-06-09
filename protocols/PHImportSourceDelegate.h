/* made by EzioChiu.
 */

@protocol PHImportSourceDelegate

@required

- (void)importSource:(PHImportSource *)arg1 didAddAssets:(NSArray *)arg2;
- (void)importSource:(PHImportSource *)arg1 didDeleteAsset:(PHImportAsset *)arg2;
- (void)importSource:(PHImportSource *)arg1 didRemoveAssets:(NSArray *)arg2;
- (void)importSource:(PHImportSource *)arg1 didUpdateAsset:(PHImportAsset *)arg2 propertyMask:(unsigned short)arg3;
- (bool)shouldImportAsset:(PHImportAsset *)arg1 asDuplicateOfLibraryAsset:(PHAsset *)arg2 applyToAll:(bool*)arg3;
- (void)userHasTrustedHostForImportSource:(PHImportSource *)arg1;
- (void)userRequiredToTrustHostForImportSource:(PHImportSource *)arg1;

@end
