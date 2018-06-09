/* made by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface INUIVoiceShortcutServiceViewController : UIViewController <INUIVoiceShortcutRemoteServingInterface, VCUICreateVoiceShortcutViewControllerDelegate, VCUIEditVoiceShortcutViewControllerDelegate, _UIAppearanceRestriction> {
    UIViewController * _childViewController;
}

@property (nonatomic, retain) UIViewController *childViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (bool)_isSecureForRemoteViewService;
+ (bool)_preventsAppearanceProxyCustomization;
+ (id)_remoteViewControllerInterface;
+ (void)initialize;

- (void).cxx_destruct;
- (void)buildForAddingShortcut:(id)arg1;
- (void)buildForEditingVoiceShortcut:(id)arg1;
- (id)childViewController;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)editVoiceShortcutViewController:(id)arg1 didDeleteVoiceShortcut:(id)arg2;
- (void)editVoiceShortcutViewController:(id)arg1 didSaveWithUpdatedVoiceShortcut:(id)arg2;
- (void)editVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)loadView;
- (void)setChildViewController:(id)arg1;

@end
