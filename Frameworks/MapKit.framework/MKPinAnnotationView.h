/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPinAnnotationView : MKAnnotationView {
    bool  _animatesDrop;
    <_MKPinAnnotationViewDelegate> * _delegate;
    UIColor * _pinTintColor;
    UIImageView * _shadowView;
    int  _state;
}

@property (setter=_setDelegate:, nonatomic) <_MKPinAnnotationViewDelegate> *_delegate;
@property (nonatomic) bool animatesDrop;
@property (nonatomic) unsigned long long pinColor;
@property (nonatomic, retain) UIColor *pinTintColor;

+ (id)_bounceAnimation;
+ (struct CGPoint { double x1; double x2; })_calloutOffset;
+ (id)_dropBounceAnimation;
+ (id)_imageForLayer:(long long)arg1 state:(long long)arg2 mapType:(unsigned long long)arg3 traits:(id)arg4;
+ (id)_imageForState:(long long)arg1 mapType:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3 pinColor:(id)arg4 traits:(id)arg5;
+ (struct CGPoint { double x1; double x2; })_leftCalloutOffset;
+ (struct CGPoint { double x1; double x2; })_perceivedAnchorPoint;
+ (struct CGSize { double x1; double x2; })_perceivedSize;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pinFrameForPosition:(struct CGPoint { double x1; double x2; })arg1;
+ (id)_pinsWithMapType:(unsigned long long)arg1 mapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg2 pinColor:(id)arg3 traits:(id)arg4;
+ (id)_reuseIdentifier;
+ (struct CGPoint { double x1; double x2; })_rightCalloutOffset;
+ (struct CGPoint { double x1; double x2; })_shadowAnchorPoint;
+ (id)_shadowImage;
+ (id)greenPinColor;
+ (Class)layerClass;
+ (id)purplePinColor;
+ (id)redPinColor;

- (void).cxx_destruct;
- (id)_bounceAnimation:(bool)arg1 withDelay:(double)arg2 addToLayer:(bool)arg3;
- (void)_cleanupAfterPinDropAnimation;
- (id)_delegate;
- (void)_didUpdatePosition;
- (struct CGPoint { double x1; double x2; })_draggingDropOffset;
- (void)_dropAfterDraggingAndRevertPosition:(bool)arg1 animated:(bool)arg2;
- (void)_dropAfterDraggingDidEnd:(id)arg1;
- (void)_dropFromDistance:(double)arg1 maxDistance:(double)arg2 withDelay:(double)arg3;
- (id)_floatingImage;
- (id)_highlightedImage;
- (id)_image;
- (void)_invalidateImage;
- (void)_liftBeforeDropDidEnd:(id)arg1;
- (void)_liftDidEnd:(id)arg1;
- (void)_liftForDraggingAfterBounceAnimated:(bool)arg1;
- (void)_liftForDraggingAnimated:(bool)arg1;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (id)_pins;
- (void)_removeAllAnimations;
- (void)_setDelegate:(id)arg1;
- (void)_setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_significantBounds;
- (int)_state;
- (void)_stopDrop;
- (void)_stopDropAnimationAndDropToPosition;
- (void)_updateShadowLayer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)animatesDrop;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)description;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (bool)isHighlighted;
- (unsigned long long)pinColor;
- (id)pinTintColor;
- (void)setAnimatesDrop:(bool)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setPinColor:(unsigned long long)arg1;
- (void)setPinTintColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
