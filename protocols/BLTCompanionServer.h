/* made by EzioChiu.
 */

@protocol BLTCompanionServer <NSObject>

@required

- (void)handleAction:(BLTActionInfo *)arg1;
- (void)handleDidPlayLightsAndSirens:(bool)arg1 forBulletin:(NSString *)arg2 inPhoneSection:(NSString *)arg3 transmissionDate:(NSDate *)arg4 receptionDate:(NSDate *)arg5 replyToken:(NSString *)arg6;
- (void)removeBulletinWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;
- (bool)shouldSuppressLightsAndSirensNow;
- (void)willSendLightsAndSirensWithPublisherBulletinID:(void *)arg1 recordID:(void *)arg2 inPhoneSection:(void *)arg3 systemApp:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, void*

@end
