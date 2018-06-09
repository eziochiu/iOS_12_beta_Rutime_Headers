/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRLanguageModel : NSObject {
    NSString * _appIdentifier;
    PRLexicon * _lexicon;
    NSString * _localization;
    void * _model;
}

+ (id)languageModelWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3;
+ (void)performMaintenance;
+ (void)setLogLevel:(long long)arg1;

- (bool)addTokenForString:(id)arg1 tokenID:(unsigned int*)arg2;
- (id)appIdentifier;
- (void)applyExponentialDecay;
- (void)countDynamicNgramsForOrder:(unsigned long long)arg1 threshold:(float)arg2 dynamicModelCount:(unsigned long long*)arg3 cacheCount:(unsigned long long*)arg4;
- (void)dealloc;
- (id)description;
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)enumeratePredictionsForContext:(const unsigned int*)arg1 length:(unsigned long long)arg2 maxPredictions:(unsigned long long)arg3 maxTokensPerPrediction:(unsigned long long)arg4 withBlock:(id /* block */)arg5;
- (void)flushDynamicData;
- (bool)getConditionalProbabilityForTokenID:(unsigned int)arg1 context:(const unsigned int*)arg2 length:(unsigned long long)arg3 probability:(double*)arg4;
- (bool)getFirstDynamicTokenID:(unsigned int*)arg1 lastDynamicTokenID:(unsigned int*)arg2;
- (bool)getUnigramProbabilityForString:(id)arg1 probability:(double*)arg2;
- (void)incrementUsageCountForTokenID:(unsigned int)arg1 context:(const unsigned int*)arg2 length:(unsigned long long)arg3;
- (id)initWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3;
- (id)localization;
- (void)pruneToSize:(unsigned long long)arg1;
- (void)recordWithDifferentialPrivacy:(id)arg1;
- (void)reset;
- (bool)shouldAdaptToTokenSequence:(const unsigned int*)arg1 length:(unsigned long long)arg2;
- (id)stringForTokenID:(unsigned int)arg1;
- (unsigned int)tokenIDForString:(id)arg1;
- (bool)tokenSequenceIsBlacklisted:(const unsigned int*)arg1 length:(unsigned long long)arg2;
- (float)usageCountForTokenID:(unsigned int)arg1;

@end
