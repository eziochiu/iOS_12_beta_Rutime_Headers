/* made by EzioChiu.
 */

@protocol _INPBMediaItemValue <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (_INPBImageValue *)artwork;
- (bool)hasArtwork;
- (bool)hasIdentifier;
- (bool)hasTitle;
- (bool)hasType;
- (bool)hasValueMetadata;
- (NSString *)identifier;
- (void)setArtwork:(_INPBImageValue *)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (NSString *)title;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
