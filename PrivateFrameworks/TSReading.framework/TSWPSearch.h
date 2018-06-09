/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPSearch : TSKSearch {
    TSWPFilteredString * _filteredString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _searchedString;
    TSWPStorage * _storage;
}

@property (nonatomic, readonly, retain) TSWPFilteredString *filteredString;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *searchedString;
@property (nonatomic, readonly) TSWPStorage *storage;

- (void)dealloc;
- (id)filteredString;
- (void)foundHitWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id /* block */)arg3 storage:(id)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (bool)isComplete;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)searchedString;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)storage;

@end
