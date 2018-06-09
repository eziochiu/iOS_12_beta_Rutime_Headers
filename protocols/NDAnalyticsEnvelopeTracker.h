/* made by EzioChiu.
 */

@protocol NDAnalyticsEnvelopeTracker <NSObject>

@required

- (void)registerEnvelopeContentTypesAsDropped:(NSDictionary *)arg1 forReason:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)registerEnvelopeContentTypesAsPreparedForUpload:(NSArray *)arg1;
- (void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(NSArray *)arg1;
- (void)registerEnvelopeContentTypesAsUploaded:(NSDictionary *)arg1;
- (void)registerEnvelopeCreationAnticipatedForContentType:(int)arg1;
- (void)registerEnvelopesAsCreated:(NSArray *)arg1;
- (void)registerEnvelopesAsReceivedByUploader:(NSArray *)arg1;
- (void)registerEnvelopesAsSubmittedToUploader:(NSArray *)arg1;

@end
