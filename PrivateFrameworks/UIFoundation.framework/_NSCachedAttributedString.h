/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _NSCachedAttributedString : NSMutableAttributedString {
    long long  _allocedRunsSize;
    NSAttributeDictionary * _baseAttributes;
    id  _contents;
    unsigned long long  _hashValue;
    long long  _length;
    long long  _numHits;
    long long  _numRuns;
    struct { id x1; } * _runs;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (bool)_baselineMode;
- (bool)_isDeallocating;
- (bool)_isStringDrawingTextStorage;
- (bool)_tryRetain;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)cache;
- (id)copyCachedInstance;
- (void)dealloc;
- (void)finalize;
- (bool)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (oneway void)release;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)string;

@end
