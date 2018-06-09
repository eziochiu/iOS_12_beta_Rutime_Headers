/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillNodeWK1 : NSObject <WBSFormAutoFillNode> {
    DOMNode * _domNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DOMNode *domNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)autoFillNodeWithDOMNode:(id)arg1;

- (void).cxx_destruct;
- (id)domNode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementBounds;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (id)initWithDOMNode:(id)arg1;
- (id)initWithJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (bool)isHTMLInputElementUserEdited;
- (bool)isHTMLTextAreaElementUserEdited;
- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(bool)arg1 inputElementIsPasswordConfirmation:(bool)arg2;
- (void)setHTMLInputElementAutofilled:(bool)arg1;

@end
