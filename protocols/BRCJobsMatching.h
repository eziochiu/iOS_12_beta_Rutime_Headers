/* made by EzioChiu.
 */

@protocol BRCJobsMatching <NSObject>

@required

- (NSString *)jobsDescription;
- (PQLFormatInjection *)matchingJobsWhereSQLClause;

@end
