/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLFeedLayoutOperation : FCOperation {
    <NFLFeedLayoutSearchConfiguration> * _feedLayoutSearchConfiguration;
    NFLFeedSettings * _feedSettings;
    <NFLFontManager> * _fontManager;
    id /* block */  _layoutCompletion;
    NFLBatchContext * _nextBatchContext;
    NFLBatchContext * _previousBatchContext;
    NSArray * _result;
    NSArray * _tileInfos;
    double  _tileProminenceScoreBalanceValue;
}

@property (nonatomic, copy) <NFLFeedLayoutSearchConfiguration> *feedLayoutSearchConfiguration;
@property (nonatomic, copy) NFLFeedSettings *feedSettings;
@property (nonatomic, retain) <NFLFontManager> *fontManager;
@property (copy) id /* block */ layoutCompletion;
@property (nonatomic, copy) NFLBatchContext *nextBatchContext;
@property (nonatomic, copy) NFLBatchContext *previousBatchContext;
@property (nonatomic, copy) NSArray *result;
@property (nonatomic, copy) NSArray *tileInfos;
@property (nonatomic) double tileProminenceScoreBalanceValue;

- (void).cxx_destruct;
- (id)feedLayoutSearchConfiguration;
- (id)feedSettings;
- (id)fontManager;
- (id)init;
- (id)initWithTileInfos:(id)arg1 feedLayoutSearchConfiguration:(id)arg2 feedSettings:(id)arg3 fontManager:(id)arg4 tileProminenceScoreBalanceValue:(double)arg5 previousBatchContext:(id)arg6 nextBatchContext:(id)arg7;
- (id /* block */)layoutCompletion;
- (id)nextBatchContext;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)previousBatchContext;
- (id)result;
- (void)setFeedLayoutSearchConfiguration:(id)arg1;
- (void)setFeedSettings:(id)arg1;
- (void)setFontManager:(id)arg1;
- (void)setLayoutCompletion:(id /* block */)arg1;
- (void)setNextBatchContext:(id)arg1;
- (void)setPreviousBatchContext:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setTileInfos:(id)arg1;
- (void)setTileProminenceScoreBalanceValue:(double)arg1;
- (id)tileInfos;
- (double)tileProminenceScoreBalanceValue;
- (bool)validateOperation;

@end
