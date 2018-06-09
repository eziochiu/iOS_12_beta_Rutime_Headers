/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttendeePicker : UIViewController <CNContactPickerDelegate, MFAutocompleteResultsTableViewControllerDelegate, MFComposeRecipientTextViewDelegate, MFContactsSearchConsumer> {
    bool  _ABAccessDenied;
    <EKEventAttendeePickerDelegate> * _addressValidationDelegate;
    NSMutableDictionary * _atomPresentationOptionsByRecipient;
    MFAutocompleteResultsTableViewController * _autocompleteTableViewController;
    NSOperationQueue * _availabilityQueue;
    MFComposeRecipientTextView * _composeRecipientView;
    EKEvent * _event;
    CNAutocompleteFetchContext * _fetchContext;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    UIKeyboard * _keyboard;
    NSNumber * _lastSearchId;
    NSDate * _overriddenEventEndDate;
    NSDate * _overriddenEventStartDate;
    NSMutableDictionary * _recipientAddressesToRecipients;
    UIScrollView * _recipientScrollView;
    NSArray * _recipients;
    NSString * _searchAccountID;
    MFContactsSearchManager * _searchManager;
    NSMutableArray * _searchResults;
    UITableView * _searchResultsView;
    MFSearchShadowView * _shadowView;
    bool  _shouldReenableAutomaticKeyboard;
    bool  _showingSearchField;
    bool  _suppressAvailabilityRequests;
}

@property (nonatomic) <EKEventAttendeePickerDelegate> *addressValidationDelegate;
@property (nonatomic, readonly) NSArray *addresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) NSString *remainingText;
@property (nonatomic, copy) NSString *searchAccountID;
@property (nonatomic, readonly) bool showAvailability;
@property (readonly) Class superclass;

+ (id)_addressForRecipient:(id)arg1;
+ (bool)_participantHasResponded:(id)arg1;

- (void).cxx_destruct;
- (Class)_CNContactPickerViewController;
- (Class)_CNContactViewController;
- (void)_adjustLayoutOfSubviews;
- (void)_copyRecipientsFromComposeView;
- (void)_hideSearchResultsViewAndCancelOutstandingSearches:(bool)arg1;
- (id)_lookUpRecipientForAddress:(id)arg1;
- (double)_maxScrollerHeight;
- (void)_refreshSearchResults;
- (void)_requestAvailabilityForRecipients:(id)arg1;
- (id)_searchManager;
- (id)_searchResultsView;
- (void)_setAtomPresentationOption:(unsigned long long)arg1 forRecipient:(id)arg2;
- (void)_setRecipientsOnComposeView;
- (id)_shadowView;
- (void)_showSearchResultsView;
- (void)_updateFetchContextChosenAddresses;
- (bool)_zeroKeyworkSearchEnabled;
- (id)addressValidationDelegate;
- (id)addresses;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)beganNetworkActivity;
- (void)commitRemainingText;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (void)endedNetworkActivity;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedTaskWithID:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (void)loadView;
- (id)peoplePickerPrompt;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (id)recipients;
- (id)remainingText;
- (id)searchAccountID;
- (void)searchForCorecipients;
- (void)searchWithText:(id)arg1;
- (void)setAddressValidationDelegate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSearchAccountID:(id)arg1;
- (bool)showAvailability;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
