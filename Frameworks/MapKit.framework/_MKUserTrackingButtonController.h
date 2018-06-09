/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKUserTrackingButtonController : NSObject <CAAnimationDelegate> {
    UIActivityIndicatorView * _activityIndicatorView;
    UIButton * _button;
    unsigned long long  _buttonBehavior;
    UIImageView * _imageView;
    long long  _state;
    <MKUserTrackingButtonTarget> * _target;
    <MKUserTrackingView> * _userTrackingView;
}

@property (nonatomic) unsigned long long buttonBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) <MKUserTrackingView> *userTrackingView;

- (void).cxx_destruct;
- (id)_activityIndicatorView;
- (void)_authorizationStatusChanged:(id)arg1;
- (id)_contentAnimation;
- (id)_expandAnimation;
- (void)_goToNextMode:(id)arg1;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (void)_reloadState;
- (bool)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2;
- (id)_shrinkAnimation;
- (void)_updateLoading;
- (void)_updateState;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (unsigned long long)buttonBehavior;
- (void)dealloc;
- (id)imageView;
- (id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4;
- (void)setButtonBehavior:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setUserTrackingView:(id)arg1;
- (long long)state;
- (id)userTrackingView;

@end
