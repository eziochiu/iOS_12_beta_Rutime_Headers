/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTransactionCommitCoordinator : NSObject {
    NSMutableArray * _commitHandlers;
}

+ (id)_sharedInstance;
+ (bool)addImplicitTransactionCommitHandler:(id /* block */)arg1;
+ (void)flushCommitHandlers;

- (void).cxx_destruct;
- (bool)_addImplicitTransactionCommitHandler:(id /* block */)arg1;
- (void)_registerCATransactionCommitHandler;
- (id)init;

@end
