/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUICreateVoiceShortcutViewController : UIViewController <VCUIManageVoiceShortcutViewControllerDelegate> {
    <VCActionDonation> * _actionDonation;
    <VCUICreateVoiceShortcutViewControllerDelegate> * _delegate;
    VCUIManageVoiceShortcutViewController * _manageVoiceShortcutViewController;
    VCVoiceShortcutClient * _voiceShortcutClient;
}

@property (nonatomic, readonly) <VCActionDonation> *actionDonation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCUICreateVoiceShortcutViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VCUIManageVoiceShortcutViewController *manageVoiceShortcutViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VCVoiceShortcutClient *voiceShortcutClient;

+ (void)initialize;

- (void).cxx_destruct;
- (id)actionDonation;
- (id)delegate;
- (id)initWithActionDonation:(id)arg1 voiceShortcutClient:(id)arg2;
- (void)loadView;
- (id)manageVoiceShortcutViewController;
- (void)manageVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)manageVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)manageVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManageVoiceShortcutViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)voiceShortcutClient;

@end
