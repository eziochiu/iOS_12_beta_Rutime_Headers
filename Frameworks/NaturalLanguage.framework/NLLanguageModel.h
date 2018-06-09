/* made by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLLanguageModel : NSObject {
    NLLexicon * _lexicon;
    NSString * _localization;
    void * _model;
    NLTokenizer * _tokenizer;
}

@property (readonly, copy) NLLexicon *lexicon;
@property (readonly, copy) NSString *localization;

- (void).cxx_destruct;
- (double)conditionalProbabilityForEntry:(id)arg1 context:(id)arg2;
- (double)conditionalProbabilityForWord:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)enumeratePredictionsForContext:(id)arg1 maxEntriesPerPrediction:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumeratePredictionsForContext:(id)arg1 maxWordsPerPrediction:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (bool)getConditionalProbabilityForTokenID:(unsigned int)arg1 context:(const unsigned int*)arg2 length:(unsigned long long)arg3 probability:(double*)arg4;
- (id)initWithLocalization:(id)arg1;
- (id)lexicon;
- (id)localization;

@end
