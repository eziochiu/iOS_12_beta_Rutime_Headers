/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMFPlayer : NSObject {
    EMFPlusPlayer * m_emfPlusPlayer;
    MFGraphicsDevice * m_gdi;
    bool  m_headerDone;
    bool  m_ignoreEMFPlusRecords;
    bool  m_ignoreEMFRecords;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInLogicalUnits:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInPoints:(id)arg1;

- (void)dealloc;
- (void)done;
- (id)getGdi;
- (id)initWithGraphicsDevice:(id)arg1;
- (int)play:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playAbortPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playAlphaBlend:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playAngleArc:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(bool)arg3;
- (int)playArc:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playArcTo:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playBeginPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playBitBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playChord:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playCloseFigure:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playCreateBrushIndirect:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playCreateDibPatternBrushPT:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playCreateMonoBrush:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playCreatePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playCreatePen:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playDeleteObject:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playEllipse:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playEndPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playExcludeClipRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playExtCreateFontIndirectW:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playExtCreatePen:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playExtTextOut:(unsigned int)arg1 in_pRecord:(const char *)arg2 wideChars:(bool)arg3;
- (int)playExtTextOutA:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playExtTextOutW:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playFillRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playHeader:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playIntersectClipRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playInvertRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playLineTo:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playMaskBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playModifyWorldTransform:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playMoveToEx:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playOffsetClipRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playPaintRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playPie:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playPlgBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playPolyBezier:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(bool)arg3;
- (int)playPolyBezierTo:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(bool)arg3;
- (int)playPolyDraw:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(bool)arg3;
- (int)playPolyLine:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(bool)arg3;
- (int)playPolyLineTo:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(bool)arg3;
- (int)playPolyPolyLine:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(bool)arg3;
- (int)playPolyPolygon:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(bool)arg3;
- (int)playPolygon:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(bool)arg3;
- (int)playRealizePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playRectangle:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playResizePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playRestoreDC:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playRoundRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSaveDC:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playScaleViewportExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playScaleWindowExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSelectClipPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSelectClipRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSelectObject:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSelectPalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetArcDirection:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetBkColour:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetBkMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetBrushOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetDIBitsToDevice:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetMapMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetMetaRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetMiterLimit:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetPaletteEntries:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetPolyFillMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetRop2:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetStretchBltMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetTextAlign:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetTextColour:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetTextJustification:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetViewportExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetViewportOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetWindowExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetWindowOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playSetWorldTransform:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playStretchBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playStretchDIBits:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (int)playStrokeAndFillPath:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_stroke:(bool)arg3 in_fill:(bool)arg4;
- (int)playUnknown:(unsigned int)arg1 in_recordType:(unsigned int)arg2 in_pRecord:(const char *)arg3;
- (int)playUnsupported:(unsigned int)arg1 in_recordName:(const char *)arg2 in_pRecord:(const char *)arg3;
- (int)playWidenPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;
- (void)setIgnoreEMFPlusRecords:(bool)arg1;
- (void)setIgnoreEMFRecords:(bool)arg1;

@end
