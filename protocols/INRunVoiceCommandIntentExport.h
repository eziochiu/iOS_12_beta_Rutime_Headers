/* made by EzioChiu.
 */

@protocol INRunVoiceCommandIntentExport <NSObject, JSExport>

@required

- (id)init;
- (INVoiceCommandDeviceInformation *)originDevice;
- (void)setOriginDevice:(INVoiceCommandDeviceInformation *)arg1;
- (void)setVoiceCommand:(INSpeakableString *)arg1;
- (INSpeakableString *)voiceCommand;

@end
