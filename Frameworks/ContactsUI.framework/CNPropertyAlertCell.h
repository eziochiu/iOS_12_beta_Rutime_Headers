/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyAlertCell : CNPropertySimpleCell <CNPickerControllerDelegate>

@property (nonatomic, readonly) CNPropertyGroupAlertItem *alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)wantsChevron;

- (id)alertItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)performDefaultAction;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (bool)shouldPerformDefaultAction;

@end
