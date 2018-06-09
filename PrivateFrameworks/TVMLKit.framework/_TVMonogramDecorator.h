/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMonogramDecorator : TVImageScaleDecorator {
    UIColor * _borderColor;
    double  _borderWidth;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;

- (void).cxx_destruct;
- (id)borderColor;
- (double)borderWidth;
- (id)decoratorIdentifier;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)needsAlphaForImage:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;

@end
