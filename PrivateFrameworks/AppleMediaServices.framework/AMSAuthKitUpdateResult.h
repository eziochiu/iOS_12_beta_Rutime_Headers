/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAuthKitUpdateResult : NSObject {
    ACAccount * _account;
    unsigned long long  _credentialSource;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) unsigned long long credentialSource;

- (void).cxx_destruct;
- (id)account;
- (unsigned long long)credentialSource;
- (id)initWithAccount:(id)arg1 credentialSource:(unsigned long long)arg2;

@end
