/* made by EzioChiu.
 */

@protocol _SFPBAppIconImage <NSObject>

@required

- (NSString *)bundleIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setBundleIdentifier:(NSString *)arg1;

@end
