/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPopupMenuHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    <SKUIPopupMenuDelegate> * _delegate;
    UIButton * _menuButton;
    NSArray * _menuItemTitles;
    UILabel * _menuLabel;
    NSString * _menuLabelTitle;
    UIPopoverController * _menuPopoverController;
    SKUIMenuViewController * _menuViewController;
    long long  _selectedMenuItemIndex;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIPopupMenuDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *menuItemTitles;
@property (nonatomic, copy) NSString *menuLabelTitle;
@property (nonatomic) long long selectedMenuItemIndex;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_menuButtonAction:(id)arg1;
- (void)_reloadMenuButton;
- (id)_titleLabel;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)menuItemTitles;
- (id)menuLabelTitle;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (long long)selectedMenuItemIndex;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMenuItemTitles:(id)arg1;
- (void)setMenuLabelTitle:(id)arg1;
- (void)setSelectedMenuItemIndex:(long long)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
