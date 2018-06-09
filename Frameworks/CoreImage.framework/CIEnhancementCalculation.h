/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEnhancementCalculation : NSObject {
    CIEnhancementHistogram * borderHist;
    double  curvePercent;
    double  exposureValue;
    double  exposureValueAtZeroShadow;
    bool  faceInputSet;
    CIEnhancementHistogram * lumHist;
    double  maxShadow;
    double  minShadow;
    struct { 
        double i; 
        double q; 
    }  originalFaceColor;
    double  percentFaceChange;
    CIEnhancementHistogram * rgbSumHist;
    CIEnhancementHistogram * satHist;
}

@property (readonly) CIEnhancementHistogram *borderHist;
@property (readonly) CIEnhancementHistogram *lumHist;
@property (readonly) struct { double x1; double x2; } originalFaceColor;
@property (readonly) CIEnhancementHistogram *rgbSumHist;
@property (readonly) CIEnhancementHistogram *satHist;

+ (double)bestWarmthForI:(double)arg1 q:(double)arg2 percentChange:(double*)arg3;

- (id)borderHist;
- (unsigned long long)curveCount;
- (struct CGPoint { double x1; double x2; })curvePointAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)downSampleHistogram:(id)arg1 to:(unsigned int)arg2 storeIn:(double*)arg3;
- (id)faceBalanceStrength;
- (id)faceBalanceWarmth;
- (id)init;
- (id)lumHist;
- (struct { double x1; double x2; })originalFaceColor;
- (void)printAnalysis;
- (void)printHistogram:(id)arg1 downsampledTo:(unsigned int)arg2;
- (void)printHistogramsDownsampledTo:(unsigned int)arg1;
- (int)putShadowsAnalysisInto:(double*)arg1;
- (id)rawShadow;
- (id)rgbSumHist;
- (id)satHist;
- (void)setBorderHistogram:(id)arg1;
- (void)setCurvePercent:(double)arg1;
- (void)setExposureValue:(double)arg1;
- (void)setFaceColorFromChromaI:(double)arg1 andChromaQ:(double)arg2;
- (void)setLuminanceHistogram:(id)arg1;
- (void)setRGBSumHistogram:(id)arg1;
- (void)setSaturationHistogram:(id)arg1;
- (void)setShadowsMin:(double)arg1 max:(double)arg2 zeroExposure:(double)arg3;
- (void)setupFaceColor:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;
- (id)shadow;
- (id)vibrance;

@end
