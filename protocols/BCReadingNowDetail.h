/* made by EzioChiu.
 */

@protocol BCReadingNowDetail <BCCloudData>

@required

- (NSString *)assetID;
- (bool)isTrackedAsRecent;
- (NSDate *)lastEngagedDate;

@end
