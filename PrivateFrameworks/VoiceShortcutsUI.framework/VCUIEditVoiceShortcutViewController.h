/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIEditVoiceShortcutViewController : UIViewController <VCUIManageVoiceShortcutViewControllerDelegate> {
    <VCUIEditVoiceShortcutViewControllerDelegate> * _delegate;
    VCUIManageVoiceShortcutViewController * _manageVoiceShortcutViewController;
    VCVoiceShortcut * _voiceShortcut;
    VCVoiceShortcutClient * _voiceShortcutClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCUIEditVoiceShortcutViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VCUIManageVoiceShortcutViewController *manageVoiceShortcutViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VCVoiceShortcut *voiceShortcut;
@property (nonatomic, readonly) VCVoiceShortcutClient *voiceShortcutClient;

+ (void)initialize;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithVoiceShortcut:(id)arg1 voiceShortcutClient:(id)arg2;
- (id)manageVoiceShortcutViewController;
- (void)manageVoiceShortcutViewController:(id)arg1 didDeleteVoiceShortcut:(id)arg2;
- (void)manageVoiceShortcutViewController:(id)arg1 didSaveVoiceShortcut:(id)arg2;
- (void)manageVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)manageVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManageVoiceShortcutViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)voiceShortcut;
- (id)voiceShortcutClient;

@end
