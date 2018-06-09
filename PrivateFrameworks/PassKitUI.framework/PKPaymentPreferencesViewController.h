/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPreferencesViewController : UIViewController <CNContactPickerDelegate, PKAddressEditorViewControllerDelegate, PKAddressSearcherViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    UITextField * _currentEditingField;
    NSIndexPath * _currentEditingIndexPath;
    PKPaymentPass * _currentlySelectedPaymentPass;
    id /* block */  _handler;
    NSArray * _latestPreferences;
    PKPassSnapshotter * _passSnapshotter;
    PKPaymentPass * _paymentPassForBillingErrors;
    id /* block */  _pickedContactHandler;
    id /* block */  _pickedContactPropertyHandler;
    NSArray * _preferences;
    PKPaymentPreferenceButtonCell * _sizingButtonCell;
    long long  _style;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ pickedContactHandler;
@property (nonatomic, copy) id /* block */ pickedContactPropertyHandler;
@property (nonatomic, retain) NSArray *preferences;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (id)_cellForNamePreference:(id)arg1 row:(unsigned long long)arg2;
- (id)_cellForPreference:(id)arg1 row:(unsigned long long)arg2;
- (id)_cellOfClass:(Class)arg1;
- (void)_cleanupInlineEdits;
- (void)_editPreferenceAtIndexPath:(id)arg1;
- (bool)_isPaymentStyle;
- (bool)_isViewTranslucent;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_presentMeCardAlertControllerWithContact:(id)arg1 contactKey:(id)arg2 handler:(id /* block */)arg3;
- (id)_requiredKeysForPreference:(id)arg1 contact:(id)arg2;
- (void)_savePickedContact:(id)arg1 inPreference:(id)arg2;
- (bool)_saveUpdatedContact:(id)arg1 contactKey:(id)arg2 preference:(id)arg3 atIndex:(long long)arg4;
- (void)_setContactHandlersForPreference:(id)arg1;
- (void)_showAddressEditorForContact:(id)arg1 title:(id)arg2 requiredKeys:(id)arg3 highlightedKeys:(id)arg4 errors:(id)arg5;
- (void)_showAddressPickerForPreference:(id)arg1;
- (void)_showContactsPickerForPreference:(id)arg1;
- (void)_startInlineEditingForPreference:(id)arg1 inSection:(unsigned long long)arg2;
- (void)_updateContactAndForceSelection:(bool)arg1;
- (bool)_updateMeCardWithNewContact:(id)arg1 oldContact:(id)arg2 forKey:(id)arg3 usingPreference:(id)arg4;
- (void)_updateNavigationBarButtons;
- (void)_updatePreferredContentSize;
- (void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2;
- (void)addressEditorViewControllerDidCancel:(id)arg1;
- (void)addressSearcherViewController:(id)arg1 selectedContact:(id)arg2;
- (void)addressSearcherViewControllerDidCancel:(id)arg1;
- (void)clearErrorsForPreference:(Class)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (id /* block */)handler;
- (void)hideTextField:(id)arg1;
- (id)initWithStyle:(long long)arg1 preferences:(id)arg2 title:(id)arg3 handler:(id /* block */)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id /* block */)pickedContactHandler;
- (id /* block */)pickedContactPropertyHandler;
- (id)pk_childrenForAppearance;
- (id)preferences;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setErrors:(id)arg1 animated:(bool)arg2;
- (void)setErrors:(id)arg1 otherPass:(id)arg2 animated:(bool)arg3;
- (void)setErrors:(id)arg1 selectedPass:(id)arg2 animated:(bool)arg3;
- (void)setHandler:(id /* block */)arg1;
- (void)setPickedContactHandler:(id /* block */)arg1;
- (void)setPickedContactPropertyHandler:(id /* block */)arg1;
- (void)setPreferences:(id)arg1;
- (long long)style;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
