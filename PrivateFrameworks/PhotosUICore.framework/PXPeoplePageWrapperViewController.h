/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeoplePageWrapperViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate> {
    UIPageViewController * _pageViewController;
    long long  _presentationPageIndex;
    NSArray * _viewControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPageViewController *pageViewController;
@property (nonatomic) long long presentationPageIndex;
@property (readonly) Class superclass;
@property (retain) NSArray *viewControllers;

- (void).cxx_destruct;
- (void)_showViewControllerAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_updateNavigationItemForCurrentViewController:(id)arg1;
- (void)commonInit;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithViewControllers:(id)arg1;
- (id)pageViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (long long)presentationCountForPageViewController:(id)arg1;
- (long long)presentationIndexForPageViewController:(id)arg1;
- (long long)presentationPageIndex;
- (void)setPresentationPageIndex:(long long)arg1;
- (void)setViewControllers:(id)arg1;
- (void)updateForEnteringSelectMode:(id)arg1;
- (void)updateForExitingSelectMode:(id)arg1;
- (void)updateForSelectionChanged:(id)arg1;
- (id)viewControllers;
- (void)viewDidLoad;

@end
