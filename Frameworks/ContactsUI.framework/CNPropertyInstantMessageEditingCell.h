/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyInstantMessageEditingCell : CNPropertySimpleEditingCell <CNPickerControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNInstantMessageAddress *imAddress;
@property (readonly) Class superclass;

- (id)imAddress;
- (void)labelButtonClicked:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;

@end
