/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardLayoutAlignmentView : UIView {
    bool  _automaticKeyboardFrameTrackingDisabled;
    NSLayoutConstraint * bottomConstraint;
    NSLayoutConstraint * disambiguatingLeftConstraint;
    NSLayoutConstraint * heightConstraint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  lastKnownKeyboardRect;
    NSLayoutConstraint * widthConstraint;
}

@property (nonatomic) bool automaticKeyboardFrameTrackingDisabled;

- (void).cxx_destruct;
- (void)_createConstraints;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInBoundsForKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_matchInitialKeyboardFrame;
- (void)_removeConstraints;
- (void)_startObservingKeyboardNotificationsForScreen:(id)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)_updateConstraintsForKeyboardNotification:(id)arg1;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)automaticKeyboardFrameTrackingDisabled;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAutomaticKeyboardFrameTrackingDisabled:(bool)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
