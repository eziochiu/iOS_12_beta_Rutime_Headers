/* made by EzioChiu.
 */

@protocol INPlayVoicemailIntentExport <NSObject, JSExport>

@required

- (NSString *)callRecordIdentifier;
- (id)init;
- (void)setCallRecordIdentifier:(NSString *)arg1;

@end
