/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate> {
    id /* block */  _batchQueryControllerCreationBlock;
    <TUIDSBatchIDQueryController> * _batchQuerySearchAudioController;
    <TUIDSBatchIDQueryController> * _batchQuerySearchMultiwayController;
    <TUIDSBatchIDQueryController> * _batchQuerySearchVideoController;
    NSMutableDictionary * _idsFaceTimeAudioStatuses;
    NSMutableDictionary * _idsFaceTimeMultiwayStatuses;
    NSMutableDictionary * _idsFaceTimeVideoStatuses;
    <TUIDSIDQueryController> * _queryController;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ batchQueryControllerCreationBlock;
@property (nonatomic, retain) <TUIDSBatchIDQueryController> *batchQuerySearchAudioController;
@property (nonatomic, retain) <TUIDSBatchIDQueryController> *batchQuerySearchMultiwayController;
@property (nonatomic, retain) <TUIDSBatchIDQueryController> *batchQuerySearchVideoController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *idsFaceTimeAudioStatuses;
@property (nonatomic, readonly) NSMutableDictionary *idsFaceTimeMultiwayStatuses;
@property (nonatomic, readonly) NSMutableDictionary *idsFaceTimeVideoStatuses;
@property (nonatomic, readonly) <TUIDSIDQueryController> *queryController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (bool)isAnyDestinationAvailableInDestinations:(id)arg1 usingCache:(id)arg2;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id /* block */)batchQueryControllerCreationBlock;
- (id)batchQuerySearchAudioController;
- (id)batchQuerySearchMultiwayController;
- (id)batchQuerySearchVideoController;
- (void)beginQueryWithDestinations:(id)arg1;
- (void)cancelQueries;
- (void)dealloc;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (id)idsFaceTimeAudioStatuses;
- (id)idsFaceTimeMultiwayStatuses;
- (id)idsFaceTimeVideoStatuses;
- (id)init;
- (id)initWithQueryController:(id)arg1;
- (bool)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)arg1;
- (bool)isFaceTimeAudioAvailableForItem:(id)arg1;
- (bool)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)arg1;
- (bool)isFaceTimeMultiwayAvailableForItem:(id)arg1;
- (bool)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)arg1;
- (bool)isFaceTimeVideoAvailableForItem:(id)arg1;
- (id)queryController;
- (id)queue;
- (void)setBatchQueryControllerCreationBlock:(id /* block */)arg1;
- (void)setBatchQuerySearchAudioController:(id)arg1;
- (void)setBatchQuerySearchMultiwayController:(id)arg1;
- (void)setBatchQuerySearchVideoController:(id)arg1;

@end
