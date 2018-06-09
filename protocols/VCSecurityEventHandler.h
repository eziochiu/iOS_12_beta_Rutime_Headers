/* made by EzioChiu.
 */

@protocol VCSecurityEventHandler <NSObject>

@required

- (void)handleEncryptionInfoChange:(NSDictionary *)arg1;

@end
