/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactAddNewFieldAction : CNContactAction {
    <CNContactGroupPickerDelegate> * _groupPickerDelegate;
}

@property (nonatomic) <CNContactGroupPickerDelegate> *groupPickerDelegate;

- (void).cxx_destruct;
- (id)groupPickerDelegate;
- (void)performActionWithSender:(id)arg1;
- (void)setGroupPickerDelegate:(id)arg1;

@end
