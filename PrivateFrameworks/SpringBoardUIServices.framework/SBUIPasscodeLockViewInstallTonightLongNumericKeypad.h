/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewInstallTonightLongNumericKeypad : SBUIPasscodeLockViewLongNumericKeypad {
    SBUIButton * _actionButton;
}

- (void).cxx_destruct;
- (void)_actionButtonHit;
- (void)_configureActionButton;
- (void)_layoutActionButton;
- (void)_layoutStatusView;
- (void)_setShowsCancelButton:(bool)arg1 fromEmergencyCallButton:(bool)arg2;
- (void)_setShowsEmergencyCallButton:(bool)arg1 fromCancelButton:(bool)arg2;
- (void)_sizeLabel:(id)arg1;
- (id)initWithLightStyle:(bool)arg1;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;

@end
