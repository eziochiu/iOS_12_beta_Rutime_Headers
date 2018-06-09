/* made by EzioChiu.
 */

@protocol _INPBRunVoiceCommandIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasOriginDevice;
- (bool)hasVoiceCommand;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBVoiceCommandDeviceInformation *)originDevice;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setOriginDevice:(_INPBVoiceCommandDeviceInformation *)arg1;
- (void)setVoiceCommand:(_INPBDataString *)arg1;
- (_INPBDataString *)voiceCommand;

@end
