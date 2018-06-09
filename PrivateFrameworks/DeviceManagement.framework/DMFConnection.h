/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFConnection : NSObject <CATTaskClientDelegate, DMFTransportProvider> {
    bool  _isConnected;
    bool  _isSystemConnection;
    CATOperationQueue * _operationQueue;
    CATTaskClient * _taskClient;
    <DMFTransportProvider> * _transportProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isConnected;
@property (nonatomic) bool isSystemConnection;
@property (nonatomic, readonly) CATOperationQueue *operationQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CATTaskClient *taskClient;
@property (nonatomic, readonly) <DMFTransportProvider> *transportProvider;

// Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement

+ (id)connectionForAppleID:(id)arg1;
+ (id)connectionForUID:(unsigned int)arg1;
+ (id)currentUserConnection;
+ (id)sharedConnection;
+ (id)systemConnection;

- (void).cxx_destruct;
- (void)_operationDidFinish:(id)arg1 completion:(id /* block */)arg2;
- (id)batchOperationToPerformOperations:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidConnect:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)clientDidInvalidate:(id)arg1;
- (void)dealloc;
- (id)initWithTransportProvider:(id)arg1 userInfo:(id)arg2;
- (id)initWithUserInfo:(id)arg1;
- (void)invalidate;
- (bool)isConnected;
- (bool)isSystemConnection;
- (id)makeNewTransport;
- (id)operationQueue;
- (void)performRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)prepareOperationForRequest:(id)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)setIsSystemConnection:(bool)arg1;
- (id)taskClient;
- (id)transportProvider;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM

- (id)performRequest:(id)arg1 error:(id*)arg2;

@end
