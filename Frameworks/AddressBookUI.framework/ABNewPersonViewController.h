/* made by EzioChiu
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABNewPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate> {
    void * _addressBook;
    CNContactViewController * _cnContactViewController;
    void * _displayedPerson;
    CNContact * _mergeContact;
    <ABNewPersonViewControllerDelegate> * _newPersonViewDelegate;
    const void * _parentGroup;
    void * _parentSource;
}

@property (nonatomic) const void*addressBook;
@property (nonatomic, retain) CNContactViewController *cnContactViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) const void*displayedPerson;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNContact *mergeContact;
@property (nonatomic) <ABNewPersonViewControllerDelegate> *newPersonViewDelegate;
@property (nonatomic) const void*parentGroup;
@property (nonatomic) void*parentSource;
@property (nonatomic) bool showsCancelButton;
@property (readonly) Class superclass;

- (const void*)addressBook;
- (id)cnContactViewController;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)dealloc;
- (const void*)displayedPerson;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (id)initWithStyle:(int)arg1;
- (void)loadContactViewController;
- (void)loadView;
- (id)mergeContact;
- (id)newPersonViewDelegate;
- (const void*)parentGroup;
- (void*)parentSource;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)save:(id)arg1;
- (bool)savesNewContactOnSuspend;
- (void)setAddressBook:(void*)arg1;
- (void)setCnContactViewController:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setMergeContact:(id)arg1;
- (void)setNewPersonViewDelegate:(id)arg1;
- (void)setParentGroup:(const void*)arg1;
- (void)setParentSource:(void*)arg1;
- (void)setSavesNewContactOnSuspend:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (bool)showsCancelButton;
- (void)viewDidAppear:(bool)arg1;

@end
