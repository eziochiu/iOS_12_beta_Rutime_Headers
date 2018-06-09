/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIQuery : NSObject {
    PSIParse * _baseParse;
    bool  _baseParseCouldHaveResults;
    NSArray * _datedParses;
    <PSIQueryDelegate> * _delegate;
    bool  _didStart;
    NSMutableDictionary * _groupIdsByTokenKey;
    NSArray * _identifierTokens;
    bool  _isCanceled;
    NSArray * _nextKeywordSuggestions;
    unsigned long long  _numberOfNextKeywordSuggestionToProcess;
    NSArray * _queryTokens;
    NSString * _searchText;
    NSDictionary * _substitutions;
    NSDictionary * _substitutionsByStringToken;
    bool  _useWildcardText;
    bool  _usesPrefixBasedWordEmbedding;
    unsigned long long  _wordEmbeddingMode;
    NSArray * _wordEmbeddingParses;
}

@property (getter=isCanceled, readonly) bool canceled;
@property (nonatomic, retain) NSArray *nextKeywordSuggestions;
@property (nonatomic) unsigned long long numberOfNextKeywordSuggestionToProcess;
@property (nonatomic, readonly, copy) NSArray *queryTokens;
@property (nonatomic, readonly, copy) NSString *searchText;
@property (nonatomic, retain) NSDictionary *substitutions;
@property (nonatomic, readonly) bool useWildcardText;
@property (nonatomic) bool usesPrefixBasedWordEmbedding;
@property (nonatomic) unsigned long long wordEmbeddingMode;

- (void).cxx_destruct;
- (id)_dateFilterWithAttributes:(id)arg1;
- (id)_datedParsesWithString:(id)arg1 baseParse:(id)arg2;
- (struct __CFSet { }*)_idsOfGroupsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(bool)arg3;
- (struct __CFSet { }*)_idsOfGroupsMatchingToken:(id)arg1;
- (void)_postProcessPersonGroupsInGroupArrays:(id)arg1;
- (void)bootstrap;
- (void)cancel;
- (void)computeSuggestions;
- (id)description;
- (void)enumerateParsesWithMode:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithQueryTokens:(id)arg1 searchText:(id)arg2 useWildcardText:(bool)arg3 delegate:(id)arg4;
- (bool)isCanceled;
- (id)nextKeywordSuggestions;
- (unsigned long long)numberOfNextKeywordSuggestionToProcess;
- (void)processDates;
- (id)processParse:(id)arg1;
- (void)processWordEmbeddings;
- (id)queryTokens;
- (bool)recursiveAddToGroupResults:(id)arg1 aggregate:(id)arg2 atIndex:(unsigned long long)arg3 outOf:(unsigned long long)arg4 inGroupArrays:(id)arg5 dateToken:(id)arg6;
- (void)runWithResultsHandler:(id /* block */)arg1;
- (id)searchText;
- (void)setNextKeywordSuggestions:(id)arg1;
- (void)setNumberOfNextKeywordSuggestionToProcess:(unsigned long long)arg1;
- (void)setSubstitutions:(id)arg1;
- (void)setUsesPrefixBasedWordEmbedding:(bool)arg1;
- (void)setWordEmbeddingMode:(unsigned long long)arg1;
- (id)substitutions;
- (bool)useWildcardText;
- (bool)usesPrefixBasedWordEmbedding;
- (unsigned long long)wordEmbeddingMode;

@end
