/* made by EzioChiu.
 */

@protocol PHAssetRepresentationPersistenceObserver <PHAssetRepresentationObserver>

@required

- (void)persistenceStateOfAssetRepresentationDidChange:(PHAssetRepresentation *)arg1;

@end
