/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTaskServerRegistry : NSObject {
    HDDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _taskServerClassesByTaskIdentifier;
    NSMapTable * _taskServersByUUID;
}

@property (nonatomic, readonly) HDDaemon *daemon;

- (void).cxx_destruct;
- (bool)_queue_registerTaskServerClass:(Class)arg1 error:(id*)arg2;
- (id)createTaskServerEndpointForIdentifier:(id)arg1 taskUUID:(id)arg2 configuration:(id)arg3 client:(id)arg4 profile:(id)arg5 delegate:(id)arg6 error:(id*)arg7;
- (id)daemon;
- (void)didCreateTaskServer:(id)arg1;
- (id)initWithDaemon:(id)arg1;
- (bool)registerTaskServerClass:(Class)arg1 error:(id*)arg2;
- (bool)registerTaskServerClasses:(id)arg1 error:(id*)arg2;
- (bool)registerTaskServerClassesWithProvider:(id)arg1 error:(id*)arg2;
- (id)taskServerForTaskUUID:(id)arg1;

@end
