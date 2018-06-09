/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRunNode : NSObject <PXRunNode> {
    NSSet * __dependencySet;
    NSLock * __operationLock;
    <PXRunNodeDelegate> * _delegate;
    NSArray * _dependencies;
    PXRunNodeOperation * _operation;
}

@property (nonatomic, readonly) NSSet *_dependencySet;
@property (nonatomic, readonly) NSLock *_operationLock;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (getter=isWaiting, readonly) bool waiting;

+ (id)_defaultNodeRunnerWithQualityOfService:(long long)arg1;
+ (void)processGraphForRunNode:(id)arg1;
+ (void)processGraphForRunNode:(id)arg1 withQualityOfService:(long long)arg2;

- (void).cxx_destruct;
- (id)_dependencySet;
- (id)_operationLock;
- (void)_performChangesToOperation:(id /* block */)arg1;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (void)complete;
- (void)completeWithError:(id)arg1;
- (id)delegate;
- (id)dependencies;
- (void)didCancel;
- (id)init;
- (id)initWithDependencies:(id)arg1;
- (bool)isCanceled;
- (bool)isComplete;
- (bool)isRunning;
- (bool)isWaiting;
- (id)newOperation;
- (void)run;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;

@end
