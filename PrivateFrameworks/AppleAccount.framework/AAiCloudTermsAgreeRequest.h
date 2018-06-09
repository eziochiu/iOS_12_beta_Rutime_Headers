/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAiCloudTermsAgreeRequest : AARequest {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    bool  _preferPassword;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) bool preferPassword;

- (void).cxx_destruct;
- (id)account;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (bool)preferPassword;
- (void)setAccount:(id)arg1;
- (void)setPreferPassword:(bool)arg1;
- (id)urlRequest;

@end
