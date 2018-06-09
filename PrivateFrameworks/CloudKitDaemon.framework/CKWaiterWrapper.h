/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKWaiterWrapper : NSObject {
    NSObject<OS_os_activity> * _activity;
    id /* block */  _completionHandler;
    <CKDZoneGatekeeperWaiter> * _waiter;
    NSArray * _zoneIDs;
}

@property (nonatomic, retain) NSObject<OS_os_activity> *activity;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) <CKDZoneGatekeeperWaiter> *waiter;
@property (nonatomic, retain) NSArray *zoneIDs;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)activity;
- (id /* block */)completionHandler;
- (id)description;
- (void)setActivity:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setWaiter:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)waiter;
- (id)zoneIDs;

@end
