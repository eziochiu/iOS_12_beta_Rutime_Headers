/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIAppGalleryViewController : UITableViewController <VCUICreateVoiceShortcutViewControllerDelegate> {
    NSArray * _actionDonations;
    NSString * _applicationBundleIdentifier;
    <VCUIAppGalleryViewControllerDelegate> * _delegate;
    VCUIActionDonationCell * _prototypeCell;
    NSString * _query;
}

@property (nonatomic, copy) NSArray *actionDonations;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCUIAppGalleryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VCUIActionDonationCell *prototypeCell;
@property (nonatomic, readonly, copy) NSString *query;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setSeparatorInsets;
- (id)actionDonations;
- (id)applicationBundleIdentifier;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)createVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1;
- (id)delegate;
- (id)initWithApplicationBundleIdentifier:(id)arg1 query:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)prototypeCell;
- (id)query;
- (void)setActionDonations:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrototypeCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateRecommendedShortcuts;
- (void)viewDidLoad;

@end
