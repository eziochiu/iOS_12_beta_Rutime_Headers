/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIActiveVoiceShortcutsViewController : UITableViewController <VCUIDebugWorkflowViewControllerDelegate, VCUIEditVoiceShortcutViewControllerDelegate, VCUIGalleryViewControllerDelegate> {
    VCUIVoiceShortcutCell * _prototypeCell;
    UISearchController * _searchController;
    VCVoiceShortcutClient * _voiceShortcutClient;
    NSArray * _voiceShortcuts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VCUIVoiceShortcutCell *prototypeCell;
@property (nonatomic, retain) UISearchController *searchController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VCVoiceShortcutClient *voiceShortcutClient;
@property (nonatomic, retain) NSArray *voiceShortcuts;

+ (void)initialize;

- (void).cxx_destruct;
- (void)createNewShortcut;
- (void)debugWorkflowViewControllerDidFinish:(id)arg1;
- (void)didTapCancel;
- (void)editVoiceShortcutViewController:(id)arg1 didDeleteVoiceShortcut:(id)arg2;
- (void)editVoiceShortcutViewController:(id)arg1 didSaveWithUpdatedVoiceShortcut:(id)arg2;
- (void)editVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)galleryViewControllerDidCancel:(id)arg1;
- (void)galleryViewControllerDidFinish:(id)arg1;
- (id)initWithVoiceShortcutClient:(id)arg1;
- (void)launchExtensionToRunVoiceShortcut:(id)arg1;
- (id)prototypeCell;
- (void)reloadVoiceShortcuts;
- (id)searchController;
- (void)setPrototypeCell:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setVoiceShortcuts:(id)arg1;
- (void)showConfirmationWithTitle:(id)arg1 message:(id)arg2 confirmationHandler:(id /* block */)arg3;
- (void)showHandleIntentResponse:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)voiceShortcutClient;
- (id)voiceShortcuts;

@end
