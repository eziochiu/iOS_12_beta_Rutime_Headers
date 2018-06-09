/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKModernUserLocationView : MKUserLocationView {
    CALayer * _baseDimmingLayer;
    CALayer * _baseLayer;
    CALayer * _innerCircleLayer;
    UIImage * _innerImageMask;
    bool  _isShowingStaleColor;
    bool  _rotateInnerImageToMatchCourse;
    bool  _shouldInnerPulse;
    bool  _shouldShowOuterRing;
}

@property (nonatomic, retain) UIImage *innerImageMask;
@property (nonatomic) bool rotateInnerImageToMatchCourse;
@property (nonatomic) bool shouldInnerPulse;
@property (nonatomic) bool shouldShowOuterRing;

+ (double)baseDiameter;
+ (double)innerDiameter;
+ (double)outerRingWidth;

- (void).cxx_destruct;
- (struct CGColor { }*)_accuracyFillColor;
- (id)_animationToSynchronizePulse:(id*)arg1;
- (id)_baseDimmingLayer;
- (id)_baseLayer;
- (void)_dealloc;
- (id)_innerPulseAnimation;
- (id)_layerToMatchAccuracyRing;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_resetLayerToMatchAccuracyRing;
- (void)_setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)_setMapRotationRadians:(double)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setupLayers;
- (void)_updateAccuracyColors;
- (void)_updateBaseImage;
- (void)_updateInnerCourseRotation;
- (void)_updateInnerImage;
- (void)_updateInnerMaskLayer;
- (void)_updateLayers;
- (void)_updatePulseAnimation;
- (void)_updatePulseColor;
- (void)didMoveToWindow;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)innerImageMask;
- (bool)rotateInnerImageToMatchCourse;
- (void)setEffectsEnabled:(bool)arg1;
- (void)setInnerImageMask:(id)arg1;
- (void)setRotateInnerImageToMatchCourse:(bool)arg1;
- (void)setShouldInnerPulse:(bool)arg1;
- (void)setShouldShowOuterRing:(bool)arg1;
- (bool)shouldInnerPulse;
- (bool)shouldShowOuterRing;
- (void)tintColorDidChange;

@end
