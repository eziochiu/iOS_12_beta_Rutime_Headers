/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesMapContainerViewController : UIViewController <PXGridPresentationNavigationItemDelegate, PXPlacesMapBarButtonsDelegate> {
    UIViewController * _currentViewController;
    PXPlacesMapFetchResultViewController * _fetchResultViewController;
    bool  _gridControllerEditing;
    UISegmentedControl * _subviewControl;
}

@property (nonatomic, retain) UIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXPlacesMapFetchResultViewController *fetchResultViewController;
@property (nonatomic) bool gridControllerEditing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISegmentedControl *subviewControl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetNavigationItem;
- (void)_switchChildViewControllerFrom:(id)arg1 to:(id)arg2;
- (id)currentViewController;
- (id)fetchResultViewController;
- (bool)gridControllerEditing;
- (id)init;
- (void)loadView;
- (void)setBarButtonItems:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)setGridControllerEditing:(bool)arg1;
- (void)setSubviewControl:(id)arg1;
- (id)subviewControl;
- (void)subviewControlChanged:(id)arg1;
- (void)viewController:(id)arg1 updatedNavigationItem:(id)arg2 animated:(bool)arg3;
- (void)viewDidLoad;

@end
