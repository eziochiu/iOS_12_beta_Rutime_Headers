/* made by EzioChiu.
 */

@protocol CVAVideoPipelineProperties <NSObject, NSCopying>

@required

- (unsigned long long)alphaMattePixelBufferHeight;
- (unsigned int)alphaMattePixelBufferPixelFormat;
- (unsigned long long)alphaMattePixelBufferWidth;
- (float)colorPixelBufferFocalLength_mm;
- (float)colorPixelBufferFocalRatio;
- (unsigned long long)colorPixelBufferHeight;
- (unsigned int)colorPixelBufferPixelFormat;
- (float)colorPixelBufferPixelSize_um;
- (unsigned long long)colorPixelBufferWidth;
- (unsigned long long)inputDisparityPixelBufferHeight;
- (unsigned int)inputDisparityPixelBufferPixelFormat;
- (unsigned long long)inputDisparityPixelBufferWidth;
- (unsigned int)inputSegmentationPixelBufferPixelFormat;
- (unsigned long long)inputToOutputDisparityPixelBufferRotation;
- (unsigned long long)outputDisparityPixelBufferHeight;
- (unsigned int)outputDisparityPixelBufferPixelFormat;
- (unsigned long long)outputDisparityPixelBufferWidth;
- (void)setAlphaMattePixelBufferHeight:(unsigned long long)arg1;
- (void)setAlphaMattePixelBufferWidth:(unsigned long long)arg1;
- (void)setColorPixelBufferFocalLength_mm:(float)arg1;
- (void)setColorPixelBufferFocalRatio:(float)arg1;
- (void)setColorPixelBufferHeight:(unsigned long long)arg1;
- (void)setColorPixelBufferPixelSize_um:(float)arg1;
- (void)setColorPixelBufferWidth:(unsigned long long)arg1;
- (void)setInputDisparityPixelBufferHeight:(unsigned long long)arg1;
- (void)setInputDisparityPixelBufferWidth:(unsigned long long)arg1;
- (void)setInputToOutputDisparityPixelBufferRotation:(unsigned long long)arg1;
- (void)setOutputDisparityPixelBufferHeight:(unsigned long long)arg1;
- (void)setOutputDisparityPixelBufferWidth:(unsigned long long)arg1;

@end
