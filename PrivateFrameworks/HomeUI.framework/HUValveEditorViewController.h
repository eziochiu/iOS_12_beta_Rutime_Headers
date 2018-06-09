/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUValveEditorViewController : HUItemTableViewController {
    HUValveEditorItemManager * _valveEditorItemManager;
}

@property (nonatomic, retain) HUValveEditorItemManager *valveEditorItemManager;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithSourceItem:(id)arg1 editorMode:(unsigned long long)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (void)setValveEditorItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (id)valveEditorItemManager;

@end
