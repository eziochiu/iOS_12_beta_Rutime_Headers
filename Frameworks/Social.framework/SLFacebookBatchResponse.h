/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookBatchResponse : SLFacebookResponse

@property (readonly) NSArray *batchResponseParameters;

- (id)batchResponseParameters;
- (long long)batchedResponsesCount;
- (id)responseAtBatchIndex:(long long)arg1;

@end
