/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface GUBilateralConvolution : CIFilter {
    NSNumber * _inputEdgeDetail;
    CIImage * _inputImage;
    NSArray * _inputPoints;
    NSNumber * _inputVersion;
    NSArray * _inputWeights;
}

@property (retain) NSNumber *inputEdgeDetail;
@property (retain) CIImage *inputImage;
@property (retain) NSArray *inputPoints;
@property (retain) NSNumber *inputVersion;
@property (retain) NSArray *inputWeights;

+ (id)LabToRGBKernel;
+ (id)RGBToLabKernel;
+ (id)RGBToLabKernels;
+ (id)bilateralAdd1Kernel;
+ (id)bilateralAdd2Kernel;
+ (id)bilateralAdd3Kernel;
+ (id)bilateralAdd4Kernel;
+ (id)bilateralAdd5Kernel;
+ (id)bilateralAdd6Kernel;
+ (id)bilateralAdd7Kernel;
+ (id)bilateralAdd8Kernel;
+ (id)bilateralAdd9Kernel;
+ (id)bilateralFinalizeKernel;
+ (id)bilateralKernels;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bilateralAddROI:(long long)arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 userInfo:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForPointArray:(id)arg1;
- (id)doBilateralPass:(id)arg1 points:(id)arg2 weights:(id)arg3 sums:(id)arg4 slope:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })enlargedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withPoints:(id)arg2;
- (id)inputEdgeDetail;
- (id)inputImage;
- (id)inputPoints;
- (id)inputVersion;
- (id)inputWeights;
- (id)outputImage;
- (unsigned long long)samplesPerPass;
- (void)setInputEdgeDetail:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputPoints:(id)arg1;
- (void)setInputVersion:(id)arg1;
- (void)setInputWeights:(id)arg1;

@end
