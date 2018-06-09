/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeBiometricAuthenticationView : SBUIInteractionForwardingView {
    bool  _ancillaryButtonsVisible;
    SBUIButton * _cancelButton;
    <SBUIPasscodeBiometricAuthenticationViewDelegate> * _delegate;
    SBUIButton * _emergencyCallButton;
    UILabel * _faceIDLabel;
    NSLayoutConstraint * _faceIDLabelFaceIDReasonBaselineConstraint;
    NSString * _faceIDReason;
    UILabel * _faceIDReasonLabel;
    NSString * _faceIDReasonLine2;
    SBUIPasscodePillButton * _faceIDUsePasscodeButton;
    bool  _faceIDUsePasscodeButtonVisible;
    <SBUIPasscodeBiometricAuthenticationViewLayoutDelegate> * _layoutDelegate;
    PKGlyphView * _touchIDGlyphView;
    NSString * _touchIDReason;
    UILabel * _touchIDReasonLabel;
    SBUIButton * _touchIDUsePasscodeButton;
    unsigned long long  _type;
    NSString * _unlockDestination;
}

@property (nonatomic) bool ancillaryButtonsVisible;
@property (nonatomic, retain) SBUIButton *cancelButton;
@property (nonatomic) <SBUIPasscodeBiometricAuthenticationViewDelegate> *delegate;
@property (nonatomic, retain) SBUIButton *emergencyCallButton;
@property (nonatomic, retain) UILabel *faceIDLabel;
@property (nonatomic, retain) NSLayoutConstraint *faceIDLabelFaceIDReasonBaselineConstraint;
@property (setter=_setFaceIDReason:, nonatomic, copy) NSString *faceIDReason;
@property (nonatomic, retain) UILabel *faceIDReasonLabel;
@property (setter=_setFaceIDReason2:, nonatomic, copy) NSString *faceIDReasonLine2;
@property (nonatomic, retain) SBUIPasscodePillButton *faceIDUsePasscodeButton;
@property (nonatomic) bool faceIDUsePasscodeButtonVisible;
@property (nonatomic) <SBUIPasscodeBiometricAuthenticationViewLayoutDelegate> *layoutDelegate;
@property (nonatomic) bool showsCancelButton;
@property (nonatomic) bool showsEmergencyCallButton;
@property (nonatomic, retain) PKGlyphView *touchIDGlyphView;
@property (setter=_setTouchIDReason:, nonatomic, copy) NSString *touchIDReason;
@property (nonatomic, retain) UILabel *touchIDReasonLabel;
@property (nonatomic, retain) SBUIButton *touchIDUsePasscodeButton;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *unlockDestination;

- (void).cxx_destruct;
- (void)_cancelButtonHit;
- (void)_createConstraints;
- (void)_createSubviews;
- (void)_emergencyCallButtonHit;
- (void)_layoutAuthReasonLabel:(id)arg1;
- (double)_leadingForFaceIDReason;
- (void)_noteContentSizeCategoryDidChange;
- (void)_setFaceIDReason2:(id)arg1;
- (void)_setFaceIDReason:(id)arg1;
- (void)_setFaceIDReasonLine2:(id)arg1;
- (void)_setTouchIDReason:(id)arg1;
- (void)_usePasscodeButtonHit;
- (bool)ancillaryButtonsVisible;
- (id)cancelButton;
- (id)delegate;
- (id)emergencyCallButton;
- (id)faceIDLabel;
- (id)faceIDLabelFaceIDReasonBaselineConstraint;
- (id)faceIDReason;
- (id)faceIDReasonLabel;
- (id)faceIDReasonLine2;
- (id)faceIDUsePasscodeButton;
- (bool)faceIDUsePasscodeButtonVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutDelegate:(id)arg2;
- (id)layoutDelegate;
- (void)layoutSubviews;
- (void)setAncillaryButtonsVisible:(bool)arg1;
- (void)setAncillaryButtonsVisible:(bool)arg1 animated:(bool)arg2;
- (void)setCancelButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmergencyCallButton:(id)arg1;
- (void)setFaceIDLabel:(id)arg1;
- (void)setFaceIDLabelFaceIDReasonBaselineConstraint:(id)arg1;
- (void)setFaceIDReasonLabel:(id)arg1;
- (void)setFaceIDUsePasscodeButton:(id)arg1;
- (void)setFaceIDUsePasscodeButtonVisible:(bool)arg1;
- (void)setGlyphViewState:(long long)arg1;
- (void)setGlyphViewState:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setLayoutDelegate:(id)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (void)setTouchIDGlyphView:(id)arg1;
- (void)setTouchIDReasonLabel:(id)arg1;
- (void)setTouchIDUsePasscodeButton:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUnlockDestination:(id)arg1;
- (bool)showsCancelButton;
- (bool)showsEmergencyCallButton;
- (id)touchIDGlyphView;
- (id)touchIDReason;
- (id)touchIDReasonLabel;
- (id)touchIDUsePasscodeButton;
- (unsigned long long)type;
- (id)unlockDestination;

@end
