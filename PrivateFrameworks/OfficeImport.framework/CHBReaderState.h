/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBReaderState : CHBState {
    <CHAutoStyling> * mAutoStyling;
    int  mAxisGroup;
    EBReaderSheetState * mEBReaderSheetState;
    struct XlChartPlot { int (**x1)(); struct XlChart3D {} *x2; struct XlChartChartFormat {} *x3; struct XlChartSeriesFormat {} *x4; struct XlChartLineStyle {} *x5; struct XlChartLineStyle {} *x6; struct XlChartLineStyle {} *x7; struct XlChartLineStyle {} *x8; struct ChVector<XlChartPlot::DefText> { struct DefText {} *x_9_1_1; struct DefText {} *x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; } x9; int x10; bool x11; bool x12; bool x13; bool x14; } * mXlCurrentPlot;
    int  mXlCurrentPlotIndex;
    struct XlChartBinaryReader { int (**x1)(); int (**x2)(); int (**x3)(); struct SsrwOORootStorage {} *x4; struct SsrwOOStorage {} *x5; struct XlEshBinaryReader { int (**x_6_1_1)(); struct SsrwOOStream {} *x_6_1_2; struct EshParserVisitor {} *x_6_1_3; struct EshObjectFactory {} *x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_6_1_7; unsigned int x_6_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_6_1_9; bool x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; struct XlReadStgStream {} *x_6_1_13; } x6; struct XlStringExtractor {} *x7; struct XlSheetInfoTable {} *x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; } * mXlReader;
}

@property (nonatomic, readonly) OADColorScheme *colorScheme;

- (id)autoStyling;
- (int)axisGroup;
- (id)colorScheme;
- (void)dealloc;
- (const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; unsigned short x12; unsigned short x13; int x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; }*)defaultFormatForXlSeries:(const struct XlChartDataSeries { int (**x1)(); struct XlChartSeries {} *x2; unsigned short x3; unsigned short x4; unsigned short x5; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat {} **x_6_1_1; struct XlChartSeriesFormat {} **x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned int x_6_1_5; } x6; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat {} **x_7_1_1; struct XlChartSeriesFormat {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; struct ChVector<XlChartCustomLabelText *> { struct XlChartCustomLabelText {} **x_8_1_1; struct XlChartCustomLabelText {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; struct ChVector<unsigned int> { unsigned int *x_9_1_1; unsigned int *x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; } x9; struct ChVector<int> { int *x_10_1_1; int *x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; unsigned int x_10_1_5; } x10; struct XlChartLinkedData {} *x11; struct XlChartLinkedData {} *x12; }*)arg1;
- (id)ebReaderSheetState;
- (id)initWithEBReaderSheetState:(id)arg1;
- (void)readAndCacheXlChartDataSeries;
- (id)resources;
- (void)setAxisGroup:(int)arg1;
- (void)setChart:(id)arg1;
- (void)setXlCurrentPlot:(struct XlChartPlot { int (**x1)(); struct XlChart3D {} *x2; struct XlChartChartFormat {} *x3; struct XlChartSeriesFormat {} *x4; struct XlChartLineStyle {} *x5; struct XlChartLineStyle {} *x6; struct XlChartLineStyle {} *x7; struct XlChartLineStyle {} *x8; struct ChVector<XlChartPlot::DefText> { struct DefText {} *x_9_1_1; struct DefText {} *x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; } x9; int x10; bool x11; bool x12; bool x13; bool x14; }*)arg1;
- (void)setXlCurrentPlotIndex:(int)arg1;
- (id)workbook;
- (const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; unsigned short x12; unsigned short x13; int x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; }*)xlCurrentDefaultSeriesFormat;
- (struct XlChartPlot { int (**x1)(); struct XlChart3D {} *x2; struct XlChartChartFormat {} *x3; struct XlChartSeriesFormat {} *x4; struct XlChartLineStyle {} *x5; struct XlChartLineStyle {} *x6; struct XlChartLineStyle {} *x7; struct XlChartLineStyle {} *x8; struct ChVector<XlChartPlot::DefText> { struct DefText {} *x_9_1_1; struct DefText {} *x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; } x9; int x10; bool x11; bool x12; bool x13; bool x14; }*)xlCurrentPlot;
- (int)xlCurrentPlotIndex;
- (int)xlPlotCount;
- (struct XlChartBinaryReader { int (**x1)(); int (**x2)(); int (**x3)(); struct SsrwOORootStorage {} *x4; struct SsrwOOStorage {} *x5; struct XlEshBinaryReader { int (**x_6_1_1)(); struct SsrwOOStream {} *x_6_1_2; struct EshParserVisitor {} *x_6_1_3; struct EshObjectFactory {} *x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_6_1_7; unsigned int x_6_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_6_1_9; bool x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; struct XlReadStgStream {} *x_6_1_13; } x6; struct XlStringExtractor {} *x7; struct XlSheetInfoTable {} *x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; }*)xlReader;

@end
