/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPPasscodeView : UIView {
    NSMutableString * _passcodeMutableString;
}

@property (retain) NSMutableString *passcodeMutableString;
@property (readonly) NSString *passcodeString;

- (void).cxx_destruct;
- (void)appendCharacter:(id)arg1;
- (void)clear;
- (void)deleteLastCharacter;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)passcodeMutableString;
- (id)passcodeString;
- (void)setPasscodeMutableString:(id)arg1;

@end
