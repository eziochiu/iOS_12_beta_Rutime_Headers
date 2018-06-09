/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDialogTextField : NSObject {
    long long  _keyboardType;
    NSString * _placeholder;
    bool  _secure;
    long long  _tag;
    NSString * _text;
    id  _textField;
    NSString * _title;
}

@property (nonatomic) long long keyboardType;
@property (nonatomic) bool secure;
@property (nonatomic) long long tag;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *title;

+ (id)textFieldWithTitle:(id)arg1 nsTextField:(id)arg2;
+ (id)textFieldWithTitle:(id)arg1 secure:(bool)arg2;
+ (id)textFieldWithTitle:(id)arg1 uiTextField:(id)arg2;

- (void).cxx_destruct;
- (void)_setupTextField:(id)arg1;
- (id)generateNSTextField;
- (id)generateUITextField;
- (long long)keyboardType;
- (bool)secure;
- (void)setKeyboardType:(long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setTag:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)tag;
- (id)text;
- (id)title;

@end
