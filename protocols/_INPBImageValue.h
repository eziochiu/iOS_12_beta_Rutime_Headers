/* made by EzioChiu.
 */

@protocol _INPBImageValue <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (NSData *)data;
- (bool)hasData;
- (bool)hasHeight;
- (bool)hasProxyServiceIdentifier;
- (bool)hasType;
- (bool)hasUri;
- (bool)hasValueMetadata;
- (bool)hasWidth;
- (double)height;
- (NSString *)proxyServiceIdentifier;
- (void)setData:(NSData *)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setProxyServiceIdentifier:(NSString *)arg1;
- (void)setType:(int)arg1;
- (void)setUri:(NSString *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (void)setWidth:(double)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (NSString *)uri;
- (_INPBValueMetadata *)valueMetadata;
- (double)width;

@end
