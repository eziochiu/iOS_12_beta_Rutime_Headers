/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode {
    NSString * _hsaCode;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 device:(id)arg2 hsaCode:(id)arg3;
- (id)urlRequest;
- (id)urlString;

@end
