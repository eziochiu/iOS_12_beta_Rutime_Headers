/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEReachabilityScanTuple : HMFObject {
    id /* block */  _completion;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)reachabilityScanTupleWithCompletion:(id /* block */)arg1 workQueue:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)identifier;
- (id)queue;
- (void)setCompletion:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;

@end
