/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIResilientRemoteViewContainerViewController : UIViewController {
    UIViewController * _containedViewController;
    bool  _delayingDisplayOfRemoteView;
    UIViewController * _errorViewController;
    NSExtension * _extension;
    <NSCopying> * _extensionRequestIdentifier;
    UIViewController * _remoteViewController;
    _UIWaitingForRemoteViewContainerViewController * _waitingController;
}

@property (nonatomic, retain) UIViewController *containedViewController;
@property (nonatomic) bool delayingDisplayOfRemoteView;
@property (nonatomic, retain) UIViewController *errorViewController;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, copy) <NSCopying> *extensionRequestIdentifier;
@property (nonatomic, readonly) id remoteViewController;
@property (nonatomic, retain) _UIWaitingForRemoteViewContainerViewController *waitingController;

+ (id)instantiateWithExtension:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultInitialViewFrame;
- (void)_displayError:(id)arg1;
- (void)_displayRemoteViewController;
- (id)containedViewController;
- (void)dealloc;
- (void)delayDisplayOfRemoteController;
- (bool)delayingDisplayOfRemoteView;
- (void)endDelayingDisplayOfRemoteController;
- (id)errorViewController;
- (id)extension;
- (id)extensionRequestIdentifier;
- (id)initWithExtension:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidate;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)remoteViewController;
- (void)setContainedViewController:(id)arg1;
- (void)setDelayingDisplayOfRemoteView:(bool)arg1;
- (void)setErrorViewController:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setWaitingController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (id)waitingController;

@end
