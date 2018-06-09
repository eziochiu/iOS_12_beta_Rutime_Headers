/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSITokenizer : NSObject {
    struct __CFLocale { } * _locale;
    bool  _localeIsGerman;
    struct __CFStringTokenizer { } * _nameTokenizer;
    void * _tagger;
}

- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id*)arg3;
- (id)normalizeString:(id)arg1 matchType:(unsigned long long)arg2;
- (void)tokenizePersonName:(id)arg1 tokenOutput:(struct tokenOutput_t { id x1; id x2; struct { /* ? */ } x3; long long x4; long long x5; struct { /* ? */ } *x6; long long x7; long long x8; }*)arg2;
- (void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(struct tokenOutput_t { id x1; id x2; struct { /* ? */ } x3; long long x4; long long x5; struct { /* ? */ } *x6; long long x7; long long x8; }*)arg3;

@end