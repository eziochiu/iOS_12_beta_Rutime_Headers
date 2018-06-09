/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationUnconsumedOnly : NSObject <FCFeedTransforming> {
    <FCFeedTransforming> * _innerFilter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <FCFeedTransforming> *innerFilter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFilterMethod:(unsigned long long)arg1 consumedArticleItems:(id)arg2 minimumTimeSinceFirstConsumedToFilter:(double)arg3 filterDate:(id)arg4 articleIDProvider:(id /* block */)arg5 dateOfArticleIDConsumptionProvider:(id /* block */)arg6 maxVersionConsumedProvider:(id /* block */)arg7 dateOfMaxVersionConsumptionProvider:(id /* block */)arg8;
- (id)innerFilter;
- (void)setInnerFilter:(id)arg1;
- (id)transformFeedItems:(id)arg1;

@end
