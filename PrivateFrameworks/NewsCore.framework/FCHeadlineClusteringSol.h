/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHeadlineClusteringSol : NSObject <FCHeadlineClustering> {
    NSSet * _articleIds;
    NSDictionary * _articlesByTag;
    FCSolHeuristic * _autoFavoriteHeuristic;
    NSSet * _groupableTags;
    NSSet * _hardOrphans;
    NSDictionary * _headlinesById;
    FCSolHeuristic * _heuristic;
    FCHeadlineClusteringRules * _rules;
    NSDictionary * _tagScores;
    NSDictionary * _tagsByArticle;
}

@property (nonatomic, retain) NSSet *articleIds;
@property (nonatomic, retain) NSDictionary *articlesByTag;
@property (nonatomic, retain) FCSolHeuristic *autoFavoriteHeuristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *groupableTags;
@property (nonatomic, retain) NSSet *hardOrphans;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *headlinesById;
@property (nonatomic, retain) FCSolHeuristic *heuristic;
@property (nonatomic, retain) FCHeadlineClusteringRules *rules;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tagScores;
@property (nonatomic, retain) NSDictionary *tagsByArticle;

- (void).cxx_destruct;
- (id)articleIds;
- (id)articlesByTag;
- (id)autoFavoriteHeuristic;
- (id)clusterHeadlinesByTopic:(id)arg1 subscribedTags:(id)arg2 personalizer:(id)arg3 rules:(id)arg4;
- (id)computeBestGrouping:(id)arg1 tagScores:(id)arg2 headlinesById:(id)arg3;
- (void)computeGrouping:(id)arg1 topK:(double)arg2;
- (double)computeGroupingUtility:(id)arg1;
- (void)filterOverflowedOrphans:(id)arg1;
- (id)groupableTags;
- (id)hardOrphans;
- (id)headlinesById;
- (id)heuristic;
- (void)optimizeForLayout:(id)arg1;
- (id)rules;
- (void)setArticleIds:(id)arg1;
- (void)setArticlesByTag:(id)arg1;
- (void)setAutoFavoriteHeuristic:(id)arg1;
- (void)setGroupableTags:(id)arg1;
- (void)setHardOrphans:(id)arg1;
- (void)setHeadlinesById:(id)arg1;
- (void)setHeuristic:(id)arg1;
- (void)setRules:(id)arg1;
- (void)setTagScores:(id)arg1;
- (void)setTagsByArticle:(id)arg1;
- (id)sortedScoredArticles:(id)arg1 length:(long long)arg2 asc:(bool)arg3;
- (double)specificityScoreForTag:(id)arg1;
- (id)tagScores;
- (id)tagsByArticle;

@end
