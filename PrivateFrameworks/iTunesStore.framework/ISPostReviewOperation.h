/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate> {
    bool  _backgroundReview;
    ISReview * _review;
}

@property (getter=isBackgroundReview) bool backgroundReview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (retain) ISReview *review;
@property (readonly) Class superclass;

- (id)_httpBody;
- (void)dealloc;
- (bool)isBackgroundReview;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)review;
- (void)run;
- (void)setBackgroundReview:(bool)arg1;
- (void)setReview:(id)arg1;

@end
