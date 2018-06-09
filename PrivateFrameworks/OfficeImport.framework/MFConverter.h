/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFConverter : NSObject

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInLogicalUnits:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInPoints:(id)arg1;
+ (void)fromBinary:(id)arg1 toXml:(id)arg2;
+ (bool)mapToPdf:(id)arg1;
+ (id)play:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (void)playInCurrentContext:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (id)playToBitmap:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (id)playToPDF:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 colorMap:(id)arg3 fillMap:(id)arg4;

@end
