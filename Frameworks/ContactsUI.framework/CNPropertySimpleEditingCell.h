/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate> {
    UITextField * _textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextField *textField;

- (void).cxx_destruct;
- (id)constantConstraints;
- (void)dealloc;
- (id)firstResponderItem;
- (void)prepareForReuse;
- (id)textField;
- (void)textFieldChanged:(id)arg1;
- (void)updateValueWithPropertyItem:(id)arg1;
- (id)valueView;
- (id)variableConstraints;

@end
