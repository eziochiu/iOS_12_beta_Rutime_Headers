/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBLinkTable : NSObject

+ (struct XlLinkTable { int (**x1)(); struct XlLinkLookupTable { int (**x_2_1_1)(); bool x_2_1_2; struct ChVector<XlXti *> { struct XlXti {} **x_3_2_1; struct XlXti {} **x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_2_1_3; } x2; struct ChVector<XlLink *> { struct XlLink {} **x_3_1_1; struct XlLink {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)createXlLinkTableFromLinksCollection:(id)arg1 workbook:(id)arg2 state:(id)arg3;
+ (int)mapEDLinkTypeToXl:(int)arg1;
+ (int)mapXlLinkTypeToED:(int)arg1;
+ (void)readFromState:(id)arg1;

@end
