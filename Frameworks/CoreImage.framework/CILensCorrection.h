/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILensCorrection : CIFilter {
    CIImage * inputImage;
    NSData * inputLookUpTable;
    CIVector * inputOpticalCenter;
}

- (struct CGPoint { double x1; double x2; })ReferenceensDistortionPointForPoint:(struct CGPoint { double x1; double x2; })arg1 lookupTable:(id)arg2 distortionOpticalCenter:(struct CGPoint { double x1; double x2; })arg3 imageSize:(struct CGSize { double x1; double x2; })arg4;
- (id)outputImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOf:(int)arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 userInfo:(id)arg3;

@end
