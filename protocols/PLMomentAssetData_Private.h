/* made by EzioChiu.
 */

@protocol PLMomentAssetData_Private <PLMomentAssetData>

@optional

- (NSString *)avalancheUUID;
- (bool)hasChanges;
- (bool)isAvalancheStackPhoto;
- (bool)isInterestingForAvalanche;
- (bool)isPhoto;
- (bool)isVideo;

@end
