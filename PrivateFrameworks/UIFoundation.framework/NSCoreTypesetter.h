/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSCoreTypesetter : NSTypesetter {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  characterRange;
    <NSCoreTypesetterDelegate> * delegate;
    id /* block */  laidOutLineFragment;
    struct CGSize { 
        double width; 
        double height; 
    }  textContainerSize;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property <NSCoreTypesetterDelegate> *delegate;
@property (copy) id /* block */ laidOutLineFragment;
@property struct CGSize { double x1; double x2; } textContainerSize;

+ (bool)_allowsDefaultLineBreakStrategy;
+ (void)_lineMetricsForAttributes:(id)arg1 typesetterBehavior:(long long)arg2 usesFontLeading:(bool)arg3 applySpacings:(bool)arg4 usesSystemFontLeading:(bool)arg5 usesNegativeFontLeading:(bool)arg6 lineHeight:(double*)arg7 baselineOffset:(double*)arg8 spacing:(double*)arg9 applicationFrameworkContext:(long long)arg10;
+ (void)_lineMetricsFromAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 typesetterBehavior:(long long)arg3 usesFontLeading:(bool)arg4 applySpacings:(bool)arg5 usesSystemFontLeading:(bool)arg6 usesNegativeFontLeading:(bool)arg7 lineHeight:(double*)arg8 baselineOffset:(double*)arg9 spacing:(double*)arg10 applicationFrameworkContext:(long long)arg11;
+ (void)_maximumAscentAndDescentForRuns:(struct __CFArray { }*)arg1 ascender:(double*)arg2 descender:(double*)arg3;
+ (bool)_supportsStringDrawingPath:(unsigned char)arg1;

- (void).cxx_destruct;
- (int)_NSFastDrawString:(id)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 paragraphStyle:(id)arg4 typesetterBehavior:(long long)arg5 lineBreakMode:(long long)arg6 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 padding:(double)arg8 cgContext:(struct CGContext { }*)arg9 baselineRendering:(bool)arg10 usesFontLeading:(bool)arg11 usesScreenFont:(bool)arg12 scrollable:(bool)arg13 syncAlignment:(bool)arg14 mirrored:(bool)arg15 boundingRectPointer:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg16 baselineOffsetPointer:(double*)arg17 wantsTextLineFragments:(bool)arg18 applicationFrameworkContext:(long long)arg19;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_stringDrawingCoreTextEngineWithOriginalString:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 padding:(double)arg3 context:(struct CGContext { }*)arg4 forceClipping:(bool)arg5 styledTextOptions:(id)arg6 attributes:(id)arg7 stringDrawingOptions:(long long)arg8 drawingContext:(id)arg9 wantsTextLineFragments:(bool)arg10 validatedAttributedString:(id)arg11 firstNonRenderedCharacterIndex:(long long*)arg12 foundSoftHyphenAtEOL:(bool*)arg13 enginePathUsed:(unsigned char*)arg14;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id /* block */)laidOutLineFragment;
- (void)layout;
- (void)setCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setLaidOutLineFragment:(id /* block */)arg1;
- (void)setTextContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })textContainerSize;

@end
