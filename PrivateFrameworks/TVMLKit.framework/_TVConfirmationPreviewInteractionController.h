/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVConfirmationPreviewInteractionController : NSObject <UIPreviewInteractionDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    _TVAppDocumentController * _appDocumentController;
    IKCollectionElement * _collectionElement;
    UICollectionView * _collectionView;
    UIViewPropertyAnimator * _commitPropertyAnimator;
    <_TVConfirmationPreviewInteractionControllerDelegate> * _delegate;
    _TVConfirmationDialogPresentationController * _dialogPresentationController;
    UIViewController * _presentingViewController;
    UIPreviewInteraction * _previewInteraction;
    UIViewPropertyAnimator * _previewPropertyAnimator;
    bool  _previewTransitionEnded;
    UICollectionViewCell * _stashedCell;
    _TVConfirmationDocumentWrapperViewController * _wrapperController;
}

@property (nonatomic) IKCollectionElement *collectionElement;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVConfirmationPreviewInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_cleanupPreviewInteraction;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)collectionElement;
- (id)collectionView;
- (void)dealloc;
- (id)delegate;
- (void)dismissConfirmation;
- (id)initWithPresentingViewController:(id)arg1 andCollectionView:(id)arg2 andCollectionElement:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentingViewController;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (void)setCollectionElement:(id)arg1;
- (void)setDelegate:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
