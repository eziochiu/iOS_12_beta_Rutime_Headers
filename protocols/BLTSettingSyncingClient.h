/* made by EzioChiu.
 */

@protocol BLTSettingSyncingClient <BLTSettingSyncing>

@required

- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(NSString *)arg2 mirror:(bool)arg3 fromRemote:(bool)arg4;

@end
