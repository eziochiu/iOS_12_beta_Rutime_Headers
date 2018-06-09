/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBDataLabel : NSObject

+ (id)chdDataLabelFromXlChartCustomLabelText:(struct XlChartCustomLabelText { int (**x1)(); float x2; float x3; float x4; float x5; int x6; int x7; int x8; int x9; struct XlChartLineStyle {} *x10; struct XlChartFillStyle {} *x11; struct XlChartPicF {} *x12; bool x13; bool x14; bool x15; char *x16; unsigned int x17; struct OcText {} *x18; struct CsColour { unsigned short x_19_1_1; unsigned short x_19_1_2; unsigned short x_19_1_3; unsigned short x_19_1_4; } x19; char *x20; char *x21; int x22; int x23; int x24; int x25; int x26; struct ChVector<XlChartTextFrame::TextRun> { struct TextRun {} *x_27_1_1; struct TextRun {} *x_27_1_2; unsigned int x_27_1_3; unsigned int x_27_1_4; unsigned int x_27_1_5; } x27; unsigned int x28; unsigned int x29; short x30; short x31; unsigned int x32; short x33; short x34; bool x35; bool x36; bool x37; bool x38; bool x39; bool x40; bool x41; bool x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; struct XlString {} *x50; unsigned int x51; unsigned short x52; }*)arg1 state:(id)arg2;
+ (id)chdDataLabelFromXlChartSeriesFormat:(const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; unsigned short x12; unsigned short x13; int x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; }*)arg1 state:(id)arg2;
+ (int)chdLabelPositionEnumFromXlLabelPosition:(int)arg1;
+ (int)xlLabelPositionEnumFromCHDDataLabelPosition:(int)arg1;

@end
