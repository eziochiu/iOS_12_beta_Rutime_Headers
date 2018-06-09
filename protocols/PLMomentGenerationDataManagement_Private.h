/* made by EzioChiu.
 */

@protocol PLMomentGenerationDataManagement_Private <PLMomentGenerationDataManagement>

@optional

- (NSDictionary *)generationOptions;
- (void)invalidateLocationDataForAssetsInMoment:(id <PLMomentData>)arg1;
- (void)invalidateLocationDataForAssetsWithOIDs:(NSArray *)arg1;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(bool)arg2;
- (void)setupPhotoLibrary;

@end
