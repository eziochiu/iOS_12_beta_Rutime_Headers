/* made by EzioChiu.
 */

@protocol DNDSSyncServiceUpdateListener <NSObject>

@required

- (void)syncService:(id <DNDSSyncService>)arg1 didReceiveRecord:(id <DNDSSyncRecord>)arg2 sourceIdentifier:(NSString *)arg3;

@end
