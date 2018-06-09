/* made by EzioChiu.
 */

@protocol _INPBURLValue <NSObject>

@required

- (NSString *)absoluteString;
- (bool)hasAbsoluteString;
- (bool)hasValueMetadata;
- (void)setAbsoluteString:(NSString *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
