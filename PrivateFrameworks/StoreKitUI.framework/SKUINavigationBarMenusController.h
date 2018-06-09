/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationBarMenusController : SKUINavigationBarSectionController <SKUIMenuPopoverDelegate> {
    UIControl * _focusedMenuButton;
    NSArray * _menuViewElements;
    SKUINavigationBarMenusView * _menusView;
    SKUIMenuPopoverController * _popoverController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_destroyPopover;
- (void)_menuButtonAction:(id)arg1;
- (id)_menuViewElementForView:(id)arg1;
- (void)dealloc;
- (id)initWithMenuViewElements:(id)arg1;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)reloadSectionViews;
- (id)view;
- (void)willAppearInNavigationBar;

@end
