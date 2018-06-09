/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUMediaAccessControlEditorModuleController : HUItemTableModuleController <HUSwitchCellDelegate, UITextFieldDelegate> {
    <HUMediaAccessControlEditorModuleControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUMediaAccessControlEditorModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFMediaAccessControlEditorItemModule *module;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)updateAccessControlDescriptor:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
