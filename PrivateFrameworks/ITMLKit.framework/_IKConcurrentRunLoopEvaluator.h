/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface _IKConcurrentRunLoopEvaluator : NSObject <_IKConcurrentlyEvaluating> {
    NSMutableDictionary * _fetchers;
    NSTimer * _idleTimer;
    NSMutableArray * _orderedKeys;
    NSRunLoop * _runloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchNext:(id)arg1;
- (void)_insertFetcher:(id /* block */)arg1 forKey:(id)arg2;
- (id /* block */)_removeFetcherForKey:(id)arg1;
- (id /* block */)addEvaluationBlock:(id /* block */)arg1 forKey:(id)arg2;
- (id)initWithRunLoop:(id)arg1;

@end
