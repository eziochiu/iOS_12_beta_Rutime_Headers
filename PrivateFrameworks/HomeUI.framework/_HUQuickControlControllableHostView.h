/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface _HUQuickControlControllableHostView : UIView <HUQuickControlInteractiveView> {
    MTMaterialView * _backgroundView;
    <HUQuickControlViewInteractionDelegate> * _interactionDelegate;
    HUQuickControlViewProfile * _profile;
    bool  _userInteractionActive;
    id  _value;
}

@property (nonatomic, retain) MTMaterialView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUQuickControlViewInteractionDelegate> *interactionDelegate;
@property (nonatomic, copy) HUQuickControlViewProfile *profile;
@property (nonatomic, retain) id secondaryValue;
@property (readonly) Class superclass;
@property (getter=isUserInteractionActive, nonatomic, readonly) bool userInteractionActive;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)backgroundView;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)interactionDelegate;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isUserInteractionActive;
- (id)profile;
- (void)setBackgroundView:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
