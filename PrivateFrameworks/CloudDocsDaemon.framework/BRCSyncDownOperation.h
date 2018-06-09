/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    unsigned long long  _editedAndDeletedRecordsCount;
    BRCServerZone * _serverZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performAfterFetchingRecordChanges:(id /* block */)arg1;
- (void)_startCreateZoneAndSubscriptionAndSyncDown;
- (void)_startSyncDown;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (bool)handleZoneNotFoundIfSyncingDownForTheFirstTime:(id)arg1;
- (id)initWithServerZone:(id)arg1;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
