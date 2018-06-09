/* made by EzioChiu.
 */

@protocol PLMomentAssetData <PLMomentRefreshable>

@required

- (NSArray *)assetComparisonSortDescriptors;
- (long long)compareToAsset:(id <PLMomentAssetData>)arg1;
- (double)curationScore;
- (NSDate *)dateCreated;
- (bool)favorite;
- (NSString *)globalUUID;
- (bool)isDeleted;
- (CLLocation *)location;
- (<PLMomentData> *)moment;
- (NSData *)placeAnnotationData;
- (NSData *)reverseLocationData;
- (bool)reverseLocationDataIsValid;
- (void)setCurationScore:(double)arg1;
- (void)setDateCreated:(NSDate *)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setLocation:(CLLocation *)arg1;
- (void)setMoment:(id <PLMomentData>)arg1;
- (void)setReverseLocationData:(NSData *)arg1;
- (void)setReverseLocationDataIsValid:(bool)arg1;
- (void)setShiftedLocation:(CLLocation *)arg1;
- (void)setShiftedLocationIsValid:(bool)arg1;
- (CLLocation *)shiftedLocation;
- (bool)shiftedLocationIsValid;
- (NSObject<NSCopying> *)uniqueObjectID;
- (bool)visibilityStateIsEqualToState:(short)arg1;

@optional

- (NSString *)cloudAssetGUID;
- (NSString *)customCollectionName;
- (NSString *)customCollectionUUID;
- (NSString *)customMomentName;
- (NSString *)customMomentUUID;
- (double)duration;
- (long long)height;
- (short)kind;
- (short)kindSubtype;
- (NSDate *)modificationDate;
- (void)setCustomCollectionName:(NSString *)arg1;
- (void)setCustomCollectionUUID:(NSString *)arg1;
- (void)setCustomMomentName:(NSString *)arg1;
- (void)setCustomMomentUUID:(NSString *)arg1;
- (void)setDuration:(double)arg1;
- (void)setHeight:(long long)arg1;
- (void)setKind:(short)arg1;
- (void)setKindSubtype:(short)arg1;
- (void)setModificationDate:(NSDate *)arg1;
- (void)setWidth:(long long)arg1;
- (NSString *)uuid;
- (long long)width;

@end
