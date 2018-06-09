/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAppNavigationController : UINavigationController <IKAppNavigationController, UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    struct { 
        unsigned int shouldOverrideModalBehaviorForPlaybackDocument : 1; 
        unsigned int shouldIgnoreDismissal : 1; 
        unsigned int shouldDismissShroud : 1; 
        unsigned int willLoadAppDocumentWithController : 1; 
    }  _ancDelegateFlags;
    <_TVAppNavigationControllerDelegate> * _appNavigationControllerDelegate;
    UITapGestureRecognizer * _menuRecognizer;
    <NSObject> * _modalPresenterObserverToken;
    UIViewController * _presentedModalViewController;
}

@property (nonatomic) <_TVAppNavigationControllerDelegate> *appNavigationControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITapGestureRecognizer *menuRecognizer;
@property (nonatomic, retain) <NSObject> *modalPresenterObserverToken;
@property (nonatomic, retain) UIViewController *presentedModalViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeViewController;
- (void)_doWillLoadAppDocumentWithController:(id)arg1;
- (void)_handleMenuAction:(id)arg1;
- (bool)_shouldIgnoreModalDismissal:(id)arg1;
- (bool)_shouldOverrideModalBehaviorForPlaybackDocument:(id)arg1 andExistingPlaybackDocument:(id)arg2;
- (id)activeDocument;
- (id)appNavigationControllerDelegate;
- (void)clear;
- (void)dealloc;
- (void)dismissAllModals:(id /* block */)arg1;
- (void)dismissModal;
- (void)dismissModal:(bool)arg1;
- (void)dismissed;
- (id)documents;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)loadView;
- (id)menuRecognizer;
- (id)modalPresenterObserverToken;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (id)popToRootDocument:(bool)arg1;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (void)presentConfirmation:(id)arg1 options:(id)arg2;
- (void)presentModal:(id)arg1 options:(id)arg2;
- (id)presentedModalViewController;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)setAppNavigationControllerDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMenuRecognizer:(id)arg1;
- (void)setModalPresenterObserverToken:(id)arg1;
- (void)setPresentedModalViewController:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
