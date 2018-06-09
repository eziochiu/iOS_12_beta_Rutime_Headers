/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTPromiseSeal : NSObject {
    CUTPromise * _promise;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CUTPromise *promise;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)fulfillWithValue:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)promise;
- (id)queue;
- (void)setPromise:(id)arg1;
- (void)setQueue:(id)arg1;

@end
