/* made by EzioChiu.
 */

@protocol _DRTopicInterestPrivacyMaintaining

@required

- (void)purgeEntriesEarlierThanDate:(NSDate *)arg1;
- (void)purgeEntriesWithPrefix:(NSString *)arg1 earlierThanDate:(NSDate *)arg2;

@end
