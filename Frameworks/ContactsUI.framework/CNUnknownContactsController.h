/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUnknownContactsController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate> {
    CNContactStore * _contactStore;
    NSArray * _contacts;
    <CNUnknownContactsControllerDelegate> * _delegate;
    UIViewController * _displayedController;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNUnknownContactsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController *displayedController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)contactStore;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)contacts;
- (id)delegate;
- (id)displayedController;
- (id)initWithContacts:(id)arg1 contactStore:(id)arg2;
- (bool)multipleUnknownContactsViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedController:(id)arg1;
- (id)viewController;

@end
