/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTaskServerEndpoint : NSObject <HDXPCListenerDelegate> {
    HKTaskConfiguration * _configuration;
    <HDTaskServerDelegate> * _delegate;
    HDXPCListener * _listener;
    HDProfile * _profile;
    <HDTaskServer> * _taskServer;
    Class  _taskServerClass;
    NSUUID * _taskUUID;
}

@property (nonatomic, readonly, copy) HKTaskConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDTaskServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDXPCListener *listener;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HDTaskServer> *taskServer;
@property (nonatomic, readonly) Class taskServerClass;
@property (nonatomic, readonly, copy) NSUUID *taskUUID;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)initWithTaskServerClass:(Class)arg1 taskUUID:(id)arg2 configuration:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (void)invalidate;
- (id)listener;
- (id)listenerEndpoint;
- (id)profile;
- (void)setListener:(id)arg1;
- (id)taskServer;
- (Class)taskServerClass;
- (id)taskUUID;

@end
