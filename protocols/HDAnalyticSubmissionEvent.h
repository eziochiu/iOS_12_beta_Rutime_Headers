/* made by EzioChiu.
 */

@protocol HDAnalyticSubmissionEvent <NSObject>

@required

- (unsigned int)AWDMetricID;
- (PBCodable *)codableRepresentationForAWDSubmission;

@end
