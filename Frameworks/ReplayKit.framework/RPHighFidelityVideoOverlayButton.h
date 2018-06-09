/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPHighFidelityVideoOverlayButton : UIView <RPVideoOverlayButton> {
    SEL  _action;
    _UIBackdropView * _backdropView;
    UIButton * _button;
    long long  _style;
    id  _target;
}

@property (nonatomic) SEL action;
@property (nonatomic) id target;

- (void).cxx_destruct;
- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonTapped:(id)arg1;
- (SEL)action;
- (id)initWithStyle:(long long)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;
- (id)target;

@end
