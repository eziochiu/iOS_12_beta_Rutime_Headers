/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradient : NSObject {
    double  drawingAngle;
    CUIPSDGradientEvaluator * evaluator;
    unsigned int  gradientStyle;
}

@property double drawingAngle;
@property (retain) CUIPSDGradientEvaluator *evaluator;
@property unsigned int gradientStyle;

+ (id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 isRadial:(bool)arg5;
+ (id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 style:(unsigned int)arg5;
+ (id)getMidpointLocationFromArray:(id)arg1 atIndex:(long long)arg2 withPolicy:(int)arg3;

- (void)dealloc;
- (double)drawingAngle;
- (id)evaluator;
- (unsigned int)gradientStyle;
- (id)initWithEvaluator:(id)arg1 drawingAngle:(double)arg2 gradientStyle:(unsigned int)arg3;
- (void)setDrawingAngle:(double)arg1;
- (void)setEvaluator:(id)arg1;
- (void)setGradientStyle:(unsigned int)arg1;

@end
