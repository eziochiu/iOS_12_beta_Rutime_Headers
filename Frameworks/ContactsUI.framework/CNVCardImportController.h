/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNVCardImportController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate> {
    CNContactStore * _contactStore;
    <CNVCardImportControllerDelegate> * _delegate;
    <CNVCardImportControllerPresentationDelegate> * _presentationDelegate;
    UIViewController * _presentedViewController;
    CNQueue * _receivedContactsQueue;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNVCardImportControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CNVCardImportControllerPresentationDelegate> *presentationDelegate;
@property (nonatomic) UIViewController *presentedViewController;
@property (nonatomic, retain) CNQueue *receivedContactsQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelModalUnknownPersons:(id)arg1;
- (id)contactStore;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)contactsFromURL:(id)arg1;
- (id)delegate;
- (id)dequeueContacts;
- (void)dismissContactsAndPresentNext;
- (void)enqueueContacts:(id)arg1;
- (bool)enqueueContactsAtURL:(id)arg1;
- (id)initWithContactStore:(id)arg1 presentationDelegate:(id)arg2;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)arg1;
- (void)presentEnqueueResultsUIForResultContacts:(id)arg1;
- (void)presentImportUIForContacts:(id)arg1;
- (id)presentationDelegate;
- (id)presentedViewController;
- (void)processNextContacts;
- (id)receivedContactsQueue;
- (void)saveUnknownPersons:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setReceivedContactsQueue:(id)arg1;

@end
