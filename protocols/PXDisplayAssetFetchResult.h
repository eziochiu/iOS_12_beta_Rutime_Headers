/* made by EzioChiu.
 */

@protocol PXDisplayAssetFetchResult <PXSectionedFetchResult>

@required

- (bool)containsObject:(id <PXDisplayAsset>)arg1;
- (<PXDisplayAsset> *)firstObject;
- (<PXDisplayAsset> *)objectAtIndex:(unsigned long long)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;

@end
