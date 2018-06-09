/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSupportedImageSize : NSObject {
    unsigned long long  _aspectRatioHandling;
    unsigned int  _idealImageFormat;
    unsigned int  _idealOrientation;
    bool  _orientationAgnostic;
    VNSizeRange * _pixelsHighRange;
    VNSizeRange * _pixelsWideRange;
}

@property (nonatomic, readonly) unsigned long long aspectRatioHandling;
@property (nonatomic, readonly) unsigned int idealImageFormat;
@property (nonatomic, readonly) unsigned int idealOrientation;
@property (getter=isOrientationAgnostic, nonatomic, readonly) bool orientationAgnostic;
@property (nonatomic, readonly) VNSizeRange *pixelsHighRange;
@property (nonatomic, readonly) VNSizeRange *pixelsWideRange;

- (void).cxx_destruct;
- (unsigned long long)aspectRatioHandling;
- (unsigned int)idealImageFormat;
- (unsigned int)idealOrientation;
- (id)initWithIdealFormat:(unsigned int)arg1 pixelsWideRange:(id)arg2 pixelsHighRange:(id)arg3 aspectRatioHandling:(unsigned long long)arg4 idealOrientation:(unsigned int)arg5 orientationAgnostic:(bool)arg6;
- (bool)isAllowedPixelsWide:(unsigned long long)arg1 pixelsHigh:(unsigned long long)arg2;
- (bool)isOrientationAgnostic;
- (id)pixelsHighRange;
- (id)pixelsWideRange;

@end
