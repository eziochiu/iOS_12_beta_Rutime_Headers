/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKInkThicknessButton : UIControl {
    UIImage * _assetImage;
    NSString * _inkIdentifier;
    UIImageView * _inkImageView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastRenderedBounds;
    double  _weight;
}

@property (nonatomic, retain) UIImage *assetImage;
@property (nonatomic, readonly) NSString *inkIdentifier;
@property (nonatomic, retain) UIImageView *inkImageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastRenderedBounds;
@property (nonatomic, readonly) double weight;

+ (id /* block */)_defaultVelocityForDistanceFunction;
+ (void)_getImageForStroke:(id)arg1 centeredInSize:(struct CGSize { double x1; double x2; })arg2 renderScale:(double)arg3 callback:(id /* block */)arg4;
+ (void)_getTemplateImageForInk:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 callback:(id /* block */)arg3;
+ (id)backgroundColorForIsSelected:(bool)arg1 highlighted:(bool)arg2;
+ (id)curvedPathForButtonImage;
+ (id)imageRendererQueue;
+ (id)imageTintColorForIsSelected:(bool)arg1 highlighted:(bool)arg2;
+ (double)inkWeightForThumbnailWithIdentifier:(id)arg1 weight:(double)arg2;
+ (id)linePathForButtonImage;
+ (double)renderScaleForTemplateInk:(id)arg1 path:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 insetX:(double)arg4 insetY:(double)arg5;

- (void).cxx_destruct;
- (void)_animateToHighlightedState:(bool)arg1;
- (void)_animateToSelectedState:(bool)arg1;
- (id)assetImage;
- (void)didTouchUpInside;
- (id)initWithInkIdentifier:(id)arg1 weight:(double)arg2;
- (id)inkForRenderingThumbnail;
- (id)inkIdentifier;
- (id)inkImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastRenderedBounds;
- (void)layoutSubviews;
- (void)setAssetImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setInkImageView:(id)arg1;
- (void)setLastRenderedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)weight;

@end
