/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactContentViewController : UIViewController <ABContactViewDataSource, ABContactViewDelegate, CNContactActionDelegate, CNContactContentViewController, CNContactContentViewControllerDelegate, CNContactGroupPickerDelegate, CNContactHeaderViewDelegate, CNContactInlineActionsViewControllerDelegate_Internal, CNPresenterDelegate, CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNShareLocationProtocol, CNUIObjectViewControllerDelegate, NSUserActivityDelegate, UIAdaptivePresentationControllerDelegate, UIPopoverControllerDelegate, UIViewControllerRestoration> {
    CNUIUserActionListDataSource * _actionsDataSource;
    CNContactInlineActionsViewController * _actionsViewController;
    UIView * _actionsWrapperView;
    NSArray * _activatedConstraints;
    CNUIUserActivityManager * _activityManager;
    CNContactAddFavoriteAction * _addFavoriteAction;
    CNContactAddLinkedCardAction * _addLinkedCardAction;
    CNContactAddNewFieldAction * _addNewFieldAction;
    CNContactAddToExistingContactAction * _addToExistingContactAction;
    bool  _allowsActions;
    bool  _allowsActionsModel;
    bool  _allowsAddToFavorites;
    bool  _allowsAddingToAddressBook;
    bool  _allowsCardActions;
    bool  _allowsConferencing;
    bool  _allowsContactBlocking;
    bool  _allowsDeletion;
    bool  _allowsEditInApp;
    bool  _allowsEditing;
    bool  _allowsPropertyActions;
    bool  _allowsSendMessage;
    bool  _allowsSettingLinkedContactsAsPreferred;
    bool  _allowsSharing;
    NSString * _alternateName;
    bool  _alwaysEditing;
    int  _animating;
    CNContactToggleBlockCallerAction * _blockAction;
    NSMapTable * _cachedLabelWidths;
    UIKeyCommand * _cancelCommand;
    CNCardGroup * _cardActionsGroup;
    CNCardGroup * _cardBlockContactGroup;
    CNCardGroup * _cardBottomGroup;
    CNCardGroup * _cardEditingActionsGroup;
    CNCardGroup * _cardEditingDeleteContactGroup;
    CNCardFaceTimeGroup * _cardFaceTimeGroup;
    CNCardGroup * _cardFooterGroup;
    CNCardLinkedCardsGroup * _cardLinkedCardsGroup;
    CNCardGroup * _cardMedicalIDGroup;
    CNCardGroup * _cardPrimaryPropertyActionsGroup;
    CNCardGroup * _cardTopGroup;
    bool  _changingContacts;
    CNContact * _contact;
    <CNContactContentViewControllerDelegate> * _contactDelegate;
    CNContactFormatter * _contactFormatter;
    CNContactStore * _contactStore;
    bool  _contactSupportsTTYCalls;
    CNContactViewCache * _contactViewCache;
    CNContactCreateNewContactAction * _createNewContactAction;
    CNContactAction * _createReminderAction;
    <CNContactViewHostProtocol> * _delegate;
    CNContactAction * _deleteContactAction;
    bool  _disablingRotation;
    CNContactView * _displayContactView;
    NSMutableArray * _displayGroups;
    NSLayoutConstraint * _displayHeaderOverflowHeightConstraint;
    UIView * _displayHeaderOverflowView;
    CNContactHeaderDisplayView * _displayHeaderView;
    NSArray * _displayedProperties;
    UIKeyCommand * _editCommand;
    CNContactView * _editingContactView;
    NSMutableArray * _editingGroups;
    CNContactHeaderEditView * _editingHeaderView;
    NSMutableArray * _editingLinkedContacts;
    CNUIContactsEnvironment * _environment;
    NSArray * _extraBarButtonItems;
    CNPropertyFaceTimeAction * _faceTimeAction;
    CNPropertyFaceTimeAction * _faceTimeAudioAction;
    <CNCancelable> * _faceTimeIDSLookupToken;
    CNMutableContact * _fakeEditableContact;
    UIView * _footerOverflowView;
    NSMutableDictionary * _groupsAfterGroup;
    UIView * _headerDropShadowView;
    NSLayoutConstraint * _headerHeightConstraint;
    HKHealthStore * _healthStore;
    bool  _hideCardActions;
    NSArray * _highlightedProperties;
    bool  _highlightedPropertyImportant;
    <CNCancelable> * _iMessageIDSLookupToken;
    CNContactAction * _ignoreContactAction;
    bool  _isMailVIP;
    NSMutableArray * _issuedSaveRequestIdentifiers;
    double  _keyboardVerticalOverlap;
    CNPropertyLinkedCardsAction * _linkedCardsAction;
    NSDictionary * _linkedPoliciesByContactIdentifier;
    CNManagedConfiguration * _managedConfiguration;
    CNMedicalIDAction * _medicalIDAction;
    NSString * _message;
    long long  _mode;
    CNMutableContact * _mutableContact;
    NSArray * _nameEditingGroups;
    bool  _navBarWasVisibleWhenPresented;
    bool  _needsRefetch;
    bool  _needsReload;
    CNPropertyNoteCell * _noteCell;
    NSArray * _originalContacts;
    bool  _outOfProcessSetupComplete;
    CNContainer * _parentContainer;
    CNGroup * _parentGroup;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _peripheryInsets;
    UIViewController * _personHeaderViewController;
    CNPolicy * _policy;
    <CNContactViewControllerPPTDelegate> * _pptDelegate;
    NSArray * _preEditLeftBarButtonItems;
    <CNPresenterDelegate> * _presentingDelegate;
    NSString * _primaryProperty;
    NSDictionary * _propertyGroups;
    bool  _runningPPT;
    UIKeyCommand * _saveCommand;
    bool  _saving;
    CNPropertyAction * _sendMessageAction;
    CNContactAction * _shareContactAction;
    CNShareLocationController * _shareLocationController;
    bool  _shouldShowLinkedContacts;
    bool  _showingMeContact;
    CNSiriContactContextProvider * _siriContextProvider;
    CNContactSuggestionAction * _suggestedContactAction;
    CNContactUpdateExistingContactAction * _updateExistingContactAction;
    NSDictionary * _userActivityUserInfo;
}

@property (nonatomic, retain) CNUIUserActionListDataSource *actionsDataSource;
@property (nonatomic, retain) CNContactInlineActionsViewController *actionsViewController;
@property (nonatomic, retain) UIView *actionsWrapperView;
@property (nonatomic, retain) NSArray *activatedConstraints;
@property (nonatomic, readonly) CNUIUserActivityManager *activityManager;
@property (nonatomic, retain) CNContactAddFavoriteAction *addFavoriteAction;
@property (nonatomic, retain) CNContactAddLinkedCardAction *addLinkedCardAction;
@property (nonatomic, retain) CNContactAddNewFieldAction *addNewFieldAction;
@property (nonatomic, retain) CNContactAddToExistingContactAction *addToExistingContactAction;
@property (nonatomic) bool allowsActions;
@property (nonatomic) bool allowsActionsModel;
@property (nonatomic) bool allowsAddToFavorites;
@property (nonatomic) bool allowsAddingToAddressBook;
@property (nonatomic) bool allowsCardActions;
@property (nonatomic) bool allowsConferencing;
@property (nonatomic) bool allowsContactBlocking;
@property (nonatomic) bool allowsDeletion;
@property (nonatomic) bool allowsEditInApp;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsPropertyActions;
@property (nonatomic) bool allowsSendMessage;
@property (nonatomic) bool allowsSettingLinkedContactsAsPreferred;
@property (nonatomic) bool allowsSharing;
@property (nonatomic, retain) NSString *alternateName;
@property (nonatomic) bool alwaysEditing;
@property (nonatomic, retain) CNContactToggleBlockCallerAction *blockAction;
@property (nonatomic, retain) NSMapTable *cachedLabelWidths;
@property (nonatomic, retain) UIKeyCommand *cancelCommand;
@property (nonatomic, readonly) NSArray *cardActions;
@property (nonatomic, retain) CNCardGroup *cardActionsGroup;
@property (nonatomic, retain) CNCardGroup *cardBlockContactGroup;
@property (nonatomic, retain) CNCardGroup *cardBottomGroup;
@property (nonatomic, retain) CNCardGroup *cardEditingActionsGroup;
@property (nonatomic, retain) CNCardGroup *cardEditingDeleteContactGroup;
@property (nonatomic, retain) CNCardFaceTimeGroup *cardFaceTimeGroup;
@property (nonatomic, readonly) CNCardGroup *cardFooterGroup;
@property (nonatomic, retain) CNCardLinkedCardsGroup *cardLinkedCardsGroup;
@property (nonatomic, retain) CNCardGroup *cardMedicalIDGroup;
@property (nonatomic, retain) CNCardGroup *cardPrimaryPropertyActionsGroup;
@property (nonatomic, retain) CNCardGroup *cardTopGroup;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) <CNContactContentViewControllerDelegate> *contactDelegate;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) CNContactHeaderView *contactHeaderView;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic) bool contactSupportsTTYCalls;
@property (nonatomic, readonly) CNContactView *contactView;
@property (nonatomic, readonly) CNContactViewCache *contactViewCache;
@property (nonatomic, retain) CNContactCreateNewContactAction *createNewContactAction;
@property (nonatomic, retain) CNContactAction *createReminderAction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactViewHostProtocol> *delegate;
@property (nonatomic, retain) CNContactAction *deleteContactAction;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactView *displayContactView;
@property (nonatomic, retain) NSMutableArray *displayGroups;
@property (nonatomic, retain) NSLayoutConstraint *displayHeaderOverflowHeightConstraint;
@property (nonatomic, retain) UIView *displayHeaderOverflowView;
@property (nonatomic, retain) CNContactHeaderDisplayView *displayHeaderView;
@property (nonatomic, copy) NSArray *displayedProperties;
@property (nonatomic, retain) UIKeyCommand *editCommand;
@property (nonatomic, retain) CNContactView *editingContactView;
@property (nonatomic, retain) NSMutableArray *editingGroups;
@property (nonatomic, retain) CNContactHeaderEditView *editingHeaderView;
@property (nonatomic, retain) NSMutableArray *editingLinkedContacts;
@property (nonatomic, readonly) CNUIContactsEnvironment *environment;
@property (nonatomic, retain) NSArray *extraBarButtonItems;
@property (nonatomic, retain) CNPropertyFaceTimeAction *faceTimeAction;
@property (nonatomic, retain) CNPropertyFaceTimeAction *faceTimeAudioAction;
@property (nonatomic, retain) <CNCancelable> *faceTimeIDSLookupToken;
@property (nonatomic, retain) CNMutableContact *fakeEditableContact;
@property (nonatomic, retain) UIView *footerOverflowView;
@property (nonatomic, retain) NSMutableDictionary *groupsAfterGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerDropShadowView;
@property (nonatomic, retain) NSLayoutConstraint *headerHeightConstraint;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic) bool hideCardActions;
@property (nonatomic, retain) NSArray *highlightedProperties;
@property (nonatomic) bool highlightedPropertyImportant;
@property (nonatomic, retain) <CNCancelable> *iMessageIDSLookupToken;
@property (nonatomic, retain) CNContactAction *ignoreContactAction;
@property (nonatomic) bool isMailVIP;
@property (readonly) bool isPresentingModalViewController;
@property (nonatomic, retain) NSMutableArray *issuedSaveRequestIdentifiers;
@property (nonatomic) double keyboardVerticalOverlap;
@property (nonatomic, retain) CNPropertyLinkedCardsAction *linkedCardsAction;
@property (nonatomic, retain) NSDictionary *linkedPoliciesByContactIdentifier;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, retain) CNMedicalIDAction *medicalIDAction;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) long long mode;
@property (nonatomic, retain) CNMutableContact *mutableContact;
@property (nonatomic, retain) NSArray *nameEditingGroups;
@property (nonatomic, retain) CNPropertyNoteCell *noteCell;
@property (nonatomic, retain) NSArray *originalContacts;
@property (nonatomic) bool outOfProcessSetupComplete;
@property (nonatomic, retain) CNContainer *parentContainer;
@property (nonatomic, retain) CNGroup *parentGroup;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (nonatomic, retain) UIView *personHeaderView;
@property (nonatomic, retain) UIViewController *personHeaderViewController;
@property (nonatomic, retain) CNPolicy *policy;
@property (nonatomic) <CNContactViewControllerPPTDelegate> *pptDelegate;
@property (nonatomic, retain) NSArray *preEditLeftBarButtonItems;
@property (nonatomic) <CNPresenterDelegate> *presentingDelegate;
@property (nonatomic, retain) NSString *primaryProperty;
@property (nonatomic, readonly) NSDictionary *propertyGroups;
@property (nonatomic) bool runningPPT;
@property (nonatomic, retain) UIKeyCommand *saveCommand;
@property (nonatomic, retain) CNPropertyAction *sendMessageAction;
@property (nonatomic, retain) CNContactAction *shareContactAction;
@property (nonatomic, retain) CNShareLocationController *shareLocationController;
@property (nonatomic) bool shouldShowLinkedContacts;
@property (nonatomic) bool showingMeContact;
@property (nonatomic, retain) CNSiriContactContextProvider *siriContextProvider;
@property (nonatomic, retain) CNContactSuggestionAction *suggestedContactAction;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) CNContactUpdateExistingContactAction *updateExistingContactAction;
@property (nonatomic, retain) NSDictionary *userActivityUserInfo;

+ (void)_telemetryForContact:(id)arg1;
+ (bool)actionModelIncludesTTY:(id)arg1;
+ (id)boolStateRestorationProperties;
+ (id)createActionsControllerWithActionListDataSource:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysForContact:(id)arg1;
+ (id)descriptorForRequiredKeysWithDescription:(id)arg1;
+ (bool)enablesTransportButtons;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (id)_addCreateNewContactAction;
- (void)_addFaceTimeGroupAnimated:(bool)arg1;
- (id)_addFavoriteActionWithConferencing:(bool)arg1 telephony:(bool)arg2;
- (id)_addGroupsInArray:(id)arg1 afterGroup:(id)arg2;
- (id)_addLinkedCardAction;
- (id)_addNewFieldAction;
- (id)_addToExistingContactAction;
- (void)_addedGroupWithName:(id)arg1;
- (id)_allDisplayPropertyItemsFromGroups:(id)arg1;
- (id)_cardGroupAtTableViewSectionIndex:(long long)arg1;
- (id)_cellForIndexPath:(id)arg1;
- (id)_createReminderAction;
- (id)_currentGroups;
- (id)_currentTopVisibleGroupInContactView:(id)arg1;
- (id)_dateForProperty:(id)arg1;
- (void)_didCompleteWithContact:(id)arg1;
- (id)_faceTimeAction;
- (id)_faceTimeAudioAction;
- (bool)_indexPathIsActionItem:(id)arg1;
- (id)_itemAtIndexPath:(id)arg1;
- (id)_labelWidthKeyForGroup:(id)arg1;
- (id)_labelWidthKeyForItem:(id)arg1;
- (id)_linkedCardsAction;
- (id)_loadDisplayGroups;
- (id)_loadEditingGroups;
- (id)_loadNameEditingGroups;
- (id)_loadPropertyGroups;
- (long long)_modalPresentationStyleForViewController:(id)arg1;
- (bool)_modelHasChanges;
- (bool)_modelIsEmpty;
- (long long)_numberOfItemsInCustomGroup:(id)arg1;
- (id)_policyForContact:(id)arg1 mode:(long long)arg2;
- (id)_propertyGroupsForKeys:(id)arg1;
- (void)_refetchContact;
- (void)_reloadFaceTimeGroup;
- (void)_reloadLinkedCardsGroup;
- (void)_reloadMedicalIDGroup;
- (void)_reloadPropertyGroupsPreservingChanges:(bool)arg1;
- (void)_retrieveActionsModelPreservingChanges:(bool)arg1;
- (void)_saveChangesForGroups:(id)arg1;
- (void)_scrollContactView:(id)arg1 toVisibleGroup:(id)arg2;
- (id)_sendMessageActionAllowingEmailIDs:(bool)arg1;
- (void)_setNeedsUpdateCachedLabelWidths;
- (void)_setupAddToAddressBookActions;
- (void)_setupCardActions;
- (void)_setupContactBlockingActionsWithUpdate:(bool)arg1;
- (void)_setupCustomActions;
- (void)_setupEditingCardActions;
- (void)_setupEditingLinkedContactsForKeys:(id)arg1;
- (void)_setupPrimaryPropertyActions;
- (void)_setupSuggestionActions;
- (id)_shareContactAction;
- (void)_updateAvailableTransports;
- (void)_updateAvailableTransportsForItems:(id)arg1;
- (void)_updateCachedLabelWidths;
- (void)_updateCachedLabelWidthsForGroup:(id)arg1;
- (void)_updateCachedLabelWidthsForItem:(id)arg1;
- (void)_updateCachedLabelWidthsIfNeeded;
- (void)_updateEmailTransportButtonsForItems:(id)arg1;
- (id)_updateExistingContactAction;
- (void)_updateIMessageTransportButtonsForItems:(id)arg1;
- (void)_updateItemsInGroup:(id)arg1;
- (void)_updateLabelWidthForCell:(id)arg1;
- (void)_updateLabelWidthForCellsInGroup:(id)arg1 reset:(bool)arg2;
- (void)_updateLabelWidthsForAllVisibleCells;
- (void)_updatePhoneTransportButtonsForItems:(id)arg1;
- (void)_updateTTYTransportButtonsForItems:(id)arg1;
- (void)_updateUserActivity;
- (void)_validateGroup:(id)arg1;
- (id)action:(id)arg1 cellForPropertyItem:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)actionDidFinish:(id)arg1;
- (void)actionDidUpdate:(id)arg1;
- (void)actionWasCanceled:(id)arg1;
- (id)actionsDataSource;
- (id)actionsViewController;
- (id)actionsWrapperView;
- (id)activatedConstraints;
- (id)activityManager;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 destructive:(bool)arg5;
- (void)addCardGroup:(id)arg1 afterGroup:(id)arg2;
- (void)addEditingItemAtIndexPath:(id)arg1;
- (id)addFavoriteAction;
- (id)addLinkedCardAction;
- (void)addLinkedContact:(id)arg1;
- (id)addNewFieldAction;
- (id)addToExistingContactAction;
- (void)adjustInsetsForKeyboardOverlap:(double)arg1;
- (void)adjustPreferredContentSize;
- (void)alignEditingHeaderViewTrailingEdgeWithSeparators;
- (bool)allowsActions;
- (bool)allowsActionsModel;
- (bool)allowsAddToFavorites;
- (bool)allowsAddingToAddressBook;
- (bool)allowsCardActions;
- (bool)allowsConferencing;
- (bool)allowsContactBlocking;
- (bool)allowsDeletion;
- (bool)allowsEditInApp;
- (bool)allowsEditing;
- (bool)allowsPropertyActions;
- (bool)allowsSendMessage;
- (bool)allowsSettingLinkedContactsAsPreferred;
- (bool)allowsSharing;
- (id)alreadyPickedGroups;
- (id)alternateName;
- (bool)alwaysEditing;
- (id)applyContactStyle;
- (id)blockAction;
- (void)blockListDidChange:(id)arg1;
- (id)cachedLabelWidths;
- (bool)canBecomeFirstResponder;
- (id)cancelCommand;
- (id)cardActions;
- (id)cardActionsGroup;
- (id)cardBlockContactGroup;
- (id)cardBottomGroup;
- (id)cardEditingActionsGroup;
- (id)cardEditingDeleteContactGroup;
- (id)cardFaceTimeGroup;
- (id)cardFooterGroup;
- (id)cardGroupForProperty:(id)arg1;
- (id)cardLinkedCardsGroup;
- (id)cardMedicalIDGroup;
- (id)cardPrimaryPropertyActionsGroup;
- (id)cardTopGroup;
- (void)clearMapsDataIfEdited;
- (id)contact;
- (id)contactDelegate;
- (void)contactDidAppear;
- (id)contactFormatter;
- (void)contactGroupPickerDidCancel:(id)arg1;
- (void)contactGroupPickerDidFinish:(id)arg1 withGroup:(id)arg2;
- (id)contactHeaderView;
- (bool)contactInlineActionsViewController:(id)arg1 shouldPerformActionOfType:(id)arg2 withContactProperty:(id)arg3;
- (void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(id)arg1;
- (void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(id)arg1;
- (id)contactStore;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (bool)contactSupportsTTYCalls;
- (id)contactView;
- (id)contactView:(id)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (void)contactView:(id)arg1 didSelectItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (double)contactView:(id)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (long long)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2;
- (id)contactViewCache;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (double)contentOffsetYForGlobalHeaderHeight:(double)arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)contentScrollView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)createNewContactAction;
- (id)createReminderAction;
- (void)createdNewContact:(id)arg1;
- (void)dealloc;
- (id)defaultValueForPropertyCell:(id)arg1;
- (id)delegate;
- (id)deleteContactAction;
- (double)desiredHeightForWidth:(double)arg1;
- (void)didChangeToEditMode:(bool)arg1;
- (id)displayContactView;
- (id)displayGroups;
- (id)displayHeaderOverflowHeightConstraint;
- (id)displayHeaderOverflowView;
- (id)displayHeaderView;
- (id)displayedProperties;
- (void)editCancel;
- (void)editCancel:(id)arg1;
- (id)editCommand;
- (id)editingContactView;
- (id)editingGroups;
- (id)editingHeaderView;
- (id)editingLinkedContacts;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)environment;
- (id)extraBarButtonItems;
- (id)faceTimeAction;
- (id)faceTimeAudioAction;
- (id)faceTimeIDSLookupToken;
- (id)fakeEditableContact;
- (id)footerOverflowView;
- (double)globalHeaderHeightForContentOffset:(double)arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (Class)groupClassForProperty:(id)arg1;
- (unsigned long long)groupIndexFromTableViewSectionIndex:(unsigned long long)arg1;
- (id)groupsAfterGroup;
- (bool)hasTableViewHeaderFirstSection;
- (id)headerDropShadowView;
- (id)headerHeightConstraint;
- (void)headerPhotoDidSaveEditsForImageDrop;
- (void)headerPhotoDidUpdate;
- (void)headerViewDidUpdateLabelSizes;
- (id)healthStore;
- (bool)hideCardActions;
- (id)highlightedProperties;
- (bool)highlightedPropertyImportant;
- (id)hostingViewControllerForController:(id)arg1;
- (id)iMessageIDSLookupToken;
- (id)ignoreContactAction;
- (long long)indexOfGroup:(id)arg1;
- (id)indexPathOfDisplayedPropertyItem:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initializeTableViewsForHeaderHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForDisplayTableView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForEditingTableView:(id)arg1;
- (bool)isMailVIP;
- (bool)isOutOfProcess;
- (bool)isPresentingModalViewController;
- (bool)isScrollViewControllingHeaderResizeAnimation:(id)arg1;
- (bool)isStandardGroup:(id)arg1;
- (bool)isTableViewHeaderFirstSectionIndexPath:(id)arg1;
- (id)issuedSaveRequestIdentifiers;
- (void)keyboardDidShowNotification:(id)arg1;
- (double)keyboardVerticalOverlap;
- (void)keyboardWillHideNotification:(id)arg1;
- (id)linkedCardsAction;
- (id)linkedPoliciesByContactIdentifier;
- (void)loadContactViewControllerViews;
- (void)loadView;
- (void)localeDidChange:(id)arg1;
- (id)managedConfiguration;
- (id)medicalIDAction;
- (id)message;
- (long long)mode;
- (id)mutableContact;
- (id)nameEditingGroups;
- (id)navigationItemController;
- (bool)needsReload;
- (id)noteCell;
- (long long)numberOfGroupsInContactView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)originalContacts;
- (bool)outOfProcessSetupComplete;
- (id)parentContainer;
- (id)parentGroup;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (id)personHeaderView;
- (id)personHeaderViewController;
- (id)policy;
- (id)pptDelegate;
- (id)preEditLeftBarButtonItems;
- (void)prepareCell:(id)arg1;
- (void)presentViewController:(id)arg1 sourceView:(id)arg2;
- (id)presentingDelegate;
- (id)primaryProperty;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (id)propertyGroups;
- (void)reloadCardGroup:(id)arg1;
- (bool)reloadDataIfNeeded;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)reloadUnifiedContact;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3;
- (void)removeEditingItem:(id)arg1 atIndexPath:(id)arg2;
- (void)removeFirstSectionHeaderViewControllerFromHierarchy;
- (void)removeLinkedContact:(id)arg1;
- (struct CGSize { double x1; double x2; })requiredSizeForVisibleTableView;
- (bool)runningPPT;
- (bool)saveChanges;
- (id)saveCommand;
- (id)saveLinkedContactChanges;
- (void)saveModelChangesToContact;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollIndicatorInsetsForDisplayTableView:(id)arg1 withContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)scrollScrollViewAllTheWayUp:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (long long)sectionOfGroupInTableView:(id)arg1;
- (id)sendMessageAction;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)setActionsDataSource:(id)arg1;
- (void)setActionsViewController:(id)arg1;
- (void)setActionsWrapperView:(id)arg1;
- (void)setActivatedConstraints:(id)arg1;
- (void)setAddFavoriteAction:(id)arg1;
- (void)setAddLinkedCardAction:(id)arg1;
- (void)setAddNewFieldAction:(id)arg1;
- (void)setAddToExistingContactAction:(id)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setAllowsActionsModel:(bool)arg1;
- (void)setAllowsAddToFavorites:(bool)arg1;
- (void)setAllowsAddingToAddressBook:(bool)arg1;
- (void)setAllowsCardActions:(bool)arg1;
- (void)setAllowsConferencing:(bool)arg1;
- (void)setAllowsContactBlocking:(bool)arg1;
- (void)setAllowsDeletion:(bool)arg1;
- (void)setAllowsEditInApp:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsPropertyActions:(bool)arg1;
- (void)setAllowsSendMessage:(bool)arg1;
- (void)setAllowsSettingLinkedContactsAsPreferred:(bool)arg1;
- (void)setAllowsSharing:(bool)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAlwaysEditing:(bool)arg1;
- (void)setBlockAction:(id)arg1;
- (void)setCachedLabelWidths:(id)arg1;
- (void)setCancelCommand:(id)arg1;
- (void)setCancelKeyboardShortcutEnabled:(bool)arg1;
- (void)setCardActionsGroup:(id)arg1;
- (void)setCardBlockContactGroup:(id)arg1;
- (void)setCardBottomGroup:(id)arg1;
- (void)setCardEditingActionsGroup:(id)arg1;
- (void)setCardEditingDeleteContactGroup:(id)arg1;
- (void)setCardFaceTimeGroup:(id)arg1;
- (void)setCardLinkedCardsGroup:(id)arg1;
- (void)setCardMedicalIDGroup:(id)arg1;
- (void)setCardPrimaryPropertyActionsGroup:(id)arg1;
- (void)setCardTopGroup:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactDelegate:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContactSupportsTTYCalls:(bool)arg1;
- (void)setCreateNewContactAction:(id)arg1;
- (void)setCreateReminderAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteContactAction:(id)arg1;
- (void)setDisplayContactView:(id)arg1;
- (void)setDisplayGroups:(id)arg1;
- (void)setDisplayHeaderOverflowHeightConstraint:(id)arg1;
- (void)setDisplayHeaderOverflowView:(id)arg1;
- (void)setDisplayHeaderView:(id)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setEditCommand:(id)arg1;
- (void)setEditKeyboardShortcutEnabled:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditingContactView:(id)arg1;
- (void)setEditingGroups:(id)arg1;
- (void)setEditingHeaderView:(id)arg1;
- (void)setEditingLinkedContacts:(id)arg1;
- (void)setExtraBarButtonItems:(id)arg1;
- (void)setFaceTimeAction:(id)arg1;
- (void)setFaceTimeAudioAction:(id)arg1;
- (void)setFaceTimeIDSLookupToken:(id)arg1;
- (void)setFakeEditableContact:(id)arg1;
- (void)setFooterOverflowView:(id)arg1;
- (void)setGroupsAfterGroup:(id)arg1;
- (void)setHeaderDropShadowView:(id)arg1;
- (void)setHeaderHeightConstraint:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setHideCardActions:(bool)arg1;
- (void)setHighlightedProperties:(id)arg1;
- (void)setHighlightedPropertyImportant:(bool)arg1;
- (void)setIMessageIDSLookupToken:(id)arg1;
- (void)setIgnoreContactAction:(id)arg1;
- (void)setIsMailVIP:(bool)arg1;
- (void)setIssuedSaveRequestIdentifiers:(id)arg1;
- (void)setKeyboardVerticalOverlap:(double)arg1;
- (void)setLinkedCardsAction:(id)arg1;
- (void)setLinkedPoliciesByContactIdentifier:(id)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setMedicalIDAction:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setMutableContact:(id)arg1;
- (void)setNameEditingGroups:(id)arg1;
- (void)setNeedsReload;
- (void)setNeedsReloadLazy;
- (void)setNoteCell:(id)arg1;
- (void)setOriginalContacts:(id)arg1;
- (void)setOutOfProcessSetupComplete:(bool)arg1;
- (void)setParentContainer:(id)arg1;
- (void)setParentGroup:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPersonHeaderViewController:(id)arg1;
- (void)setPolicy:(id)arg1;
- (void)setPptDelegate:(id)arg1;
- (void)setPreEditLeftBarButtonItems:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setPrimaryProperty:(id)arg1;
- (void)setRunningPPT:(bool)arg1;
- (void)setSaveCommand:(id)arg1;
- (void)setSaveKeyboardShortcutEnabled:(bool)arg1;
- (void)setSendMessageAction:(id)arg1;
- (void)setShareContactAction:(id)arg1;
- (void)setShareLocationController:(id)arg1;
- (void)setShouldShowLinkedContacts:(bool)arg1;
- (void)setShowingMeContact:(bool)arg1;
- (void)setSiriContextProvider:(id)arg1;
- (void)setSuggestedContactAction:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setUpdateExistingContactAction:(id)arg1;
- (void)setUserActivityUserInfo:(id)arg1;
- (void)setupActionsPreservingChanges:(bool)arg1;
- (void)setupConstraints;
- (void)setupShareLocationActionReload:(bool)arg1;
- (void)setupTableHeaderView;
- (void)setupViewHierarchyIncludingAvatarHeader:(bool)arg1 editing:(bool)arg2;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;
- (id)shareContactAction;
- (id)shareLocationController;
- (id)sharedActionsDataSource;
- (void)sharingStatusDidChange;
- (bool)shouldDisplayAvatarHeaderView;
- (bool)shouldReallyShowLinkedContactsForEditingState:(bool)arg1;
- (bool)shouldShowFooterOverflowViewForEditingState:(bool)arg1;
- (bool)shouldShowLinkedContacts;
- (bool)showingMeContact;
- (id)siriContextProvider;
- (id)suggestedContactAction;
- (id)tableView;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableViewHeaderFirstSectionCellForTableView:(id)arg1;
- (unsigned long long)tableViewSectionIndexFromGroupIndex:(unsigned long long)arg1;
- (void)toggleEditing;
- (void)toggleEditing:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)updateContactsViewWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateDisplayHeaderOverflowHeightConstant;
- (void)updateDoneButton;
- (void)updateEditNavigationItemsAnimated:(bool)arg1;
- (id)updateExistingContactAction;
- (void)updateFooterOverflowViewForTableView:(id)arg1 editing:(bool)arg2;
- (double)updateHeaderConstraintForGlobalHeaderHeight:(double)arg1 direction:(long long)arg2 animated:(bool)arg3;
- (void)updateHeaderHeightToMatchScrollViewState:(id)arg1 scrollDirection:(long long)arg2 animated:(bool)arg3;
- (void)updateInsetsIfNeededForTableView:(id)arg1 isEditing:(bool)arg2;
- (void)updateTableView:(id)arg1 contentInsetsTo:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 withScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)updateUserActivityState:(id)arg1;
- (void)updateViewConstraints;
- (void)updateWithNewContact:(id)arg1;
- (void)updatedExistingContact:(id)arg1;
- (id)userActivityUserInfo;
- (id)viewControllerForHeaderView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
