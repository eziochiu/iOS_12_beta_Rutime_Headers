/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKTabBarController : UITabBarController <UITabBarControllerDelegate> {
    UIViewController * _previousViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *previousViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)previousViewController;
- (void)setPreviousViewController:(id)arg1;
- (void)setTabBarControlsHidden:(bool)arg1 animated:(bool)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
