/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSMLManager : NSObject {
    NSArray * _categoryList;
    NSMutableDictionary * _combinedBottomScoreOrder;
    NSMutableDictionary * _combinedTopScoreOrder;
    PRSCoreDuet * _coreDuet;
    NSMutableDictionary * _dictCoreDuetInfo;
    NSMutableDictionary * _mapPredictionEnginesToClasses;
    NSMutableDictionary * _mapPredictionEnginesToCountFiles;
    NSMutableDictionary * _mapPredictionEnginesToCounts;
    NSMutableDictionary * _mapPredictionEnginesToPredictedTopHit;
}

@property (retain) NSArray *categoryList;
@property (retain) NSMutableDictionary *combinedBottomScoreOrder;
@property (retain) NSMutableDictionary *combinedTopScoreOrder;
@property (retain) PRSCoreDuet *coreDuet;
@property (retain) NSMutableDictionary *dictCoreDuetInfo;
@property (retain) NSMutableDictionary *mapPredictionEnginesToClasses;
@property (retain) NSMutableDictionary *mapPredictionEnginesToCountFiles;
@property (retain) NSMutableDictionary *mapPredictionEnginesToCounts;
@property (retain) NSMutableDictionary *mapPredictionEnginesToPredictedTopHit;

+ (id)createPathToSpotlightPrefFile;
+ (id)getSPMLSharedInstance;
+ (void)initialize;

- (void).cxx_destruct;
- (void)addCategoryAndGroupNameToTrainCategories:(id)arg1 groupName:(id)arg2;
- (void)addResultToTrainCategories:(id)arg1;
- (void)addResultToTrainingData:(id)arg1 queryString:(id)arg2 action:(id)arg3;
- (id)categoryList;
- (id)combinedBottomScoreOrder;
- (id)combinedTopScoreOrder;
- (id)coreDuet;
- (id)dictCoreDuetInfo;
- (void)dumpPredictionStatsToFlatFiles;
- (unsigned long long)getCountForCategory:(id)arg1;
- (id)getLastSavedCategoryRankings;
- (id)getRankedCategoriesAsDictionaryForDays:(long long)arg1;
- (double)getTimeStampWhenLastLogged;
- (id)getTopHitResultForQuery:(id)arg1 resultSet:(id)arg2;
- (unsigned long long)getTotalResultsUsedCount;
- (unsigned long long)getTotalResultsUsedCountForDuet;
- (id)initManager;
- (id)mapPredictionEnginesToClasses;
- (id)mapPredictionEnginesToCountFiles;
- (id)mapPredictionEnginesToCounts;
- (id)mapPredictionEnginesToPredictedTopHit;
- (void)saveLastRankingForCategories:(id)arg1;
- (void)setCategoryList:(id)arg1;
- (void)setCombinedBottomScoreOrder:(id)arg1;
- (void)setCombinedTopScoreOrder:(id)arg1;
- (void)setCoreDuet:(id)arg1;
- (void)setDictCoreDuetInfo:(id)arg1;
- (void)setMapPredictionEnginesToClasses:(id)arg1;
- (void)setMapPredictionEnginesToCountFiles:(id)arg1;
- (void)setMapPredictionEnginesToCounts:(id)arg1;
- (void)setMapPredictionEnginesToPredictedTopHit:(id)arg1;
- (void)setTimeStampWhenLastLogged:(double)arg1;
- (void)setTotalResultsUsedCount:(unsigned long long)arg1;
- (void)trackQueryCountsForQuery:(id)arg1 resultSet:(id)arg2 staticModelTopHit:(id)arg3;
- (void)updateCountsForUsedResult:(id)arg1;

@end
