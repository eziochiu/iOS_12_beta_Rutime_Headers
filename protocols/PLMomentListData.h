/* made by EzioChiu.
 */

@protocol PLMomentListData <PLMomentRefreshable>

@required

- (void)addMomentToFront:(id <PLMomentData>)arg1;
- (void)addMoments:(NSOrderedSet *)arg1;
- (NSArray *)batchedMoments;
- (void)delete;
- (NSDate *)endDate;
- (short)generationType;
- (short)granularityLevel;
- (bool)isDeleted;
- (NSOrderedSet *)moments;
- (void)removeMoments:(NSOrderedSet *)arg1;
- (NSDate *)representativeDate;
- (NSData *)reverseLocationData;
- (bool)reverseLocationDataContainsLocation;
- (bool)reverseLocationDataIsValid;
- (void)setEndDate:(NSDate *)arg1;
- (void)setGenerationType:(short)arg1;
- (void)setGranularityLevel:(short)arg1;
- (void)setMoments:(NSOrderedSet *)arg1;
- (void)setRepresentativeDate:(NSDate *)arg1;
- (void)setReverseLocationData:(NSData *)arg1;
- (void)setReverseLocationDataContainsLocation:(bool)arg1;
- (void)setReverseLocationDataIsValid:(bool)arg1;
- (void)setSortIndex:(int)arg1;
- (void)setStartDate:(NSDate *)arg1;
- (void)setUserTitles:(NSArray *)arg1;
- (int)sortIndex;
- (NSDate *)startDate;
- (NSObject<NSCopying> *)uniqueObjectID;
- (NSArray *)userTitles;

@optional

- (NSString *)momentListDebugDescription;

@end