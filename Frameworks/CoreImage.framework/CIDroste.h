/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDroste : CIFilter {
    CIImage * inputImage;
    CIVector * inputInsetPoint0;
    CIVector * inputInsetPoint1;
    NSNumber * inputPeriodicity;
    NSNumber * inputRotation;
    NSNumber * inputStrands;
    NSNumber * inputZoom;
}

+ (id)customAttributes;

- (id)_CIDroste;
- (id)outputImage;

@end
