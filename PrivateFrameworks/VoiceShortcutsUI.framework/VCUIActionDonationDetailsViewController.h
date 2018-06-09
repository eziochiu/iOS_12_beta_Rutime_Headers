/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIActionDonationDetailsViewController : UIViewController <VCUICreateVoiceShortcutViewControllerDelegate> {
    <VCActionDonation> * _donation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <VCActionDonation> *donation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView *view;

+ (void)initialize;

- (void).cxx_destruct;
- (void)createVoiceShortcut;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (id)donation;
- (id)initWithDonation:(id)arg1;
- (void)loadView;

@end
