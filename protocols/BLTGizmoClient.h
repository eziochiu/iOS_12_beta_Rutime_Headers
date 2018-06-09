/* made by EzioChiu.
 */

@protocol BLTGizmoClient <NSObject>

@required

- (void)addBulletin:(BLTPBBulletin *)arg1 playLightsAndSirens:(bool)arg2 updateType:(unsigned long long)arg3 transmissionDate:(NSDate *)arg4 receptionDate:(NSDate *)arg5;
- (void)addBulletinSummary:(BLTPBBulletinSummary *)arg1;
- (void)cancelBulletinWithPublisherMatchID:(NSString *)arg1 universalSectionID:(NSString *)arg2 feed:(unsigned long long)arg3 transmissionDate:(NSDate *)arg4 receptionDate:(NSDate *)arg5;
- (void)removeBulletinWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;
- (void)updateBulletinList:(BLTPBFullBulletinList *)arg1;

@end
