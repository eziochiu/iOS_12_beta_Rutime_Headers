/* made by EzioChiu.
 */

@protocol NSLayoutManagerDelegate <NSObject>

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutManager:(NSLayoutManager *)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(NSTextContainer *)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 glyphPosition:(struct CGPoint { double x1; double x2; })arg5 characterIndex:(unsigned long long)arg6;
- (void)layoutManager:(NSLayoutManager *)arg1 didCompleteLayoutForTextContainer:(NSTextContainer *)arg2 atEnd:(bool)arg3;
- (double)layoutManager:(NSLayoutManager *)arg1 lineSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)layoutManager:(NSLayoutManager *)arg1 paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)layoutManager:(NSLayoutManager *)arg1 paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)layoutManager:(NSLayoutManager *)arg1 shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg2;
- (bool)layoutManager:(NSLayoutManager *)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
- (unsigned long long)layoutManager:(NSLayoutManager *)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const unsigned long long*)arg4 font:(UIFont *)arg5 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (bool)layoutManager:(NSLayoutManager *)arg1 shouldSetLineFragmentRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(NSTextContainer *)arg5 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (long long)layoutManager:(NSLayoutManager *)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (void)layoutManager:(NSLayoutManager *)arg1 textContainer:(NSTextContainer *)arg2 didChangeGeometryFromSize:(struct CGSize { double x1; double x2; })arg3;
- (void)layoutManagerDidInvalidateLayout:(NSLayoutManager *)arg1;

@end
