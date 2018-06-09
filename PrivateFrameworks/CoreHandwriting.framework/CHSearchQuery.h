/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHSearchQuery : CHQuery {
    NSArray * _foundItems;
    NSString * _queryString;
}

@property (setter=_setFoundItems:, nonatomic, copy) NSArray *foundItems;
@property (nonatomic, copy) NSString *queryString;

- (void)_enumerateMatchingRangesForStrokeGroupResult:(id)arg1 locales:(id)arg2 searchString:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)_setFoundItems:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_tokenIndexRangeForStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inResult:(id)arg2;
- (void)dealloc;
- (id)debugName;
- (id)foundItems;
- (id)initWithRecognitionSession:(id)arg1;
- (id)q_foundItemsForSearchString:(id)arg1 sessionResult:(id)arg2;
- (void)q_updateQueryResult;
- (id)queryString;
- (void)setQueryString:(id)arg1;
- (void)stop;

@end
