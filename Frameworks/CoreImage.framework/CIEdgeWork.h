/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEdgeWork : CIFilter {
    CIImage * inputImage;
    NSNumber * inputRadius;
}

+ (id)customAttributes;

- (id)_CIEdgeWork;
- (id)_CIEdgeWorkContrast;
- (id)outputImage;

@end
