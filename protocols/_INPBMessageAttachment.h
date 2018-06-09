/* made by EzioChiu.
 */

@protocol _INPBMessageAttachment <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (_INPBURLValue *)fileURL;
- (_INPBString *)filename;
- (bool)hasFileURL;
- (bool)hasFilename;
- (bool)hasType;
- (void)setFileURL:(_INPBURLValue *)arg1;
- (void)setFilename:(_INPBString *)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;

@end
