/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NLP.framework/NLP
 */

@interface NLSearchParserManager : NSObject {
    void * _parser;
}

+ (id)defaultManager;

- (void)dealloc;
- (void)enumerateSearchSuggestions:(id)arg1 options:(id)arg2 withBlock:(id /* block */)arg3;
- (id)init;
- (id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(id /* block */)arg3;

@end
