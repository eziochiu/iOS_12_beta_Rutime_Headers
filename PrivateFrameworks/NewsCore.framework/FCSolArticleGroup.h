/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolArticleGroup : NSObject {
    NSSet * _articles;
    double  _heuristicScore;
    NSMutableSet * _orphans;
    double  _personalizationScore;
    FCHeadlineClusteringRules * _rules;
    double  _score;
    FCSolTagID * _tagId;
    NSMutableSet * _topArticles;
}

@property (nonatomic, retain) NSSet *articles;
@property (nonatomic) double heuristicScore;
@property (nonatomic, readonly) NSMutableSet *orphans;
@property (nonatomic) double personalizationScore;
@property (nonatomic, retain) FCHeadlineClusteringRules *rules;
@property (nonatomic, readonly) double score;
@property (nonatomic, retain) FCSolTagID *tagId;
@property (nonatomic, readonly) NSMutableSet *topArticles;

+ (id)predictBestGroup:(id)arg1 ungroupedArticles:(id)arg2 ungroupedTags:(id)arg3 articlesByTag:(id)arg4 heuristic:(id)arg5 autoFavoriteHeuristic:(id)arg6;

- (void).cxx_destruct;
- (id)articles;
- (void)computeTopArticlesAndScore;
- (double)heuristicScore;
- (id)initWithTagId:(id)arg1 personalizationScore:(double)arg2 articles:(id)arg3 rules:(id)arg4;
- (id)orphans;
- (double)personalizationScore;
- (id)rules;
- (double)score;
- (void)setArticles:(id)arg1;
- (void)setHeuristicScore:(double)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setRules:(id)arg1;
- (void)setTagId:(id)arg1;
- (id)tagId;
- (id)topArticles;

@end
