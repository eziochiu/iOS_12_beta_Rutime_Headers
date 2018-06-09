/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextUndoManager : NSUndoManager {
    UITextInputController * _inputController;
}

@property (nonatomic) UITextInputController *inputController;

- (void).cxx_destruct;
- (id)inputController;
- (void)removeAllActions;
- (void)setInputController:(id)arg1;

@end
