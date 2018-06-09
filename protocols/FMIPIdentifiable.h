/* made by EzioChiu.
 */

@protocol FMIPIdentifiable

@required

+ (NSString *)identityTag;

- (INIdentifierString *)deviceId;
- (void)setDeviceId:(INIdentifierString *)arg1;

@end
