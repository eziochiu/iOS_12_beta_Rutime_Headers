/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationHeadingConeLayer : CALayer <MKUserLocationHeadingIndicator> {
    CALayer * _maskLayer;
    MKUserLocationView * _userLocationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_headingImage:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)_updateHeadingImage;
- (id)initWithUserLocationView:(id)arg1;
- (void)updateHeading:(double)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateTintColor:(id)arg1;

@end
