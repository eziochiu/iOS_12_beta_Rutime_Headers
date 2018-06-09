/* made by EzioChiu.
 */

@protocol CRKCloudZoneSyncDelegate

@required

- (void)didReceiveCloudError:(NSError *)arg1 fromZoneSyncEngine:(CRKCloudZoneSyncEngine *)arg2;
- (void)processRemoteDelta:(CRKCloudRemoteDelta *)arg1 fromZoneSyncEngine:(CRKCloudZoneSyncEngine *)arg2;

@end
