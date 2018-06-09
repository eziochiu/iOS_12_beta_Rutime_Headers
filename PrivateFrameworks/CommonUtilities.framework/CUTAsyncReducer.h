/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTAsyncReducer : NSObject {
    id /* block */  _completionBlock;
    NSArray * _input;
    id /* block */  _reducerBlock;
    CUTResult * _result;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSArray *input;
@property (nonatomic, copy) id /* block */ reducerBlock;
@property (nonatomic, retain) CUTResult *result;

- (void).cxx_destruct;
- (void)_completeWithResult:(id)arg1;
- (void)_reduceWithPending:(id)arg1 visited:(id)arg2 currentResult:(id)arg3 completion:(id /* block */)arg4;
- (id /* block */)completionBlock;
- (id)initWithInput:(id)arg1 initialValue:(id)arg2;
- (id)input;
- (void)reduceWithCompletion:(id /* block */)arg1;
- (id /* block */)reducerBlock;
- (id)result;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setInput:(id)arg1;
- (void)setReducerBlock:(id /* block */)arg1;
- (void)setResult:(id)arg1;

@end
