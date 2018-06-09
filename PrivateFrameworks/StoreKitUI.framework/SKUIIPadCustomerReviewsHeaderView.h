/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPadCustomerReviewsHeaderView : UIControl <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    UIButton * _appSupportButton;
    SKUIClientContext * _clientContext;
    SKUIColorScheme * _colorScheme;
    long long  _selectedSortIndex;
    UIView * _separatorView;
    UIButton * _sortButton;
    UILabel * _sortLabel;
    UIPopoverController * _sortPopoverController;
    NSArray * _sortTitles;
    UILabel * _titleLabel;
    UIButton * _writeAReviewButton;
}

@property (nonatomic, readonly) UIControl *appSupportButton;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedSortIndex;
@property (nonatomic, copy) NSArray *sortTitles;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIControl *writeAReviewButton;

- (void).cxx_destruct;
- (void)_destroySortPopoverController;
- (void)_reloadSortButton;
- (void)_sortButtonAction:(id)arg1;
- (id)appSupportButton;
- (id)colorScheme;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (void)layoutSubviews;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (long long)selectedSortIndex;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setSelectedSortIndex:(long long)arg1;
- (void)setSortTitles:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sortTitles;
- (id)writeAReviewButton;

@end
