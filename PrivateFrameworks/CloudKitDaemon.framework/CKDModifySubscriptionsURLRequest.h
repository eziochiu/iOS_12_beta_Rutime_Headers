/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifySubscriptionsURLRequest : CKDURLRequest {
    NSMutableDictionary * _subscriptionIDByRequestID;
    NSArray * _subscriptionIDsToDelete;
    id /* block */  _subscriptionModifiedBlock;
    NSArray * _subscriptionsToSave;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSMutableDictionary *subscriptionIDByRequestID;
@property (nonatomic, retain) NSArray *subscriptionIDsToDelete;
@property (nonatomic, copy) id /* block */ subscriptionModifiedBlock;
@property (nonatomic, retain) NSArray *subscriptionsToSave;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setSubscriptionIDByRequestID:(id)arg1;
- (void)setSubscriptionIDsToDelete:(id)arg1;
- (void)setSubscriptionModifiedBlock:(id /* block */)arg1;
- (void)setSubscriptionsToSave:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)subscriptionIDByRequestID;
- (id)subscriptionIDsToDelete;
- (id /* block */)subscriptionModifiedBlock;
- (id)subscriptionsToSave;
- (id)zoneID;

@end
