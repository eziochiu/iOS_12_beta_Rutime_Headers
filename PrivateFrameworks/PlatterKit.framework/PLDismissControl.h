/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLDismissControl : UIControl {
    NSString * _backgroundGroupName;
    unsigned long long  _backgroundMaterialOptions;
    MTMaterialView * _circleBackgroundMaterialView;
    MTMaterialView * _circleOverlayMaterialView;
    double  _effectiveRadius;
    long long  _materialRecipe;
    unsigned long long  _overlayMaterialOptions;
    double  _radius;
    double  _xCrossLength;
    UIImageView * _xImageView;
    int  _xLineCap;
    double  _xLineWidth;
}

@property (nonatomic, copy) NSString *backgroundGroupName;
@property (nonatomic, readonly) unsigned long long backgroundMaterialOptions;
@property (getter=_circleBackgroundMaterialView, nonatomic, retain) MTMaterialView *circleBackgroundMaterialView;
@property (getter=_circleBackgroundMaterialView, nonatomic, readonly) MTMaterialView *circleBackgroundMaterialView;
@property (getter=_circleOverlayMaterialView, nonatomic, retain) MTMaterialView *circleOverlayMaterialView;
@property (getter=_circleOverlayMaterialView, nonatomic, readonly) MTMaterialView *circleOverlayMaterialView;
@property (getter=_effectiveRadius, nonatomic, readonly) double effectiveRadius;
@property (nonatomic, readonly) long long materialRecipe;
@property (nonatomic, readonly) unsigned long long overlayMaterialOptions;
@property (nonatomic) double radius;
@property (nonatomic) double xCrossLength;
@property (getter=_xImageView, nonatomic, readonly) UIImageView *xImageView;
@property (getter=_xImageView, nonatomic, retain) UIImageView *xImageView;
@property (nonatomic) int xLineCap;
@property (nonatomic) double xLineWidth;

+ (struct CGSize { double x1; double x2; })_circleBoundingSizeWithRadius:(double)arg1;
+ (void)_contentSizeCategoryDidChange:(id)arg1;
+ (id)_xImageWithCrossLength:(double)arg1 lineWidth:(double)arg2 lineCap:(int)arg3 inCircleWithRadius:(double)arg4 andRecipe:(long long)arg5;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_circleBackgroundMaterialView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_circleFrameWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_circleOverlayMaterialView;
- (void)_configureCircleBackgroundMaterialViewIfNecessaryWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)_configureCircleOverlayMaterialViewIfNecessaryWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)_configureXImageViewIfNecessaryWithRecipe:(long long)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (double)_effectXLineWidth;
- (double)_effectiveRadius;
- (double)_effectiveXCrossLength;
- (id)_newCircleMaterialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)_updateStylingForXImageViewWithRecipe:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_xFrameWithCircleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_xImageView;
- (void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (id)backgroundGroupName;
- (unsigned long long)backgroundMaterialOptions;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (void)layoutSubviews;
- (long long)materialRecipe;
- (unsigned long long)overlayMaterialOptions;
- (double)radius;
- (void)setBackgroundGroupName:(id)arg1;
- (void)setCircleBackgroundMaterialView:(id)arg1;
- (void)setCircleOverlayMaterialView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRadius:(double)arg1;
- (void)setXCrossLength:(double)arg1;
- (void)setXImageView:(id)arg1;
- (void)setXLineCap:(int)arg1;
- (void)setXLineWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)willMoveToSuperview:(id)arg1;
- (double)xCrossLength;
- (int)xLineCap;
- (double)xLineWidth;

@end
