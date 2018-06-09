/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPMetricsTracker : NSObject {
    PETScalarEventTracker * _categoriesEngagementTracker;
    PETScalarEventTracker * _categoriesOpportunityTracker;
    SGQPMutableUserSession * _currentSession;
    PETGoalConversionEventTracker * _phrasePredictionResultsTracker;
    PETGoalConversionEventTracker * _phrasePredictionTracker;
    PETGoalConversionEventTracker * _predictionResultsTracker;
    PETGoalConversionEventTracker * _predictionTracker;
    PETScalarEventTracker * _predictionsAbandonmentTracker;
    PETDistributionEventTracker * _predictionsCountTracker;
    PETDistributionEventTracker * _predictionsMessagesCountTracker;
    PETGoalConversionEventTracker * _predictionsTracker;
    PETGoalConversionEventTracker * _resultsTracker;
}

@property (retain) SGQPMutableUserSession *currentSession;

+ (id)emptyMetricsTracker;
+ (id)metricsTrackerWithAsset:(id)arg1;
+ (id)metricsTrackerWithAsset:(id)arg1 existingSession:(id)arg2;

- (void).cxx_destruct;
- (void)categoryEngaged:(id)arg1;
- (id)currentABgroup;
- (id)currentLanguage;
- (id)currentSession;
- (void)generatedCategories:(id)arg1 fromMessages:(id)arg2 conversation:(id)arg3 language:(id)arg4 abGroup:(id)arg5 totalCategoriesRanked:(unsigned long long)arg6;
- (void)generatedPredictions:(id)arg1 fromMessages:(id)arg2 conversation:(id)arg3 language:(id)arg4 abGroup:(id)arg5 totalPredictionsGenerated:(unsigned long long)arg6;
- (void)genericSearchSuggestionEngaged:(id)arg1;
- (id)init;
- (id)initWithLanguages:(id)arg1 abGroups:(id)arg2 phraseIdRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 existingSession:(id)arg4;
- (void)predictionEngaged:(id)arg1;
- (void)resultEngaged;
- (void)searchPerformedWithQuery:(id)arg1;
- (void)setCurrentSession:(id)arg1;
- (void)setLoggingOutletForAllTrackers:(id)arg1;
- (void)showedCategoriesWithIdentifiers:(id)arg1;
- (void)showedPredictionsWithIdentifiers:(id)arg1;

@end
