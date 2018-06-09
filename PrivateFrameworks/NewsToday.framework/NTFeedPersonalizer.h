/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTFeedPersonalizer : NSObject <FCFeedPersonalizing> {
    double  _articleDiversificationSimilarityExpectationEnd;
    double  _articleDiversificationSimilarityExpectationStart;
    double  _articleDiversificationUniquePublisherExpectationSlope;
    double  _articleDiversificationUniquePublisherExpectationYIntercept;
    FCKeyValueStore * _globalScoreRangesValueStore;
    <FRRingBufferContainer> * _globalScoresRingBufferContainer;
    FCPersonalizationTreatment * _personalizationTreatment;
    <FCReadonlyPersonalizationAggregateStore> * _readonlyPersonalizationAggregateStore;
    <FCTodayPrivateData> * _todayData;
}

@property (nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property (nonatomic) double articleDiversificationSimilarityExpectationStart;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FCKeyValueStore *globalScoreRangesValueStore;
@property (nonatomic, retain) <FRRingBufferContainer> *globalScoresRingBufferContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) FCPersonalizationTreatment *personalizationTreatment;
@property (nonatomic, retain) <FCReadonlyPersonalizationAggregateStore> *readonlyPersonalizationAggregateStore;
@property (readonly) Class superclass;
@property (nonatomic, copy) <FCTodayPrivateData> *todayData;

- (void).cxx_destruct;
- (double)articleDiversificationSimilarityExpectationEnd;
- (double)articleDiversificationSimilarityExpectationStart;
- (double)articleDiversificationUniquePublisherExpectationSlope;
- (double)articleDiversificationUniquePublisherExpectationYIntercept;
- (double)decayedPublisherDiversificationPenalty;
- (id)diversifyArticles:(id)arg1 limit:(unsigned long long)arg2;
- (id)diversifyArticles:(id)arg1 limit:(unsigned long long)arg2 preselectedArticles:(id)arg3;
- (id)globalScoreRangesValueStore;
- (id)globalScoresRingBufferContainer;
- (id)init;
- (id)initWithPersonalizationTreatment:(id)arg1 readonlyPersonalizationAggregateStore:(id)arg2 articleDiversificationSimilarityExpectationStart:(double)arg3 articleDiversificationSimilarityExpectationEnd:(double)arg4 articleDiversificationUniquePublisherExpectationSlope:(double)arg5 articleDiversificationUniquePublisherExpectationYIntercept:(double)arg6 todayData:(id)arg7;
- (id)limitArticlesByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (id)limitArticlesByMinimumArticleQuality:(id)arg1;
- (id)personalizationTreatment;
- (void)prepareAutoFavoritesWithCompletionHandler:(id /* block */)arg1;
- (void)prepareForUseWithCompletionHandler:(id /* block */)arg1;
- (id)rankTagIDsDescending:(id)arg1;
- (id)readonlyPersonalizationAggregateStore;
- (id)scoresForTagIDs:(id)arg1;
- (void)setArticleDiversificationSimilarityExpectationEnd:(double)arg1;
- (void)setArticleDiversificationSimilarityExpectationStart:(double)arg1;
- (void)setArticleDiversificationUniquePublisherExpectationSlope:(double)arg1;
- (void)setArticleDiversificationUniquePublisherExpectationYIntercept:(double)arg1;
- (void)setGlobalScoreRangesValueStore:(id)arg1;
- (void)setGlobalScoresRingBufferContainer:(id)arg1;
- (void)setPersonalizationTreatment:(id)arg1;
- (void)setReadonlyPersonalizationAggregateStore:(id)arg1;
- (void)setTodayData:(id)arg1;
- (id)sortArticles:(id)arg1;
- (id)sortArticles:(id)arg1 configurationSet:(long long)arg2;
- (id)sortArticles:(id)arg1 options:(long long)arg2;
- (id)sortArticles:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
- (id)todayData;
- (unsigned long long)whitelistLevelForTagID:(id)arg1;

@end
