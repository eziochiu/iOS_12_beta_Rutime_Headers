/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHText : NSObject {
    bool  _textColorShouldBeBlack;
    Class  _tswpTextClass;
}

@property (nonatomic) bool textColorShouldBeBlack;

+ (void)clearCachesForDocumentRoot:(id)arg1;
+ (struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; bool x3; })initializeTextLayoutResults;
+ (id)sharedInteriorWrappingText;
+ (id)sharedText;
+ (bool)shouldLayoutTextForWrapWidth:(double)arg1 textLayoutProperties:(id)arg2;

- (void)drawAttributedString:(const struct __CFAttributedString { }*)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 atPosition:(struct CGPoint { double x1; double x2; })arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 viewScale:(double)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 atPosition:(struct CGPoint { double x1; double x2; })arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 viewScale:(double)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 atPosition:(struct CGPoint { double x1; double x2; })arg4 viewScale:(double)arg5;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 viewScale:(double)arg5;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 viewScale:(double)arg4;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint { double x1; double x2; })arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 viewScale:(double)arg7;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint { double x1; double x2; })arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 viewScale:(double)arg7 layoutProperties:(id)arg8;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint { double x1; double x2; })arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 viewScale:(double)arg7 layoutProperties:(id)arg8 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; bool x3; }*)arg9;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint { double x1; double x2; })arg5 viewScale:(double)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint { double x1; double x2; })arg5 viewScale:(double)arg6 layoutProperties:(id)arg7;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint { double x1; double x2; })arg5 viewScale:(double)arg6 layoutProperties:(id)arg7 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; bool x3; }*)arg8;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inText:(id)arg2 paragraphStyle:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inText:(id)arg2 paragraphStyle:(id)arg3 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inText:(id)arg2 paragraphStyle:(id)arg3 wrapWidth:(double)arg4 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inText:(id)arg2 paragraphStyle:(id)arg3 wrapWidth:(double)arg4 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 layoutProperties:(id)arg6;
- (id)initWithTSWPTextClass:(Class)arg1;
- (struct CGSize { double x1; double x2; })measureAttributedString:(const struct __CFAttributedString { }*)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 layoutProperties:(id)arg4;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 checkNumberTemplates:(bool)arg5;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 checkNumberTemplates:(bool)arg5 layoutProperties:(id)arg6 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; bool x3; }*)arg7;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 layoutProperties:(id)arg5 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; bool x3; }*)arg6;
- (id)p_newWPColumnForText:(id)arg1 wpTextObject:(id)arg2 wrapWidth:(double)arg3 layoutProperties:(id)arg4;
- (struct CGSize { double x1; double x2; })p_sizeForNumberTemplate:(id)arg1 paragraphStyle:(id)arg2 textCache:(id)arg3 layoutProperties:(id)arg4;
- (bool)p_styleSupportsEqualDigits:(id)arg1 textCache:(id)arg2;
- (id)p_textCacheForParagraphStyle:(id)arg1;
- (id)p_wpColumnForText:(id)arg1 paragraphStyle:(id)arg2 textBlack:(bool)arg3 wrapWidth:(double)arg4 textCache:(id)arg5 layoutProperties:(id)arg6;
- (id)p_wpStorageForAttributedString:(const struct __CFAttributedString { }*)arg1 paragraphStyle:(id)arg2;
- (id)p_wpTextForParagraphStyle:(id)arg1 text:(id)arg2 textBlack:(bool)arg3 textCache:(id)arg4;
- (id)p_wpTextForParagraphStyle:(id)arg1 text:(id)arg2 textBlack:(bool)arg3 textCache:(id)arg4 cacheKey:(id)arg5;
- (const struct __CTFont { }*)retainedCTFontForParagraphStyle:(id)arg1;
- (void)setTextColorShouldBeBlack:(bool)arg1;
- (bool)textColorShouldBeBlack;
- (struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; bool x3; })textLayoutResultsForColumn:(id)arg1;

@end
