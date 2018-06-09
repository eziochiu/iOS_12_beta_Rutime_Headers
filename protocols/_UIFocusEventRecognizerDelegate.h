/* made by EzioChiu.
 */

@protocol _UIFocusEventRecognizerDelegate <NSObject>

@required

- (void)_focusEventRecognizer:(_UIFocusEventRecognizer *)arg1 didRecognizeFastScrollingRequest:(_UIFocusFastScrollingRequest *)arg2;
- (bool)_focusEventRecognizer:(_UIFocusEventRecognizer *)arg1 didRecognizeFocusMovementRequest:(_UIFocusMovementRequest *)arg2;
- (UIFocusSystem *)_focusMovementSystemForFocusEventRecognizer:(_UIFocusEventRecognizer *)arg1;
- (bool)_shouldRecognizeEventsInFocusEventRecognizer:(_UIFocusEventRecognizer *)arg1;

@end
