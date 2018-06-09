/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextLinkInteraction : UITextInteraction {
    bool  _isTryingToHighlightLink;
}

- (void)_resetForLink;
- (void)cancelInteractionWithLink;
- (id)init;
- (bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)linkTapRecognizer:(id)arg1;
- (void)longDelayRecognizer:(id)arg1;
- (void)smallDelayRecognizer:(id)arg1;
- (bool)tapOnLinkWithGesture:(id)arg1;

@end
