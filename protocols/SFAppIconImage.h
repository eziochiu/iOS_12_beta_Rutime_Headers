/* made by EzioChiu.
 */

@protocol SFAppIconImage <SFImage>

@required

- (NSString *)bundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setBundleIdentifier:(NSString *)arg1;

@end
