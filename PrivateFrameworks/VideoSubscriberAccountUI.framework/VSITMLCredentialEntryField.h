/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSITMLCredentialEntryField : VSCredentialEntryField <IKAppKeyboardDelegate> {
    IKTextFieldElement * _associatedTextFieldElement;
}

@property (nonatomic, retain) IKTextFieldElement *associatedTextFieldElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedTextFieldElement;
- (void)setAssociatedTextFieldElement:(id)arg1;
- (void)textDidChangeForKeyboard:(id)arg1;

@end
