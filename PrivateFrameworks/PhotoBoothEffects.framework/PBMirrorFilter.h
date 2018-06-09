/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBMirrorFilter : PBFilter {
    bool  firstTime;
    float  inputOrientation;
    struct CGPoint { 
        double x; 
        double y; 
    }  inputPoint;
    float  lastInputAngle;
    float  lastInputX;
    float  lastInputY;
}

@property float inputOrientation;
@property struct CGPoint { double x1; double x2; } inputPoint;

- (void)applyParametersToCIFilter:(bool)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)ciFilterName;
- (float)inputOrientation;
- (struct CGPoint { double x1; double x2; })inputPoint;
- (bool)needsWrapMirror;
- (void)setDefaults;
- (void)setInputOrientation:(float)arg1;
- (void)setInputPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
