/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAccountsAndGroupsTableViewCell : UITableViewCell {
    CNAccountsAndGroupsItem * _item;
}

@property (nonatomic, retain) CNAccountsAndGroupsItem *item;

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (void)dealloc;
- (id)item;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setItem:(id)arg1;
- (void)tintColorDidChange;
- (void)updateFromItem;

@end
