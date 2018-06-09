/* made by EzioChiu.
 */

@protocol BLTPingService <NSObject>

@required

- (void)getWillNanoPresentNotificationForSectionID:(void *)arg1 subsectionIDs:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)sendBulletinSummary:(BLTPBBulletinSummary *)arg1;
- (void)subscribeToSectionID:(NSString *)arg1 forFullBulletins:(bool)arg2 withAck:(bool)arg3;
- (void)subscribeWithMachServiceName:(NSString *)arg1;
- (void)unsubscribeFromSectionID:(NSString *)arg1;

@end
