/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying> {
    int  blendMode;
    NSArray * colorMidpointLocations;
    NSArray * colorStops;
    struct _psdGradientColor { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    }  fillColor;
    NSArray * opacityMidpointLocations;
    NSArray * opacityStops;
    struct { 
        unsigned int colorEdgePixel : 2; 
        unsigned int opacityEdgePixel : 2; 
        unsigned int isDithered : 1; 
        unsigned int reserved : 3; 
    }  pgeFlags;
    double  smoothingCoefficient;
}

@property (nonatomic) int blendMode;

+ (void)initialize;

- (id)_cleanedUpMidpointLocationsFromLocations:(id)arg1;
- (void)_createOrderedStops:(id*)arg1 midpoints:(id*)arg2 fromStops:(id)arg3 midpoints:(id)arg4 edgePixel:(long long*)arg5;
- (struct _psdGradientColor { double x1; double x2; double x3; double x4; })_smoothedGradientColorAtLocation:(double)arg1;
- (double)_smoothedInterpolationOfLocation:(double)arg1 betweenLower:(double)arg2 upper:(double)arg3 scaledMidpoint:(double)arg4;
- (int)blendMode;
- (id)colorMidpointLocations;
- (id)colorStops;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)customizeForDistance:(double)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fillCoefficient;
- (struct _psdGradientColor { double x1; double x2; double x3; double x4; })fillColor;
- (bool)hasEdgePixel;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillCoefficient:(double)arg6;
- (id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg6 dither:(bool)arg7;
- (bool)isDithered;
- (id)opacityMidpointLocations;
- (id)opacityStops;
- (void)setBlendMode:(int)arg1;
- (void)setColorStops:(id)arg1 midpoints:(id)arg2;
- (void)setFillCoefficient:(double)arg1;
- (void)setOpacityStops:(id)arg1 midpoints:(id)arg2;
- (void)setSmoothingCoefficient:(double)arg1;
- (double)smoothingCoefficient;

@end
