/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextDragCaretView : UIView {
    UIView<UITextInput> * _view;
}

- (void).cxx_destruct;
- (void)_updateToPosition:(id)arg1;
- (id)caretViewColor:(id)arg1;
- (id)initWithTextInputView:(id)arg1;
- (void)insertAtPosition:(id)arg1;
- (void)insertAtPosition:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)remove;
- (void)removeWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateToPosition:(id)arg1;
- (void)updateToPosition:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;

@end
