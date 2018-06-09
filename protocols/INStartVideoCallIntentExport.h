/* made by EzioChiu.
 */

@protocol INStartVideoCallIntentExport <NSObject, JSExport>

@required

- (long long)audioRoute;
- (NSArray *)contacts;
- (id)init;
- (void)setAudioRoute:(long long)arg1;
- (void)setContacts:(NSArray *)arg1;

@end
