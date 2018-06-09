/* made by EzioChiu.
 */

@protocol _CPSearchViewAppearFeedback <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isOnLockScreen;
- (bool)isOverApp;
- (NSData *)jsonData;
- (bool)readerTextAvailable;
- (void)setIsOnLockScreen:(bool)arg1;
- (void)setIsOverApp:(bool)arg1;
- (void)setReaderTextAvailable:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setViewAppearEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)viewAppearEvent;

@end
