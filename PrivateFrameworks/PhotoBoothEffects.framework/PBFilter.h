/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBFilter : NSObject {
    CIFilter * _ciFilter;
    CIFilter * _wrapMirrorFilter;
}

+ (id)defaultValueForKey:(id)arg1;
+ (id)filterWithName:(id)arg1;
+ (bool)needsDisplayForKey:(id)arg1;

- (id)_presentationName;
- (bool)allowAbsoluteGestures;
- (void)applyParametersToCIFilter:(bool)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)ciFilter;
- (id)ciFilterName;
- (id)createOutputImage:(id)arg1 mirrored:(bool)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (void)dealloc;
- (id)description;
- (float)floatValueForKeyIfSupported:(id)arg1;
- (void)handleGestureAtLocations:(struct CGPoint { double x1; double x2; }*)arg1 count:(int)arg2 translation:(struct CGPoint { double x1; double x2; })arg3 viewSize:(struct CGSize { double x1; double x2; })arg4 stateBegan:(bool)arg5 mirror:(bool)arg6;
- (void)handlePanGesture:(struct CGPoint { double x1; double x2; })arg1 viewSize:(struct CGSize { double x1; double x2; })arg2 stateBegan:(bool)arg3 mirror:(bool)arg4;
- (void)handlePinchGesture:(float)arg1 stateBegan:(bool)arg2;
- (void)handleRotateGesture:(float)arg1 stateBegan:(bool)arg2 mirror:(bool)arg3;
- (void)handleTapGesture:(struct CGPoint { double x1; double x2; })arg1 viewSize:(struct CGSize { double x1; double x2; })arg2 mirror:(bool)arg3;
- (id)init;
- (id)inputKeys;
- (id)localizedName;
- (id)name;
- (bool)needsWrapMirror;
- (struct CGPoint { double x1; double x2; })pointValueForKeyIfSupported:(id)arg1;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize { double x1; double x2; })arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 mirrored:(bool)arg4;
- (void)resetInputImage;
- (void)setDefaults;
- (void)setFloatValue:(float)arg1 forKeyIfSupported:(id)arg2;
- (void)setPointValue:(struct CGPoint { double x1; double x2; })arg1 forKeyIfSupported:(id)arg2;

@end
