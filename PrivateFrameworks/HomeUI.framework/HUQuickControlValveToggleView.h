/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlValveToggleView : UIView <HUQuickControlInteractiveView> {
    HUCircleView * _circleView;
    HUIconView * _iconView;
    <HUQuickControlViewInteractionDelegate> * _interactionDelegate;
    bool  _open;
    HUQuickControlViewProfile * _profile;
    bool  _userInteractionActive;
    id  _value;
}

@property (nonatomic, readonly) UIColor *backgroundOffColor;
@property (nonatomic, readonly) UIColor *backgroundOnColor;
@property (nonatomic, retain) HUCircleView *circleView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUIconView *iconView;
@property (nonatomic) <HUQuickControlViewInteractionDelegate> *interactionDelegate;
@property (nonatomic) bool open;
@property (nonatomic, copy) HUQuickControlViewProfile *profile;
@property (nonatomic, retain) id secondaryValue;
@property (readonly) Class superclass;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) id value;

+ (id)intrinsicSizeDescriptor;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_setupIconView;
- (void)_updateAppearance;
- (void)_updateIconDescriptor;
- (id)backgroundOffColor;
- (id)backgroundOnColor;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)circleView;
- (id)iconView;
- (id)initWithProfile:(id)arg1;
- (id)interactionDelegate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isUserInteractionActive;
- (bool)open;
- (id)profile;
- (void)setCircleView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setOpen:(bool)arg1;
- (void)setProfile:(id)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)updateConstraints;
- (id)value;

@end
