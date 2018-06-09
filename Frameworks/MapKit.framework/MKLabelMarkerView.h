/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLabelMarkerView : MKAnnotationView <_MKBalloonCalloutViewConfiguring> {
    UIView * _anchorDotView;
    bool  _balloonCalloutShouldOriginateFromSmallSize;
    long long  _balloonCalloutStyle;
    UIView * _balloonContentView;
    UIColor * _balloonFillColor;
    UIImage * _balloonImage;
    UIColor * _balloonStrokeColor;
    MKMapView * _mapView;
    bool  _needsToResolveBalloonAttributes;
    double  _smallBalloonScaleFactor;
}

@property (getter=_balloonCalloutStyle, nonatomic, readonly) long long balloonCalloutStyle;
@property (getter=_balloonContentView, nonatomic, readonly) UIView *balloonContentView;
@property (getter=_balloonImage, nonatomic, readonly) UIImage *balloonImage;
@property (getter=_balloonInnerStrokeColor, nonatomic, readonly) UIColor *balloonInnerStrokeColor;
@property (getter=_balloonStrokeColor, nonatomic, readonly) UIColor *balloonStrokeColor;
@property (getter=_balloonTintColor, nonatomic, readonly) UIColor *balloonTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MKMapView *mapView;
@property (readonly) Class superclass;

+ (bool)_followsTerrain;
+ (Class)calloutViewClass;

- (void).cxx_destruct;
- (void)_addAnchorDotViewIfNeeded;
- (bool)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1;
- (long long)_balloonCalloutStyle;
- (id)_balloonContentView;
- (id)_balloonImage;
- (id)_balloonInnerStrokeColor;
- (id)_balloonStrokeColor;
- (id)_balloonTintColor;
- (void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2;
- (void)_deregisterObserver;
- (void)_registerObserver;
- (void)_resolveBalloonAttributesIfNecessary;
- (void)_updateAnchorOffset;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)mapView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareForReuse;
- (void)setAnnotation:(id)arg1;
- (void)setMapView:(id)arg1;
- (bool)shouldShowCallout;
- (bool)updateCalloutViewIfNeededAnimated:(bool)arg1;

@end
