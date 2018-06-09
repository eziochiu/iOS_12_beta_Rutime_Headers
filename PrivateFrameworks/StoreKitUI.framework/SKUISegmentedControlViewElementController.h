/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISegmentedControlViewElementController : NSObject <SKUIFlexibleSegmentedControlDelegate, SKUIMenuPopoverDelegate, SKUIMenuViewControllerDelegate> {
    SKUIClientContext * _clientContext;
    long long  _defaultMaximumNumberOfVisibleItems;
    double  _desiredSegmentWidth;
    UIBarButtonItem * _menuSheetCancelButtonItem;
    SKUIMenuViewController * _menuSheetViewController;
    UIViewController * _parentViewController;
    SKUIMenuPopoverController * _popoverMenuViewController;
    SKUIFlexibleSegmentedControl * _segmentedControl;
    SKUISegmentedControlViewElement * _viewElement;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultMaximumNumberOfVisibleItems;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredSegmentWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, readonly) UIView *segmentedControlView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SKUISegmentedControlViewElement *viewElement;

- (void).cxx_destruct;
- (void)_cancelMenuAction:(id)arg1;
- (void)_connectToSegmentedControl:(id)arg1;
- (void)_destroyMenuSheetViewController;
- (void)_destroyPopoverController;
- (void)_reloadPropertiesForSegmentedControl:(id)arg1;
- (id)_segmentedControl;
- (void)_showMoreListSheetWithTitles:(id)arg1 selectedIndex:(long long)arg2;
- (void)_showPopoverMoreListWithTitles:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (long long)defaultMaximumNumberOfVisibleItems;
- (double)desiredSegmentWidth;
- (id)initWithViewElement:(id)arg1;
- (id)initWithViewElement:(id)arg1 segmentedControl:(id)arg2;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)parentViewController;
- (void)reloadAfterDocumentUpdate;
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;
- (void)segmentedControl:(id)arg1 showMoreListWithTitles:(id)arg2;
- (id)segmentedControlView;
- (void)setClientContext:(id)arg1;
- (void)setDefaultMaximumNumberOfVisibleItems:(long long)arg1;
- (void)setDesiredSegmentWidth:(double)arg1;
- (void)setParentViewController:(id)arg1;
- (id)viewElement;

@end
