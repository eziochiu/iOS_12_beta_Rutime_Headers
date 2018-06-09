/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextLoupeInteraction : UITextInteraction {
    Class  _configuratorClass;
}

- (void)canBeginDragCursor:(id)arg1;
- (void)finishSetup;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithConfigurator:(Class)arg1;
- (void)loupeGesture:(id)arg1;
- (void)loupeGestureWithState:(long long)arg1 atGesturePoint:(id /* block */)arg2 shouldCancel:(bool*)arg3;

@end
