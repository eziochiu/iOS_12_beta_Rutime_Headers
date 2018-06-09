/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface FBSProcessor : CIImageProcessorKernel

+ (bool)allowPartialOutputRegion;
+ (int)formatForInputAtIndex:(int)arg1;
+ (int)outputFormat;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (bool)skipFormatChecks;
+ (bool)synchronizeInputs;

@end
