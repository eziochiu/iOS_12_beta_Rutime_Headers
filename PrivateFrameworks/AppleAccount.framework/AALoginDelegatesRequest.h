/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AALoginDelegatesRequest : AARequest {
    ACAccount * _account;
    NSDictionary * _loginParameters;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2;
- (id)urlRequest;
- (id)urlString;

@end
