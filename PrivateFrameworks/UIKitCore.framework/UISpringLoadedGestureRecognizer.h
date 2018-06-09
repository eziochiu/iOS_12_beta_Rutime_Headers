/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISpringLoadedGestureRecognizer : UIDragGestureRecognizer

- (void)_draggingEndedWithEvent:(id)arg1;
- (void)_draggingEnteredWithEvent:(id)arg1;
- (void)_draggingExitedWithEvent:(id)arg1;
- (void)_draggingUpdatedWithEvent:(id)arg1;
- (bool)_shouldReceiveDragEvent:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)spring;

@end
