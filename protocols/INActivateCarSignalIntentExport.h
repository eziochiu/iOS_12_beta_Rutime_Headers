/* made by EzioChiu.
 */

@protocol INActivateCarSignalIntentExport <NSObject, JSExport>

@required

- (INSpeakableString *)carName;
- (id)init;
- (void)setCarName:(INSpeakableString *)arg1;
- (void)setSignals:(unsigned long long)arg1;
- (unsigned long long)signals;

@end
