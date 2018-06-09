/* made by EzioChiu.
 */

@protocol INStartAudioCallIntentExport <NSObject, JSExport>

@required

- (long long)audioRoute;
- (NSArray *)contacts;
- (long long)destinationType;
- (id)init;
- (long long)preferredCallProvider;
- (void)setAudioRoute:(long long)arg1;
- (void)setContacts:(NSArray *)arg1;
- (void)setDestinationType:(long long)arg1;
- (void)setPreferredCallProvider:(long long)arg1;
- (void)setTTYType:(long long)arg1;
- (long long)ttyType;

@end
