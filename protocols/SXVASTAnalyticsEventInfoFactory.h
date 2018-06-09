/* made by EzioChiu.
 */

@protocol SXVASTAnalyticsEventInfoFactory <NSObject>

@required

- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfo;
- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfoWithMetadata:(id <SVVideoMetadataProviding>)arg1;
- (ADMediaAnalyticsProgressEventInfo *)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id <SVVideoMetadataProviding>)arg2;

@end
