/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKComposedViewController : TSKPopoverBasedViewController {
    UIViewController * mComposedViewController;
}

@property (nonatomic, readonly) UIViewController *composedViewController;

- (id)composedViewController;
- (void)dealloc;
- (id)i_contentViewController;
- (id)initWithViewController:(id)arg1;
- (void)p_loadChildView;
- (void)p_unloadChildView;
- (id)title;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
