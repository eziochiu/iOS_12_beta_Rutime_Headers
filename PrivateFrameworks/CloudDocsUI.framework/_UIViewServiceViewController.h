/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIViewServiceViewController : UIViewController <UINavigationControllerDelegate> {
    UINavigationController * _containedNavController;
    id  _hostingViewController;
}

@property (nonatomic, readonly) UINavigationController *containedNavController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id hostingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_updatedContentSizeForPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)containedNavController;
- (id)hostingViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setContainedNavController:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
