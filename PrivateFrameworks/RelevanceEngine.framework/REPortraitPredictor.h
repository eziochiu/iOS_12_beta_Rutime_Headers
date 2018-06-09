/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REPortraitPredictor : REPredictor {
    NSMutableDictionary * _namedEntityScores;
    PPNamedEntityStore * _namedEntityStore;
}

+ (double)updateInterval;

- (void).cxx_destruct;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)init;
- (void)update;
- (float)userAffinityToContent:(id)arg1;

@end
