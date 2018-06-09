/* made by EzioChiu
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPeoplePickerNavigationController : UINavigationController <CNContactPickerDelegate> {
    void * _addressBook;
    CNContactPickerViewController * _contactPicker;
    NSArray * _displayedProperties;
    bool  _ignoreViewWillBePresented;
    id  _peoplePickerDelegate;
    NSPredicate * _predicateForEnablingPerson;
    NSPredicate * _predicateForSelectionOfPerson;
    NSPredicate * _predicateForSelectionOfProperty;
}

@property (nonatomic) const void*addressBook;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayedProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ABPeoplePickerNavigationControllerDelegate> *peoplePickerDelegate;
@property (nonatomic, copy) NSPredicate *predicateForEnablingPerson;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfPerson;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfProperty;
@property (readonly) Class superclass;

- (bool)_allowsAutorotation;
- (void)_endDelayingPresentation;
- (bool)_isDelayingPresentation;
- (void)_setViewController:(id)arg1 animated:(bool)arg2;
- (bool)_shouldPreventCancelButtonsFromShowing;
- (void)_viewWillBePresented;
- (const void*)addressBook;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactPickerPresentedViewController:(id)arg1;
- (id)contactStore;
- (void)dealloc;
- (id)displayedProperties;
- (id)displayedPropertyKeys;
- (id)init;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)peoplePickerDelegate;
- (id)predicateForEnablingPerson;
- (id)predicateForSelectionOfPerson;
- (id)predicateForSelectionOfProperty;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setNavigationBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setPeoplePickerDelegate:(id)arg1;
- (void)setPredicateForEnablingPerson:(id)arg1;
- (void)setPredicateForSelectionOfPerson:(id)arg1;
- (void)setPredicateForSelectionOfProperty:(id)arg1;
- (void)setupViewControllers;
- (void)viewWillAppear:(bool)arg1;

@end
