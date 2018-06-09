/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlMediaView : UIView <HUQuickControlInteractiveView> {
    UIView * _backgroundView;
    UILabel * _engineeringUILabel;
    <HUQuickControlViewInteractionDelegate> * _interactionDelegate;
    UIButton * _playPauseButton;
    HUQuickControlSimpleViewProfile * _profile;
    bool  _userInteractionActive;
    id  _value;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *engineeringUILabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUQuickControlViewInteractionDelegate> *interactionDelegate;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, retain) UIButton *playPauseButton;
@property (nonatomic, copy) HUQuickControlSimpleViewProfile *profile;
@property (nonatomic, retain) id secondaryValue;
@property (readonly) Class superclass;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)_buttonInteractionBegan:(id)arg1;
- (void)_configureConstraints;
- (void)_playPausePressed:(id)arg1;
- (void)_relabelButton;
- (id)backgroundView;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)engineeringUILabel;
- (id)initWithProfile:(id)arg1;
- (id)interactionDelegate;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isPlaying;
- (bool)isUserInteractionActive;
- (id)playPauseButton;
- (id)profile;
- (void)setBackgroundView:(id)arg1;
- (void)setEngineeringUILabel:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
