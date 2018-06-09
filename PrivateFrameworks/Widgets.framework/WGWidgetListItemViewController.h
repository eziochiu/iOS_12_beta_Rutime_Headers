/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetListItemViewController : UIViewController {
    <WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _pendingSize;
    WGWidgetHostingViewController * _widgetHost;
    NSString * _widgetIdentifier;
}

@property (nonatomic) <WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate> *delegate;
@property (getter=_pendingSize, setter=_setPendingSize:, nonatomic) struct CGSize { double x1; double x2; } pendingSize;
@property (nonatomic, readonly) WGWidgetPlatterView *platterView;
@property (nonatomic, readonly) WGWidgetHostingViewController *widgetHost;
@property (nonatomic, readonly, copy) NSString *widgetIdentifier;

- (void).cxx_destruct;
- (void)_addWidgetHostIfNecessary;
- (struct CGSize { double x1; double x2; })_pendingSize;
- (id)_platterViewIfLoaded;
- (id)_platterViewLoadingIfNecessary:(bool)arg1;
- (void)_setPendingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })contentSizeForPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)delegate;
- (id)description;
- (id)initWithWidgetIdentifier:(id)arg1;
- (void)loadView;
- (void)managingContainerDidDisappear:(id)arg1;
- (void)managingContainerWillAppear:(id)arg1;
- (id)platterView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSizeForContentOfSize:(struct CGSize { double x1; double x2; })arg1;
- (void)removeChildViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)widgetHost;
- (id)widgetIdentifier;

@end
