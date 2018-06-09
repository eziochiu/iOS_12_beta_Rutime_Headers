/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAccountAuthentication : NSObject {
    VSOptional * _authenticationToken;
    NSString * _username;
}

@property (nonatomic, retain) VSOptional *authenticationToken;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)authenticationToken;
- (id)description;
- (id)init;
- (void)setAuthenticationToken:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
