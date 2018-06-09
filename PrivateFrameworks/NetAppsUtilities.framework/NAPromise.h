/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface NAPromise : NSObject <NAPromise> {
    NAFuture * _future;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptor;
@property (readonly) NAFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionHandlerAdapter;
- (id)descriptor;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithNoResult;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)future;
- (id)init;
- (id)initWithFuture:(id)arg1;
- (void)setDescriptor:(id)arg1;

@end
