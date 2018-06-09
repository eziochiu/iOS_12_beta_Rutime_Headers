/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSLazyPromise : AMSPromise {
    id /* block */  _block;
    bool  _executedBlock;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) bool executedBlock;

- (void).cxx_destruct;
- (bool)_runBlock;
- (void)addErrorBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id /* block */)block;
- (bool)executedBlock;
- (id)initWithBlock:(id /* block */)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithError:(id*)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (void)setBlock:(id /* block */)arg1;
- (void)setExecutedBlock:(bool)arg1;

@end
