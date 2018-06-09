/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudEnableRemoteNotificationsOperation : CRKCloudEncapsulatedOperation {
    <APSConnectionDelegate> * _connectionDelegate;
    CKContainer * _container;
    bool  _subscribedToConatiner;
    CKRecordZoneID * _zoneId;
}

@property (nonatomic, readonly) <APSConnectionDelegate> *connectionDelegate;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic) bool subscribedToConatiner;
@property (nonatomic, readonly) CKRecordZoneID *zoneId;

- (void).cxx_destruct;
- (id)connectionDelegate;
- (id)container;
- (void)createPushConnection;
- (void)createPushConnectionOperationDidFinish:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2 container:(id)arg3 zoneId:(id)arg4 subscribedToContainer:(bool)arg5 connectionDelegate:(id)arg6;
- (void)main;
- (void)setSubscribedToConatiner:(bool)arg1;
- (void)subscribeToZoneOperationDidFinish:(id)arg1;
- (bool)subscribedToConatiner;
- (id)zoneId;

@end
