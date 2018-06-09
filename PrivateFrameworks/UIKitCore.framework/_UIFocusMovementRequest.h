/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusMovementRequest : NSObject <_UIFocusUpdateRequesting> {
    UIFocusSystem * _focusSystem;
    _UIFocusItemInfo * _focusedItemInfo;
    _UIFocusInputDeviceInfo * _inputDeviceInfo;
    _UIFocusMovementInfo * _movementInfo;
    bool  _shouldPerformHapticFeedback;
    UIWindow * _window;
}

@property (nonatomic, readonly) bool allowsDeferral;
@property (nonatomic, readonly) bool allowsFocusRestoration;
@property (nonatomic, readonly) bool allowsFocusingCurrentItem;
@property (nonatomic, readonly) UIFocusAnimationCoordinator *animationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _UIFocusMovementRequest *fallbackRequest;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, retain) _UIFocusItemInfo *focusedItemInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (nonatomic, retain) _UIFocusMovementInfo *movementInfo;
@property (nonatomic, readonly) bool requiresEnvironmentValidation;
@property (nonatomic, readonly) bool requiresNextFocusedItem;
@property (nonatomic) bool shouldPerformHapticFeedback;
@property (nonatomic, readonly) bool shouldPlayFocusSound;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWindow *window;

- (void).cxx_destruct;
- (id)_requestByRedirectingRequestToFocusSystem:(id)arg1;
- (bool)allowsDeferral;
- (bool)allowsFocusRestoration;
- (bool)allowsFocusingCurrentItem;
- (id)animationCoordinator;
- (id)fallbackRequest;
- (id)focusSystem;
- (id)focusedItemInfo;
- (id)init;
- (id)initWithFocusSystem:(id)arg1 window:(id)arg2;
- (id)inputDeviceInfo;
- (id)movementInfo;
- (bool)requiresEnvironmentValidation;
- (bool)requiresNextFocusedItem;
- (void)setFocusedItemInfo:(id)arg1;
- (void)setInputDeviceInfo:(id)arg1;
- (void)setMovementInfo:(id)arg1;
- (void)setShouldPerformHapticFeedback:(bool)arg1;
- (bool)shouldPerformHapticFeedback;
- (bool)shouldPlayFocusSound;
- (id)window;

@end
