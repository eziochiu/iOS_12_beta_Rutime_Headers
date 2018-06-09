/* made by EzioChiu.
 */

@protocol _SFPBTrack <NSObject>

@required

- (NSString *)duration;
- (bool)highlighted;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)number;
- (_SFPBActionItem *)playAction;
- (_SFPBURL *)preview;
- (void)setDuration:(NSString *)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNumber:(NSString *)arg1;
- (void)setPlayAction:(_SFPBActionItem *)arg1;
- (void)setPreview:(_SFPBURL *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
