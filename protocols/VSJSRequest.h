/* made by EzioChiu.
 */

@protocol VSJSRequest <JSExport>

@required

- (NSString *)appleVerificationToken;
- (NSArray *)attributeNames;
- (NSString *)currentAuthentication;
- (NSString *)requestBody;
- (NSString *)requestType;
- (NSDictionary *)requestorInfo;
- (NSString *)requestorVerificationToken;

@end
