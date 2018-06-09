/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTransitionPresentationContext : NSObject {
    bool  _active;
    UIColor * _backgroundColorForInteractivelyTransitioningPresentedViewController;
    UIWindow * _keyWindowToRestore;
    UIWindow * _presentationWindow;
    unsigned long long  _presentationWindowInitiallySupportedOrientations;
    UIViewController * _presentedViewController;
    UIViewController * _presentingViewController;
    bool  _shouldPresentingViewControllerControlOverallAppearance;
    UIView * _sourceView;
    UIWindow * _sourceWindow;
    UIWindow * _videoOnlyWindow;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) UIColor *backgroundColorForInteractivelyTransitioningPresentedViewController;
@property (nonatomic) UIWindow *keyWindowToRestore;
@property (nonatomic) UIWindow *presentationWindow;
@property (nonatomic) unsigned long long presentationWindowInitiallySupportedOrientations;
@property (nonatomic) UIViewController *presentedViewController;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) bool shouldPresentingViewControllerControlOverallAppearance;
@property (nonatomic, readonly) bool shouldRemovePresentersView;
@property (nonatomic) UIView *sourceView;
@property (nonatomic) UIWindow *sourceWindow;
@property (nonatomic, retain) UIWindow *videoOnlyWindow;

- (void).cxx_destruct;
- (id)backgroundColorForInteractivelyTransitioningPresentedViewController;
- (bool)isActive;
- (id)keyWindowToRestore;
- (id)presentationWindow;
- (unsigned long long)presentationWindowInitiallySupportedOrientations;
- (id)presentedViewController;
- (id)presentingViewController;
- (void)setActive:(bool)arg1;
- (void)setBackgroundColorForInteractivelyTransitioningPresentedViewController:(id)arg1;
- (void)setKeyWindowToRestore:(id)arg1;
- (void)setPresentationWindow:(id)arg1;
- (void)setPresentationWindowInitiallySupportedOrientations:(unsigned long long)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setShouldPresentingViewControllerControlOverallAppearance:(bool)arg1;
- (void)setSourceView:(id)arg1;
- (void)setSourceWindow:(id)arg1;
- (void)setVideoOnlyWindow:(id)arg1;
- (bool)shouldPresentingViewControllerControlOverallAppearance;
- (bool)shouldRemovePresentersView;
- (id)sourceView;
- (id)sourceWindow;
- (id)videoOnlyWindow;

@end
