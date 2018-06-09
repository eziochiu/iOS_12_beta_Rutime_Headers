/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBString : NSObject

+ (id)edStringFromXlString:(const struct XlString { int (**x1)(); struct OcText { int (**x_2_1_1)(); int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; char *x_2_1_6; char *x_2_1_7; bool x_2_1_8; } x2; struct ChVector<short *> { short **x_3_1_1; short **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; struct XlPhoneticInfo {} *x4; int x5; short *x6; }*)arg1 edResources:(id)arg2;
+ (struct XlString { int (**x1)(); struct OcText { int (**x_2_1_1)(); int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; char *x_2_1_6; char *x_2_1_7; bool x_2_1_8; } x2; struct ChVector<short *> { short **x_3_1_1; short **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; struct XlPhoneticInfo {} *x4; int x5; short *x6; }*)xlStringFromEDString:(id)arg1 state:(id)arg2;
+ (struct XlString { int (**x1)(); struct OcText { int (**x_2_1_1)(); int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; char *x_2_1_6; char *x_2_1_7; bool x_2_1_8; } x2; struct ChVector<short *> { short **x_3_1_1; short **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; struct XlPhoneticInfo {} *x4; int x5; short *x6; }*)xlStringWithIndex:(unsigned int)arg1;

@end
