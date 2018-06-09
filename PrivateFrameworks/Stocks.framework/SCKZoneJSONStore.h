/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface SCKZoneJSONStore : NSObject <SCKZoneStore> {
    NSDate * _lastDirtyDate;
    NSDate * _lastSyncDate;
    NSArray * _pendingCommands;
    SCKZoneSchema * _schema;
    CKServerChangeToken * _serverChangeToken;
    NSArray * _serverRecords;
}

@property (nonatomic, copy) NSDate *lastDirtyDate;
@property (nonatomic, copy) NSDate *lastSyncDate;
@property (nonatomic, readonly, copy) NSArray *pendingCommands;
@property (nonatomic, retain) SCKZoneSchema *schema;
@property (nonatomic, copy) CKServerChangeToken *serverChangeToken;
@property (nonatomic, readonly, copy) NSArray *serverRecords;

- (void).cxx_destruct;
- (void)addPendingCommands:(id)arg1;
- (void)applyServerRecordsDiff:(id)arg1;
- (void)clearPendingCommands;
- (id)initWithSchema:(id)arg1 serverRecords:(id)arg2 lastSyncDate:(id)arg3 lastDirtyDate:(id)arg4 serverChangeToken:(id)arg5 pendingCommands:(id)arg6;
- (id)lastDirtyDate;
- (id)lastSyncDate;
- (id)pendingCommands;
- (id)schema;
- (id)serverChangeToken;
- (id)serverRecords;
- (void)setLastDirtyDate:(id)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setSchema:(id)arg1;
- (void)setServerChangeToken:(id)arg1;

@end
