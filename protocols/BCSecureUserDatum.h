/* made by EzioChiu.
 */

@protocol BCSecureUserDatum <BCCloudData>

@required

- (NSString *)key;
- (NSString *)value;

@end
