/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRTurkishSuffix : NSObject {
    unsigned char  _isOptional;
    NSString * _name;
    NSString * _pattern;
    unsigned char  _patternBuffer;
    unsigned long long  _patternBufferLength;
    bool  _postponesApostrophe;
    int  _suffixType;
}

+ (void)_enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 options:(unsigned long long)arg4 depth:(unsigned long long)arg5 matchState:(int)arg6 suffixStack:(id*)arg7 suffixRangeStack:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg8 usingBlock:(id /* block */)arg9;
+ (void)enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
+ (void)enumerateSuffixMatchesForWord:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
+ (id)standardTurkishNounSuffixes;
+ (id)standardTurkishSuffixes;
+ (id)standardTurkishVerbSuffixes;

- (void)_fillPatternBuffer;
- (void)dealloc;
- (id)description;
- (id)initWithPattern:(id)arg1 name:(id)arg2 type:(int)arg3 postponesApostrophe:(bool)arg4;
- (unsigned long long)matchingIndexInBuffer:(char *)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 matchWithNameOnly:(bool*)arg4;
- (id)name;
- (id)pattern;
- (bool)postponesApostrophe;
- (int)suffixType;

@end
