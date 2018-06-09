/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRAWGamutMapping : CIFilter {
    CIImage * inputImage;
    NSDictionary * inputRAWDictionary;
}

- (id)outputImage;

@end
