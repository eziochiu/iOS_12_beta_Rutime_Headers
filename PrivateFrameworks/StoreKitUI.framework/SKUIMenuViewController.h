/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuViewController : UITableViewController {
    UIColor * _borderColor;
    <SKUIMenuViewControllerDelegate> * _delegate;
    long long  _indexOfCheckedTitle;
    NSArray * _menuImages;
    long long  _menuStyle;
    NSArray * _menuTitles;
}

@property (nonatomic) <SKUIMenuViewControllerDelegate> *delegate;
@property (nonatomic) long long indexOfCheckedTitle;
@property (nonatomic, readonly) NSArray *menuImages;
@property (nonatomic) long long menuStyle;
@property (nonatomic, readonly) NSArray *menuTitles;

- (void).cxx_destruct;
- (void)_reloadViewStyling;
- (id)delegate;
- (long long)indexOfCheckedTitle;
- (id)initWithMenuTitles:(id)arg1;
- (id)initWithMenuTitles:(id)arg1 images:(id)arg2;
- (void)loadView;
- (id)menuImages;
- (long long)menuStyle;
- (id)menuTitles;
- (void)setDelegate:(id)arg1;
- (void)setIndexOfCheckedTitle:(long long)arg1;
- (void)setMenuStyle:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
