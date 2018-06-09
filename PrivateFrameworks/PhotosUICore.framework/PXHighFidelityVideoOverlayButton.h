/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXHighFidelityVideoOverlayButton : UIView <PXVideoOverlayButton> {
    bool  __didConfigureForPause;
    SEL  _action;
    _UIBackdropView * _backdropView;
    UIButton * _button;
    UIImageView * _overlayPlayBackground;
    bool  _showAsPause;
    long long  _style;
    id  _target;
}

@property (setter=_setDidConfigureForPause:, nonatomic) bool _didConfigureForPause;
@property (nonatomic) bool showAsPause;

- (void).cxx_destruct;
- (bool)_didConfigureForPause;
- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonTapped:(id)arg1;
- (void)_setDidConfigureForPause:(bool)arg1;
- (id)initWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(bool)arg2;
- (void)layoutSubviews;
- (void)setShowAsPause:(bool)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (bool)showAsPause;
- (long long)style;

@end
