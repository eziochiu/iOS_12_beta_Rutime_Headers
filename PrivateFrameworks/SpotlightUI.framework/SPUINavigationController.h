/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUINavigationController : UINavigationController <UINavigationControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SPUINavigationBar *navigationBar;
@property (getter=isNavigationBarBottomTrailingCornerRounded) bool navigationBarBottomTrailingCornerRounded;
@property (readonly) Class superclass;

- (id)init;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (bool)isNavigationBarBottomTrailingCornerRounded;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)setNavigationBarBlurProgress:(double)arg1 animated:(bool)arg2;
- (void)setNavigationBarBottomTrailingCornerRounded:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
