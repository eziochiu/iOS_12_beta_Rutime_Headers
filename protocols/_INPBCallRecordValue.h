/* made by EzioChiu.
 */

@protocol _INPBCallRecordValue <NSObject>

@required

- (int)StringAsCallCapability:(NSString *)arg1;
- (int)StringAsCallType:(NSString *)arg1;
- (int)callCapability;
- (NSString *)callCapabilityAsString:(int)arg1;
- (_INPBCallMetrics *)callMetrics;
- (int)callType;
- (NSString *)callTypeAsString:(int)arg1;
- (_INPBContactValue *)caller;
- (_INPBDateTime *)dateCreated;
- (bool)hasCallCapability;
- (bool)hasCallMetrics;
- (bool)hasCallType;
- (bool)hasCaller;
- (bool)hasDateCreated;
- (bool)hasIdentifier;
- (bool)hasUnseen;
- (NSString *)identifier;
- (void)setCallCapability:(int)arg1;
- (void)setCallMetrics:(_INPBCallMetrics *)arg1;
- (void)setCallType:(int)arg1;
- (void)setCaller:(_INPBContactValue *)arg1;
- (void)setDateCreated:(_INPBDateTime *)arg1;
- (void)setHasCallCapability:(bool)arg1;
- (void)setHasCallType:(bool)arg1;
- (void)setHasUnseen:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setUnseen:(bool)arg1;
- (bool)unseen;

@end
