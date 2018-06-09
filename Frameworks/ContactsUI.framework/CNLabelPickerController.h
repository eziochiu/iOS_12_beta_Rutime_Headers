/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNLabelPickerController : CNPickerController {
    CNPropertyGroupItem * _item;
}

@property (nonatomic, readonly) CNPropertyGroupItem *item;

- (void).cxx_destruct;
- (id)initForPropertyItem:(id)arg1;
- (id)item;
- (void)removeCustomItem:(id)arg1;
- (id)titleForPickerItem:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
