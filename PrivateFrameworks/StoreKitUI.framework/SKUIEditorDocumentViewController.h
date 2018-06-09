/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUIEditorTemplateViewDelegate> {
    SKUIButtonViewElement * _doneButtonElement;
    SKUIEditorTemplateView * _editorView;
    bool  _isTextChanged;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    SKUIViewElementLayoutContext * _layoutContext;
    SKUIButtonViewElement * _resetButtonElement;
    SKUIEditorTemplateViewElement * _templateElement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _toolbarFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_authenticateOnCompletion:(id /* block */)arg1;
- (id)_backgroundColor;
- (void)_cancelButtonAction;
- (void)_doneButtonAction;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_layoutContext;
- (void)_layoutEditorView;
- (void)_layoutNavigation;
- (id)_locateFirstButtonWithType:(long long)arg1 inChildrenOfElement:(id)arg2;
- (void)_resetButtonAction;
- (void)_resetTextView;
- (void)_sendCancelEventAndDismiss;
- (void)_sendDoneEventAndDismissWithText:(id)arg1;
- (void)_updateBiographyWithText:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)_updateEditorViewInset;
- (void)dealloc;
- (void)didChangeTextInEditorTemplateView:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
