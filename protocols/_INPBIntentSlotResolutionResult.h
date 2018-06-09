/* made by EzioChiu.
 */

@protocol _INPBIntentSlotResolutionResult <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (bool)hasPayloadConfirmation;
- (bool)hasPayloadNeedsDisambiguation;
- (bool)hasPayloadNeedsValue;
- (bool)hasPayloadSuccess;
- (bool)hasPayloadUnsupported;
- (bool)hasType;
- (_INPBPayloadConfirmation *)payloadConfirmation;
- (_INPBPayloadNeedsDisambiguation *)payloadNeedsDisambiguation;
- (_INPBPayloadNeedsValue *)payloadNeedsValue;
- (_INPBPayloadSuccess *)payloadSuccess;
- (_INPBPayloadUnsupported *)payloadUnsupported;
- (void)setHasType:(bool)arg1;
- (void)setPayloadConfirmation:(_INPBPayloadConfirmation *)arg1;
- (void)setPayloadNeedsDisambiguation:(_INPBPayloadNeedsDisambiguation *)arg1;
- (void)setPayloadNeedsValue:(_INPBPayloadNeedsValue *)arg1;
- (void)setPayloadSuccess:(_INPBPayloadSuccess *)arg1;
- (void)setPayloadUnsupported:(_INPBPayloadUnsupported *)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;

@end
