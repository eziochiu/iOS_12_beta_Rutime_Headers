/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPLanguageContext : NSObject {
    NSString * _abGroup;
    SGQPEmotivePhrases * _emotivePhrases;
    NSArray * _finalOrderingPattern;
    NSArray * _finalOrderingPatternCategories;
    double  _finalThreshold;
    double  _finalThresholdCategories;
    NSString * _language;
    SGQPMetricsTracker * _metricsTracker;
    SGQPMLPredictor * _mlPredictor;
    SGQPParsecEntitiesPredictor * _parsecPredictor;
}

@property (nonatomic, readonly) NSString *abGroup;
@property (nonatomic, readonly) NSString *language;

+ (id)array:(id)arg1 orderedByPattern:(id)arg2;
+ (id)languageContextsWithMetricsTracker:(id)arg1 asset:(id)arg2;
+ (id)orderingPatternFromString:(id)arg1;
+ (id)unsupportedLanguageContextWithMetricsTracker:(id)arg1;

- (void).cxx_destruct;
- (id)abGroup;
- (id)emotivePhrasesPredictionsFromMessages:(id)arg1;
- (id)init;
- (id)initWithParsecPredictor:(id)arg1 emotivePhrases:(id)arg2 finalOrderingPattern:(id)arg3 finalThreshold:(double)arg4 mlPredictor:(id)arg5 finalOrderingPatternCategories:(id)arg6 finalThresholdCategories:(double)arg7 language:(id)arg8 abGroup:(id)arg9 metricsTracker:(id)arg10;
- (id)language;
- (id)parsecEntitiesInMessages:(id)arg1;
- (id)queryPredictionsForMessages:(id)arg1 conversationId:(id)arg2 limit:(unsigned long long)arg3;
- (id)rankedCategoriesForMessages:(id)arg1 conversationId:(id)arg2 limit:(unsigned long long)arg3;

@end
