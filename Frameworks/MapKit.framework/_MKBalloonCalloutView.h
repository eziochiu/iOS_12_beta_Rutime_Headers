/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKBalloonCalloutView : MKCalloutView {
    UIImageView * _balloonBodyImageView;
    CALayer * _balloonInnerStrokeLayer;
    CAShapeLayer * _balloonShape;
    UIColor * _balloonTintColor;
    UIView * _containerView;
    UIView * _contentView;
    UIImageView * _contentViewMaskView;
    double  _croppedImageScale;
    UIImage * _image;
    UIImageView * _imageView;
    UIView * _innerBackgroundView;
    UIColor * _innerStrokeColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicSize;
    bool  _originatesAsSmallBalloon;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowSize;
    UIView * _shadowView;
    double  _smallBalloonScale;
    UIColor * _strokeColor;
    long long  _style;
    UIImageView * _tailView;
}

@property (nonatomic, copy) UIColor *balloonTintColor;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) UIColor *innerStrokeColor;
@property (nonatomic) bool originatesAsSmallBalloon;
@property (nonatomic) double smallBalloonScale;
@property (nonatomic, copy) UIColor *strokeColor;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centerFrame;
- (void)_commonInit;
- (id)_generateInnerStrokeImage;
- (void)_handleTapOnCallout:(id)arg1;
- (double)_innerDiameter;
- (void)_updateCroppedImage;
- (id)balloonTintColor;
- (bool)calloutContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contentView;
- (void)didMoveToWindow;
- (void)dismissAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)hideCalloutAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)image;
- (id)initWithAnnotationView:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)innerStrokeColor;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)originatesAsSmallBalloon;
- (void)setBalloonTintColor:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setInnerStrokeColor:(id)arg1;
- (void)setOriginatesAsSmallBalloon:(bool)arg1;
- (void)setSmallBalloonScale:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)showAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)showCalloutAnimated:(bool)arg1;
- (double)smallBalloonScale;
- (id)strokeColor;
- (long long)style;

@end
