/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    REContent * _content;
    double  _contentBrightness;
    UIImage * _contentImage;
    double  _darkeningAmount;
    CLKDevice * _device;
    CALayer * _imageLayer;
    UIView * _overlayView;
    UIImage * _overrideContentImage;
    NSString * _representedElementIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowSize;
    UIImageView * _shadowView;
}

@property (nonatomic, readonly) REContent *content;
@property (nonatomic, readonly) UIImage *contentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *imageLayer;
@property (nonatomic, retain) UIImage *overrideContentImage;
@property (nonatomic, retain) NSString *representedElementIdentifier;
@property (readonly) Class superclass;

+ (void)clearLabel:(id)arg1;
+ (struct CGSize { double x1; double x2; })suggestedBodyImageSize;
+ (struct CGSize { double x1; double x2; })suggestedHeaderImageSize;

- (void).cxx_destruct;
- (void)_updateColorOverlay;
- (void)applyLayoutAttributes:(id)arg1;
- (void)configureWithContent:(id)arg1;
- (id)content;
- (id)contentImage;
- (id)device;
- (id)imageLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)overrideContentImage;
- (void)prepareForReuse;
- (id)representedElementIdentifier;
- (void)setContentBrightness:(double)arg1 animated:(bool)arg2;
- (void)setContentImage:(id)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setOverrideContentImage:(id)arg1;
- (void)setRepresentedElementIdentifier:(id)arg1;
- (id)transitionContext;

@end
