/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUITextEffectStack : CUIShapeEffectStack {
    bool  _renderHighQuality;
}

- (void)_drawShadow:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; })arg1 forGlyphs:(const unsigned short*)arg2 inContext:(struct CGContext { }*)arg3 usingFont:(struct __CTFont { }*)arg4 atPositions:(const struct CGPoint { double x1; double x2; }*)arg5 count:(unsigned long long)arg6;
- (void)_drawShadow:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; })arg1 forGlyphs:(const unsigned short*)arg2 inContext:(struct CGContext { }*)arg3 usingFont:(struct __CTFont { }*)arg4 withAdvances:(const struct CGSize { double x1; double x2; }*)arg5 count:(unsigned long long)arg6;
- (void)_drawShadow:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; })arg1 usingQuartz:(id /* block */)arg2 inContext:(struct CGContext { }*)arg3;
- (void)drawGlyphs:(const unsigned short*)arg1 inContext:(struct CGContext { }*)arg2 usingFont:(struct __CTFont { }*)arg3 atPositions:(const struct CGPoint { double x1; double x2; }*)arg4 count:(unsigned long long)arg5 lineHeight:(double)arg6 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 atScale:(double)arg8;
- (void)drawGlyphs:(const unsigned short*)arg1 inContext:(struct CGContext { }*)arg2 usingFont:(struct __CTFont { }*)arg3 withAdvances:(const struct CGSize { double x1; double x2; }*)arg4 count:(unsigned long long)arg5 lineHeight:(double)arg6 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 atScale:(double)arg8;
- (void)drawProcessedMask:(struct CGContext { }*)arg1 atBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 withScale:(double)arg4;
- (void)drawUsingQuartz:(id /* block */)arg1 inContext:(struct CGContext { }*)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atScale:(double)arg4;
- (double)effectiveInteriorFillOpacity;
- (id)initWithEffectPreset:(id)arg1;
- (struct CGColor { }*)newBackgroundPatternColorWithSize:(struct CGSize { double x1; double x2; })arg1 contentScale:(double)arg2 forContext:(struct CGContext { }*)arg3;
- (struct CGContext { }*)newGlyphMaskContextForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromContext:(struct CGContext { }*)arg2 withScale:(double)arg3;
- (bool)useCoreImageRendering;

@end