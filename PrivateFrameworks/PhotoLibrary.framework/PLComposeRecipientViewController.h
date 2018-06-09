/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLComposeRecipientViewController : UIViewController <CNContactPickerDelegate, MFContactsSearchConsumer, UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSNumber * _currentSearchTaskID;
    <PLComposeRecipientViewControllerDelegate> * _delegate;
    struct { 
        unsigned int showingPeoplePicker : 1; 
        unsigned int showingSearchResultsTable : 1; 
        unsigned int offsettingForResultsTable : 1; 
        unsigned int wasFirstResponder : 1; 
    }  _flags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    unsigned long long  _maxExpandRows;
    UIPopoverController * _peoplePickerPopoverController;
    UIScrollView * _recipientContainerView;
    PLComposeRecipientView * _recipientView;
    MFContactsSearchManager * _searchManager;
    NSArray * _searchResults;
    MFContactsSearchResultsModel * _searchResultsModel;
    UIPopoverController * _searchResultsPopoverController;
    UITableView * _searchResultsTable;
    MFSearchShadowView * _shadowView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLComposeRecipientViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxExpandRows;
@property (nonatomic, readonly, retain) PLComposeRecipientView *recipientView;
@property (readonly) Class superclass;

+ (void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3;

- (void)_addRecipientFromSelectedContactProperty:(id)arg1;
- (void*)_addressBook;
- (void)_dismissContactPicker:(id)arg1;
- (void)_forceDismissPeoplePickerPopover;
- (void)_keyboardSizeDidChange:(id)arg1;
- (id)_newSearchResultsTable;
- (id)_newShadowView;
- (void)_presentSearchResultsPopover;
- (void)_searchForRecipientWithText:(id)arg1;
- (id)_searchManager;
- (bool)_searchResultsShowInPopover;
- (void)_setSearchResults:(id)arg1;
- (void)_updateSearchResultsTableVisibility;
- (void)_updateViewsLayoutAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)beganNetworkActivity;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (bool)composeRecipientViewIsShowingPeoplePicker:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isRecipientViewFirstResponder;
- (void)loadView;
- (void)makeRecipientViewFirstResponder;
- (void)makeRecipientViewResignFirstResponder;
- (unsigned long long)maxExpandRows;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)recipientView;
- (id)recipients;
- (void)setDelegate:(id)arg1;
- (void)setMaxExpandRows:(unsigned long long)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
