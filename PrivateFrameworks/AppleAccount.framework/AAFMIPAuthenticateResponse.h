/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFMIPAuthenticateResponse : AAResponse {
    NSDictionary * _appleAccountInfo;
    NSDictionary * _tokens;
}

@property (nonatomic, readonly) NSString *fmipWipeToken;

- (void).cxx_destruct;
- (id)fmipWipeToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
