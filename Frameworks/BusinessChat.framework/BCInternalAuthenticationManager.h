/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCInternalAuthenticationManager : NSObject {
    ACAccount * _account;
    BCInternalAuthenticationRequest * _authenticationRequest;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly, copy) NSString *action;
@property (nonatomic, retain) BCInternalAuthenticationRequest *authenticationRequest;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly) bool isUserSignedIn;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *middleName;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *username;

- (void).cxx_destruct;
- (id)account;
- (id)action;
- (id)authenticationRequest;
- (void)fetchCredentials:(id /* block */)arg1;
- (id)firstName;
- (id)initWithAuthenticationRequest:(id)arg1;
- (bool)isUserSignedIn;
- (id)labelCategory;
- (id)lastName;
- (id)middleName;
- (void)setAccount:(id)arg1;
- (void)setAuthenticationRequest:(id)arg1;
- (long long)state;
- (id)subtitle;
- (id)title;
- (id)username;

@end
