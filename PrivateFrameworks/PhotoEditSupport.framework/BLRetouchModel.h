/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchModel : NSObject {
    BLRetouchLayerStack * _layerStack;
    NSLock * _lock;
    NSDictionary * _strokesDataDictionary;
}

- (void).cxx_destruct;
- (void)buildLayerStackWithMaskSourceImage:(id)arg1;
- (bool)hasLayerStack;
- (bool)hasRetouch;
- (id)imageForWorkingImage:(id)arg1 workingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withPadding:(double)arg4;
- (id)imageForWorkingImageBuffer:(id)arg1 workingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withPadding:(double)arg4;
- (id)initWithAdjustmentsDictionary:(id)arg1;
- (id)layerStack;
- (bool)needsPadding;
- (double)paddingForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayerStack:(id)arg1;

@end
