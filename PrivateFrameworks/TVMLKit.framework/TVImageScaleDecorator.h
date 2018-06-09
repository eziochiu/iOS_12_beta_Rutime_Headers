/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVImageScaleDecorator : TVImageDecorator {
    UIColor * _bgColor;
    bool  _cornerContinuous;
    struct TVCornerRadii { 
        double topLeft; 
        double topRight; 
        double bottomLeft; 
        double bottomRight; 
    }  _cornerRadii;
    double  _focusedSizeIncrease;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    long long  _scaleMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaleToSize;
}

@property (nonatomic, copy) UIColor *bgColor;
@property (nonatomic) bool cornerContinuous;
@property (nonatomic) struct TVCornerRadii { double x1; double x2; double x3; double x4; } cornerRadii;
@property (nonatomic) bool cropToFit;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) long long scaleMode;
@property (nonatomic) struct CGSize { double x1; double x2; } scaleToSize;
@property (nonatomic) double upscaleAdjustment;

- (void).cxx_destruct;
- (void)_applyCornerMaskForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toContext:(struct CGContext { }*)arg2;
- (double)_focusedSizeIncreaseFactor;
- (id)_imageFixedForRotation:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_paddingAdjustedForUpscaling;
- (struct CGSize { double x1; double x2; })_scaleToSizeAdjustedForUpscaling;
- (id)bgColor;
- (bool)cornerContinuous;
- (struct TVCornerRadii { double x1; double x2; double x3; double x4; })cornerRadii;
- (bool)cropToFit;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize { double x1; double x2; })arg2 croppedToFit:(bool)arg3;
- (id)decoratorIdentifier;
- (struct CGSize { double x1; double x2; })expectedSize;
- (double)focusedSizeIncrease;
- (id)init;
- (id)initWithScaleToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithScaleToSize:(struct CGSize { double x1; double x2; })arg1 cropToFit:(bool)arg2;
- (id)initWithScaleToSize:(struct CGSize { double x1; double x2; })arg1 scaleMode:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)loaderCropToFit;
- (struct CGSize { double x1; double x2; })loaderScaleToSize;
- (bool)needsAlphaForImage:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (long long)scaleMode;
- (struct CGSize { double x1; double x2; })scaleToSize;
- (void)setBgColor:(id)arg1;
- (void)setCornerContinuous:(bool)arg1;
- (void)setCornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setCropToFit:(bool)arg1;
- (void)setFocusedSizeIncrease:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setScaleToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUpscaleAdjustment:(double)arg1;
- (double)upscaleAdjustment;

@end
