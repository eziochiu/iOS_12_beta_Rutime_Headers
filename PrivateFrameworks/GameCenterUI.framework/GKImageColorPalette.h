/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKImageColorPalette : GKColorPalette {
    double  _borderPercentageForBorderDetection;
    unsigned int  _brightnessHistogram;
    unsigned int  _brightnessSpread;
    NSArray * _bubbleColors;
    unsigned int  _grayscaleSpread;
    unsigned int  _hueHistogram;
    unsigned int  _hueSpread;
    struct HSVColor { double x1; double x2; double x3; } * _imageHSVMap;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    unsigned int  _saturationHistogram;
    unsigned int  _saturationSpread;
}

@property (retain) NSArray *bubbleColors;

- (bool)analyzeImage:(struct CGImage { }*)arg1;
- (id)bubbleColors;
- (void)clearMainHistograms;
- (void)clearSaturationAndBrightnessHistograms;
- (void)dealloc;
- (void)findBrightColors;
- (void)generateHSVMapWithContext:(struct CGContext { }*)arg1;
- (id)initWithImage:(id)arg1;
- (void)iterateOverPixelsWithBlock:(id /* block */)arg1 forHue:(unsigned int)arg2;
- (void)printHistogram:(unsigned int*)arg1 ofSize:(unsigned int)arg2;
- (void)reset;
- (void)setBubbleColors:(id)arg1;
- (unsigned int)weightHistogram:(unsigned int*)arg1 size:(unsigned int)arg2 spread:(unsigned int)arg3;

@end
