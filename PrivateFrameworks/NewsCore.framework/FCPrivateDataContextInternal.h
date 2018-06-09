/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateDataContextInternal : NSObject <FCPrivateDataContextInternal> {
    <FCAppActivityMonitor> * _appActivityMonitor;
    FCCKPrivateDatabase * _privateDatabase;
    FCCKRecordZoneManager * _recordZoneManager;
}

@property (nonatomic, retain) <FCAppActivityMonitor> *appActivityMonitor;
@property (nonatomic, readonly) FCCKRecordZone *channelMembershipsRecordZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCCKPrivateDatabase *privateDatabase;
@property (nonatomic, readonly) FCCKRecordZone *readingHistoryRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *readingListRecordZone;
@property (nonatomic, retain) FCCKRecordZoneManager *recordZoneManager;
@property (nonatomic, readonly) FCCKRecordZone *sensitiveSubscriptionsRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *subscriptionsRecordZone;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FCCKRecordZone *userInfoRecordZone;

- (void).cxx_destruct;
- (id)appActivityMonitor;
- (id)channelMembershipsRecordZone;
- (id)init;
- (void)prepareRecordZonesForUseWithCompletionHandler:(id /* block */)arg1;
- (id)privateDatabase;
- (id)readingHistoryRecordZone;
- (id)readingListRecordZone;
- (id)recordZoneManager;
- (id)recordZoneWithName:(id)arg1;
- (id)sensitiveSubscriptionsRecordZone;
- (void)setAppActivityMonitor:(id)arg1;
- (void)setPrivateDatabase:(id)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (id)subscriptionsRecordZone;
- (id)userInfoRecordZone;

@end
