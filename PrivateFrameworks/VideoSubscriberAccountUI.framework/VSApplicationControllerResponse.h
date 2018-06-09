/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSApplicationControllerResponse : NSObject {
    VSAccountAuthentication * _accountAuthentication;
    NSSet * _accountChannelIDs;
    NSString * _authenticationScheme;
    NSNumber * _expectedAction;
    NSString * _responseStatusCode;
    NSString * _responseString;
}

@property (nonatomic, retain) VSAccountAuthentication *accountAuthentication;
@property (nonatomic, copy) NSSet *accountChannelIDs;
@property (nonatomic, copy) NSString *authenticationScheme;
@property (nonatomic, copy) NSNumber *expectedAction;
@property (nonatomic, copy) NSString *responseStatusCode;
@property (nonatomic, copy) NSString *responseString;

- (void).cxx_destruct;
- (id)accountAuthentication;
- (id)accountChannelIDs;
- (id)authenticationScheme;
- (id)description;
- (id)expectedAction;
- (id)responseStatusCode;
- (id)responseString;
- (void)setAccountAuthentication:(id)arg1;
- (void)setAccountChannelIDs:(id)arg1;
- (void)setAuthenticationScheme:(id)arg1;
- (void)setExpectedAction:(id)arg1;
- (void)setResponseStatusCode:(id)arg1;
- (void)setResponseString:(id)arg1;

@end
