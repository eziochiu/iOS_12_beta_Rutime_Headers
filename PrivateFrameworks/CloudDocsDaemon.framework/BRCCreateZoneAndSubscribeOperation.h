/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCCreateZoneAndSubscribeOperation : _BRCOperation <BRCOperationSubclass> {
    id /* block */  _createZoneAndSubscribeCompletionBlock;
    CKRecordZone * _createdZone;
    bool  _optimisticSubscribe;
    bool  _subscriptionOnly;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, copy) id /* block */ createZoneAndSubscribeCompletionBlock;
@property (nonatomic, readonly) CKRecordZone *createdZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool optimisticSubscribe;
@property (nonatomic) bool subscriptionOnly;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createZoneWithZoneID:(id)arg1;
- (void)_registerSubscriptionForZoneID:(id)arg1 isOptimisticSubscribe:(bool)arg2;
- (id)createActivity;
- (id /* block */)createZoneAndSubscribeCompletionBlock;
- (id)createdZone;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithServerZone:(id)arg1;
- (id)initWithSession:(id)arg1 zoneID:(id)arg2;
- (void)main;
- (bool)optimisticSubscribe;
- (void)setCreateZoneAndSubscribeCompletionBlock:(id /* block */)arg1;
- (void)setOptimisticSubscribe:(bool)arg1;
- (void)setSubscriptionOnly:(bool)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (bool)subscriptionOnly;

@end
