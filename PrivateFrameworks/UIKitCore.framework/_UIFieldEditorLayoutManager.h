/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFieldEditorLayoutManager : NSLayoutManager {
    UIFont * _fontForExtraBulletRendering;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingBoxForBulletAtCharIndex:(long long)arg1 inUnobscuredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_completeBulletRenderingForTextContainer:(id)arg1;
- (long long)_generateBulletGlyphs:(const unsigned short*)arg1 properties:(const long long*)arg2 characterIndexes:(const unsigned long long*)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 unobscuredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 obscuredLength:(long long)arg7 obscureExistingText:(bool)arg8;
- (void)resetFontForExtraBulletRendering;
- (void)showCGGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { double x1; double x2; }*)arg2 count:(unsigned long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 attributes:(id)arg6 inContext:(struct CGContext { }*)arg7;
- (void)useFontForExtraBulletRendering:(id)arg1;

@end