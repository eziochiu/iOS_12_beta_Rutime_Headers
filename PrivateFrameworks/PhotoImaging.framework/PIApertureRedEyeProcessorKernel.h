/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIApertureRedEyeProcessorKernel : CIImageProcessorKernel

+ (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })ROIForCenterPoint:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2;
+ (void)convertFixed16:(const unsigned short*)arg1 toFloat:(float*)arg2 count:(unsigned long long)arg3;
+ (void)convertFloat:(const float*)arg1 toFixed16:(unsigned short*)arg2 count:(unsigned long long)arg3;
+ (int)formatForInputAtIndex:(int)arg1;
+ (int)outputFormat;
+ (bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
