/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFSimplePasscodeInputView : BFFPasscodeInputView <PSPasscodeFieldDelegate> {
    PSPasscodeField * _passcodeField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSPasscodeField *passcodeField;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfEntryFields:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)passcode;
- (id)passcodeDisplayView;
- (id)passcodeField;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)setPasscode:(id)arg1;
- (void)setPasscodeField:(id)arg1;

@end
