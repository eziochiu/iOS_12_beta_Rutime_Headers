/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget> {
    bool  _applyDefaultImageIfNeeded;
    _MKUserTrackingButtonController * _controller;
    NSMutableDictionary * _customImageEdgeInsets;
    NSMutableDictionary * _customImages;
    NSMutableDictionary * _customLandscapeImagePhones;
    bool  _explicitlyEnabled;
    bool  _inMiniBar;
    bool  _internallyEnabled;
    bool  _selectsWhenTracking;
}

@property (nonatomic, readonly) unsigned long long behavior;
@property (nonatomic, readonly) _MKUserTrackingButtonController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inMiniBar;
@property (nonatomic) MKMapView *mapView;
@property (getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:, nonatomic) bool selectsWhenTracking;
@property (readonly) Class superclass;
@property (nonatomic) <MKUserTrackingView> *userTrackingView;

+ (Class)_activityIndicatorClass;
+ (id)buttonWithMapView:(id)arg1;
+ (id)buttonWithMapView:(id)arg1 applyDefaultImageIfNeeded:(bool)arg2;
+ (id)buttonWithUserTrackingView:(id)arg1;
+ (id)buttonWithUserTrackingView:(id)arg1 withType:(long long)arg2;
+ (id)buttonWithUserTrackingView:(id)arg1 withType:(long long)arg2 applyDefaultImageIfNeeded:(bool)arg3;

- (void).cxx_destruct;
- (long long)_activityIndicatorStyle;
- (id)_defaultImageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageEdgeInsetsForUserTrackingMode:(long long)arg1;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_imageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (bool)_isHighlightedForState:(long long)arg1;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (void)_repositionViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (bool)_selectsWhenTracking;
- (void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3;
- (void)_setImageEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forUserTrackingMode:(long long)arg2;
- (void)_setInternallyEnabled:(bool)arg1;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3;
- (void)_setSelectsWhenTracking:(bool)arg1;
- (void)_setState:(long long)arg1;
- (long long)_state;
- (void)_updateForState:(long long)arg1;
- (unsigned long long)behavior;
- (id)controller;
- (bool)inMiniBar;
- (id)mapView;
- (void)setEnabled:(bool)arg1;
- (void)setMapView:(id)arg1;
- (void)setUserTrackingView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateForMiniBarState:(bool)arg1;
- (id)userTrackingView;

@end
