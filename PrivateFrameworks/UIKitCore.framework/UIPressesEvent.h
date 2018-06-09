/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPressesEvent : UIEvent {
    NSMutableSet * _allPresses;
    NSHashTable * _terminalEventRegistrants;
    UIPress * _triggeringPhysicalButton;
}

@property (nonatomic, retain) UIPress *_triggeringPhysicalButton;
@property (nonatomic, readonly) NSSet *allPresses;

- (void).cxx_destruct;
- (void)_addGesturesForPress:(id)arg1;
- (void)_addPress:(id)arg1 forDelayedDelivery:(bool)arg2;
- (id)_allPresses;
- (void)_cleanupAfterDispatch;
- (id)_cloneEvent;
- (id)_directionalPressWithStrongestForce;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_init;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2;
- (id)_physicalButtonsForResponder:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2;
- (void)_registerForTerminalEvent:(id)arg1;
- (void)_removePhysicalButton:(id)arg1;
- (id)_respondersForWindow:(id)arg1;
- (bool)_sendEventToGestureRecognizer:(id)arg1;
- (id)_terminalRegistrantsForPressType:(long long)arg1;
- (id)_triggeringPhysicalButton;
- (void)_unregisterForTerminalEvent:(id)arg1;
- (id)_windows;
- (id)allPresses;
- (id)description;
- (id)physicalButtonsForWindow:(id)arg1;
- (id)pressesForGestureRecognizer:(id)arg1;
- (void)set_triggeringPhysicalButton:(id)arg1;
- (long long)subtype;
- (long long)type;

@end
