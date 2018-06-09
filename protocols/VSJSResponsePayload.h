/* made by EzioChiu.
 */

@protocol VSJSResponsePayload <JSExport>

@required

- (NSString *)authN;
- (NSString *)authenticationScheme;
- (NSNumber *)expectedAction;
- (NSDate *)expirationDate;
- (id)init;
- (NSString *)logout;
- (void)setAuthN:(NSString *)arg1;
- (void)setAuthenticationScheme:(NSString *)arg1;
- (void)setExpectedAction:(NSNumber *)arg1;
- (void)setExpirationDate:(NSDate *)arg1;
- (void)setLogout:(NSString *)arg1;
- (void)setStatusCode:(NSString *)arg1;
- (void)setUserChannelList:(NSArray *)arg1;
- (void)setUserMetadata:(NSString *)arg1;
- (void)setUsername:(NSString *)arg1;
- (NSString *)statusCode;
- (NSArray *)userChannelList;
- (NSString *)userMetadata;
- (NSString *)username;

@end
