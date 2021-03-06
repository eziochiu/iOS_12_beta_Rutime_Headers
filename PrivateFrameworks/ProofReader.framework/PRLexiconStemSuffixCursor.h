/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRLexiconStemSuffixCursor : PRLexiconCursor {
    NSString * _abbreviation;
    double  _abbreviationProbability;
    NSString * _stem;
    double  _stemProbability;
    unsigned int  _stemTokenID;
}

- (void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (id)initWithLexicon:(id)arg1 stem:(id)arg2 tokenID:(unsigned int)arg3 abbreviation:(id)arg4 stemProbability:(double)arg5;

@end
