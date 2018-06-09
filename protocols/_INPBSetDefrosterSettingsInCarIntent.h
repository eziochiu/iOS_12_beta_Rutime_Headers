/* made by EzioChiu.
 */

@protocol _INPBSetDefrosterSettingsInCarIntent <NSObject>

@required

- (int)StringAsDefroster:(NSString *)arg1;
- (int)defroster;
- (NSString *)defrosterAsString:(int)arg1;
- (bool)enable;
- (bool)hasDefroster;
- (bool)hasEnable;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setDefroster:(int)arg1;
- (void)setEnable:(bool)arg1;
- (void)setHasDefroster:(bool)arg1;
- (void)setHasEnable:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
