/* made by EzioChiu.
 */

@protocol BRCJobIdentifying <BRCJobsMatching, NSCopying>

@required

- (PQLRawInjection *)columns;
- (PQLFormatInjection *)columnsValues;

@end
