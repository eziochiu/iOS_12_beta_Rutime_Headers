/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputViewPlacementTransition : NSObject {
    <NSObject> * animationContext;
    <UIInputViewAnimationController> * animationController;
    int  animationState;
    UIInputViewAnimationStyle * animationStyle;
    bool  cancelled;
    UIInputViewSetPlacement * fromPlacement;
    UIInputViewSetNotificationInfo * notificationInfo;
    unsigned long long  notifications;
    UIInputViewSetPlacement * toPlacement;
}

@property (nonatomic, retain) <NSObject> *animationContext;
@property (nonatomic, retain) <UIInputViewAnimationController> *animationController;
@property (nonatomic) int animationState;
@property (nonatomic, retain) UIInputViewAnimationStyle *animationStyle;
@property (nonatomic) bool cancelled;
@property (nonatomic, retain) UIInputViewSetPlacement *fromPlacement;
@property (nonatomic, retain) UIInputViewSetNotificationInfo *notificationInfo;
@property (nonatomic) unsigned long long notifications;
@property (nonatomic, retain) UIInputViewSetPlacement *toPlacement;

+ (id)transitionFromPlacement:(id)arg1 toPlacement:(id)arg2 withAnimationStyle:(id)arg3;

- (id)animationContext;
- (id)animationController;
- (int)animationState;
- (id)animationStyle;
- (bool)cancelled;
- (void)dealloc;
- (bool)didAdvanceAnimationToState:(int)arg1;
- (id)fromPlacement;
- (id)notificationInfo;
- (unsigned long long)notifications;
- (void)setAnimationContext:(id)arg1;
- (void)setAnimationController:(id)arg1;
- (void)setAnimationState:(int)arg1;
- (void)setAnimationStyle:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setFromPlacement:(id)arg1;
- (void)setNotificationInfo:(id)arg1;
- (void)setNotifications:(unsigned long long)arg1;
- (void)setToPlacement:(id)arg1;
- (id)toPlacement;

@end
