/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSCredentialEntryField : NSObject {
    long long  _autocapitalizationType;
    long long  _autocorrectionType;
    long long  _keyboardType;
    NSString * _placeholder;
    NSString * _recentsMessage;
    NSString * _recentsTitle;
    long long  _returnKeyType;
    bool  _secure;
    NSString * _text;
    NSString * _title;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *recentsMessage;
@property (nonatomic, copy) NSString *recentsTitle;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecure, nonatomic) bool secure;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (id)init;
- (bool)isSecure;
- (long long)keyboardType;
- (id)placeholder;
- (id)recentsMessage;
- (id)recentsTitle;
- (long long)returnKeyType;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRecentsMessage:(id)arg1;
- (void)setRecentsTitle:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)text;
- (id)title;

@end
