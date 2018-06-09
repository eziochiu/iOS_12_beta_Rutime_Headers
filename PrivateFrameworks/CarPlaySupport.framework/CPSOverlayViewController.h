/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSOverlayViewController : UINavigationController

- (id)_presentedTemplateViewController;
- (void)dismissAlertAnimated:(bool)arg1;
- (unsigned long long)indexOfTemplate:(id)arg1;
- (void)popToRootTemplateAnimated:(bool)arg1;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (void)popToTemplate:(id)arg1 animated:(bool)arg2;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)presentAlert:(id)arg1;
- (void)presentTemplateViewController:(id)arg1 animated:(bool)arg2 presentationStyle:(unsigned long long)arg3;
- (id)templates;
- (id)topTemplate;
- (id)viewControllerForTemplate:(id)arg1;
- (void)viewDidLoad;

@end
