/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSATSGlyphStorage : CTGlyphStorageInterface {
    long long  _bufferSize;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    struct __CFSet { } * _children;
    struct { 
        unsigned int _hasNonNominalGlyph : 1; 
        unsigned int _hasPositionalStake : 1; 
        unsigned int _hasBidiRun : 1; 
        unsigned int _isEllipsisStorage : 1; 
        unsigned int _hasNonNominalStringIndexes : 1; 
        unsigned int _isUnordered : 1; 
        unsigned int _hasTotalAbsorbedCount : 1; 
        unsigned int _reserved : 25; 
    }  _gFlags;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _glyphRange;
    struct __CTGlyphStorage { } * _glyphStorage;
    const struct { id x1; long long x2; long long x3; double x4; double x5; double x6; double x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 1; unsigned int x_9_1_8 : 1; unsigned int x_9_1_9 : 24; } x9; } * _lastElasticRun;
    long long  _lastElasticRunLocation;
    struct __CFArray { } * _masterRuns;
    long long  _numRuns;
    long long  _paraEndElasticCharIndex;
    double  _paraEndElasticCharWidth;
    NSATSGlyphStorage * _parent;
    long long  _runBufferSize;
    struct { id x1; long long x2; long long x3; double x4; double x5; double x6; double x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 1; unsigned int x_9_1_8 : 1; unsigned int x_9_1_9 : 24; } x9; } * _runs;
    struct { long long x1; struct { unsigned short x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; long long x_2_1_5; } x2[0]; } * _stack;
    NSString * _textString;
    long long  _totalAbsorbedCount;
    NSATSTypesetter * _typesetter;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (const struct { id x1; long long x2; long long x3; double x4; double x5; double x6; double x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 1; unsigned int x_9_1_8 : 1; unsigned int x_9_1_9 : 24; } x9; }*)_attributeRunForCharacterAtIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_collectElasticRangeSurroundingCharacterAtIndex:(long long)arg1 minimumCharacterIndex:(long long)arg2;
- (struct __CTRun { }*)_createEllipsisRunWithStringRange:(struct { long long x1; long long x2; })arg1 attributes:(struct __CFDictionary { }*)arg2;
- (void)_flushCachedObjects;
- (void)_invalidate;
- (bool)_isDeallocating;
- (bool)_resolvePositionalStakeGlyphsForLineFragment:(struct __CTLine { }*)arg1 lineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minPosition:(double)arg3 maxPosition:(double)arg4 maxLineFragmentWidth:(double)arg5 breakHint:(long long*)arg6;
- (bool)_tryRetain;
- (double)_widthForStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)childGlyphStorageWithCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct __CTTypesetter { }*)createCTTypesetter;
- (struct __CTGlyphStorage { }*)createCopy:(struct { long long x1; long long x2; })arg1;
- (void)dealloc;
- (void)disposeGlyphStack;
- (void)finalize;
- (void)getCustomAdvance:(struct CGSize { double x1; double x2; }*)arg1 forIndex:(long long)arg2;
- (void)initGlyphStack:(long long)arg1;
- (id)initWithTypesetter:(id)arg1;
- (void)insertGlyphs:(struct { long long x1; long long x2; })arg1;
- (void)moveGlyphsTo:(long long)arg1 from:(struct { long long x1; long long x2; })arg2;
- (void)popGlyph:(long long)arg1;
- (void)pushGlyph:(long long)arg1;
- (oneway void)release;
- (void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize { double x1; double x2; })arg1 forIndex:(long long)arg2;
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2;
- (void)setGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setProps:(unsigned int)arg1 forIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 forIndex:(long long)arg2;
- (void)swapGlyph:(long long)arg1 withIndex:(long long)arg2;
- (id)typesetter;

@end
