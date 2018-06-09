/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRCarKitServiceClient : NSObject {
    NSMutableArray * _outstandingSemaphores;
    <CRCarKitService> * _service;
    NSXPCConnection * _serviceConnection;
}

@property (nonatomic, retain) NSMutableArray *outstandingSemaphores;
@property (nonatomic, retain) <CRCarKitService> *service;
@property (nonatomic, retain) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)_blockOnServiceSemaphore:(id)arg1;
- (void)_releaseAllServiceSemaphores;
- (id)_serviceSemaphore;
- (void)dealloc;
- (id)init;
- (id)outstandingSemaphores;
- (void)performServiceCallBlock:(id /* block */)arg1;
- (id)service;
- (id)serviceConnection;
- (void)setOutstandingSemaphores:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceConnection:(id)arg1;

@end
