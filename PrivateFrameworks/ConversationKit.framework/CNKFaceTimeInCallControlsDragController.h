/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKFaceTimeInCallControlsDragController : NSObject <UIGestureRecognizerDelegate> {
    void animation;
    void constraintsController;
    void delegate;
    void disabledScrollViews;
    void inCallControlsView;
    void panGestureRecognizer;
}

- (id /* block */).cxx_destruct;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePanGestureRecognizer:(id)arg1;
- (id)init;
- (id)initInCallControlsView:(id)arg1 constraintsController:(id)arg2;

@end
