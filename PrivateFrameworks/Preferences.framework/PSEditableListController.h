/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSEditableListController : PSListController {
    bool  _editable;
    bool  _editingDisabled;
}

- (id)_editButtonBarItem;
- (void)_setEditable:(bool)arg1 animated:(bool)arg2;
- (void)_updateNavigationBar;
- (void)didLock;
- (void)editDoneTapped;
- (bool)editable;
- (id)init;
- (bool)performDeletionActionForSpecifier:(id)arg1;
- (void)setEditButtonEnabled:(bool)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEditingButtonHidden:(bool)arg1 animated:(bool)arg2;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (void)suspend;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
