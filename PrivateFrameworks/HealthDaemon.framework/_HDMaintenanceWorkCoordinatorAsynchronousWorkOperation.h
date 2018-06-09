/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDMaintenanceWorkCoordinatorAsynchronousWorkOperation : HDMaintenanceOperation {
    id /* block */  _operationBlock;
    bool  executing;
    bool  finished;
}

@property (getter=isExecuting) bool executing;
@property (getter=isFinished) bool finished;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 operationBlock:(id /* block */)arg2;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)start;

@end
