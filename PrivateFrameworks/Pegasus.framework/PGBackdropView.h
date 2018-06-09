/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGBackdropView : __PGView

@property (nonatomic) double gaussianBlurRadius;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic) double saturationAmount;
@property (nonatomic) double scale;

+ (Class)layerClass;

- (void)dealloc;
- (double)gaussianBlurRadius;
- (id)groupName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)saturationAmount;
- (double)scale;
- (void)setGaussianBlurRadius:(double)arg1;
- (void)setGroupName:(id)arg1;
- (void)setSaturationAmount:(double)arg1;
- (void)setScale:(double)arg1;

@end
