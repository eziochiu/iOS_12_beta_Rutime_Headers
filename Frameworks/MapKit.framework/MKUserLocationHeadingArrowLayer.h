/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationHeadingArrowLayer : CAShapeLayer <MKUserLocationHeadingAnimatableIndicator, MKUserLocationHeadingIndicator> {
    double  _headingRadians;
    double  _maxUncertaintyAngleToShowArrow;
    MKUserLocationView * _userLocationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headingRadians;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MKUserLocationView *userLocationView;

- (void).cxx_destruct;
- (id)_animationToSetVisible:(bool)arg1;
- (double)_baseRadiusWhenVisible:(bool)arg1;
- (id)_bezierPathWithBaseRadius:(double)arg1 tipRadius:(double)arg2 baseHalfAngle:(double)arg3;
- (struct CGPath { }*)_pathWhenVisible:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_positionWhenVisible:(bool)arg1;
- (bool)_shouldBeVisibleForAccuracy:(double)arg1;
- (double)_tipRadiusWhenVisible:(bool)arg1;
- (void)animateToSetVisible:(bool)arg1 completion:(id /* block */)arg2;
- (double)headingRadians;
- (id)initWithUserLocationView:(id)arg1;
- (void)setHeadingRadians:(double)arg1;
- (void)updateHeading:(double)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateTintColor:(id)arg1;
- (id)userLocationView;

@end
