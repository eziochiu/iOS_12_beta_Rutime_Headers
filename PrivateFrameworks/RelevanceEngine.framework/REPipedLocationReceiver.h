/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REPipedLocationReceiver : RESingleton <REPipedLocationDonor> {
    NSXPCConnection * _connection;
    long long  _connectionWindowRetainCount;
    CLLocation * _location;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_clearConnection;
- (void)_queue_setLocation:(id)arg1;
- (void)_queue_setupConnection;
- (id)init;
- (id)location;
- (id)queue;
- (void)setLocation:(id)arg1;

@end
