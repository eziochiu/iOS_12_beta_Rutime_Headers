/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBGraphic : NSObject

+ (int)objectTypeForShape:(id)arg1;
+ (void)readChart:(id)arg1 chartIndex:(short)arg2 state:(id)arg3;
+ (id)readGraphicWithDictionary:(id)arg1 state:(id)arg2;
+ (void)readGraphicsInChart:(id)arg1 state:(id)arg2;
+ (void)readGraphicsWithState:(id)arg1;
+ (void)readImage:(id)arg1 xlGraphicsInfo:(struct XlGraphicsInfo { int (**x1)(); int x2; short x3; bool x4; bool x5; bool x6; bool x7; struct ChVector<XlGraphicsInfo::XlObjData *> { struct XlObjData {} **x_8_1_1; struct XlObjData {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; bool x9; int x10; struct XlString {} *x11; int x12; int x13; int x14; bool x15; unsigned short x16; unsigned short x17; unsigned short x18; char *x19; unsigned int x20; unsigned int x21; bool x22; unsigned int x23; unsigned int x24; int x25; int x26; bool x27; struct XlString {} *x28; }*)arg2 state:(id)arg3;
+ (id)readMainChartWithState:(id)arg1;
+ (void)readNotesWithDictionary:(id)arg1 state:(id)arg2;
+ (void)readOle:(id)arg1 xlGraphicsInfo:(struct XlGraphicsInfo { int (**x1)(); int x2; short x3; bool x4; bool x5; bool x6; bool x7; struct ChVector<XlGraphicsInfo::XlObjData *> { struct XlObjData {} **x_8_1_1; struct XlObjData {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; bool x9; int x10; struct XlString {} *x11; int x12; int x13; int x14; bool x15; unsigned short x16; unsigned short x17; unsigned short x18; char *x19; unsigned int x20; unsigned int x21; bool x22; unsigned int x23; unsigned int x24; int x25; int x26; bool x27; struct XlString {} *x28; }*)arg2 state:(id)arg3;

@end
