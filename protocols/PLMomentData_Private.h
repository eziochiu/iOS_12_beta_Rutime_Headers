/* made by EzioChiu.
 */

@protocol PLMomentData_Private <PLMomentData>

@optional

- (double)approximateLatitude;
- (double)approximateLongitude;
- (int)cachedPhotosCount;
- (int)cachedVideosCount;
- (void)setApproximateLatitude:(double)arg1;
- (void)setApproximateLongitude:(double)arg1;
- (void)setCachedPhotosCount:(int)arg1;
- (void)setCachedVideosCount:(int)arg1;

@end
