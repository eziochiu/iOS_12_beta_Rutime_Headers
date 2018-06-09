/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REUpNextMLModelManager : NSObject

+ (void)removeStoredModel;

- (void)addObserver:(id)arg1;
- (id)comparatorWithRules:(id)arg1;
- (void)performTrainingWithFeatureMaps:(id)arg1 events:(id)arg2;
- (float)predicitedProbabilityForLogicalElement:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
