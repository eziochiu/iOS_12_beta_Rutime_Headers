/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFListUnsubscribeSuggestion : NSObject {
    MailAccount * _account;
    NSString * _address;
    NSString * _body;
    MFMessageHeaders * _headers;
    NSString * _subject;
}

@property (nonatomic, readonly) MailAccount *account;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) MFMessageHeaders *headers;
@property (nonatomic, readonly) NSString *subject;

- (id)account;
- (id)address;
- (id)body;
- (void)dealloc;
- (unsigned long long)hash;
- (id)headers;
- (id)init;
- (id)initWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4 headers:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)subject;

@end
