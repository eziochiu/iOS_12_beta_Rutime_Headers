/* made by EzioChiu.
 */

@protocol CVAMattingResult <NSObject>

@required

- (struct __CVBuffer { }*)alphaMattePixelBuffer;
- (<CVADisparityPostprocessingResult> *)disparityPostprocessingResult;

@end
