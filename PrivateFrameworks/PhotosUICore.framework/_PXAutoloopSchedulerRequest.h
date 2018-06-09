/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXAutoloopSchedulerRequest : NSObject {
    id /* block */  _completionHandler;
    PXAutoloopRequest * _request;
    bool  _shouldSimulateRequest;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) PXAutoloopRequest *request;
@property (nonatomic) bool shouldSimulateRequest;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)request;
- (void)setShouldSimulateRequest:(bool)arg1;
- (bool)shouldSimulateRequest;
- (void)start;

@end
