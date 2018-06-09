/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordSkipHitTest : TITypologyRecord {
    TIKeyboardLayout * _keyLayout;
    TIKeyboardState * _keyboardState;
    TIKeyboardTouchEvent * _touchEvent;
}

@property (nonatomic, retain) TIKeyboardLayout *keyLayout;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic, retain) TIKeyboardTouchEvent *touchEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyLayout;
- (id)keyboardState;
- (void)setKeyLayout:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setTouchEvent:(id)arg1;
- (id)shortDescription;
- (id)touchEvent;

@end
