/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPostalAddressEditorNavigationController : UINavigationController {
    <CNPostalAddressEditorDelegate> * _addressEditorDelegate;
}

@property (nonatomic) <CNPostalAddressEditorDelegate> *addressEditorDelegate;

- (void).cxx_destruct;
- (id)addressEditorDelegate;
- (void)doneWithContact:(id)arg1 propertyKey:(id)arg2;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(bool)arg3;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 addressDictionary:(id)arg3 label:(id)arg4;
- (id)initWithPropertyKey:(id)arg1 label:(id)arg2;
- (void)setAddressEditorDelegate:(id)arg1;
- (void)setTitle:(id)arg1;

@end
