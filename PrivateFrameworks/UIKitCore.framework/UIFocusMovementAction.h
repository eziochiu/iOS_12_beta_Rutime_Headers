/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIFocusMovementAction : BSAction

@property (nonatomic, readonly) _UIFocusMovementInfo *focusMovementInfo;
@property (nonatomic, readonly) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (nonatomic, readonly) bool shouldPerformHapticFeedback;

- (long long)UIActionType;
- (id)focusMovementInfo;
- (id)initWithFocusMovementInfo:(id)arg1;
- (id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(bool)arg3;
- (id)inputDeviceInfo;
- (bool)shouldPerformHapticFeedback;

@end
