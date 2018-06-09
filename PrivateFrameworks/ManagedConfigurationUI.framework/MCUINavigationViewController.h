/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCUINavigationViewController : UINavigationController {
    id /* block */  _showViewControllerCompletionBlock;
}

@property (nonatomic, copy) id /* block */ showViewControllerCompletionBlock;

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setShowViewControllerCompletionBlock:(id /* block */)arg1;
- (bool)shouldAutorotate;
- (id /* block */)showViewControllerCompletionBlock;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end