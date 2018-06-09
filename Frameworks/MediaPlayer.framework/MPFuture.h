/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPFuture : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMapTable * _completionBlocks;
    id  _error;
    NSMapTable * _failureBlocks;
    bool  _finalized;
    bool  _finished;
    id /* block */  _lazyAsyncBlock;
    NSObject<OS_dispatch_queue> * _lazyBlockQueue;
    id /* block */  _lazySyncBlock;
    NSString * _name;
    id  _result;
    NSMapTable * _successBlocks;
}

@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)calloutQueue;
+ (id)futureWithName:(id)arg1 asyncBlock:(id /* block */)arg2;
+ (id)futureWithName:(id)arg1 asyncBlock:(id /* block */)arg2 queue:(id)arg3;
+ (id)futureWithName:(id)arg1 block:(id /* block */)arg2;
+ (id)futureWithName:(id)arg1 block:(id /* block */)arg2 queue:(id)arg3;
+ (id)futureWithName:(id)arg1 error:(id)arg2;
+ (id)futureWithName:(id)arg1 result:(id)arg2;

- (void).cxx_destruct;
- (void)_loadResultIfNeeded;
- (void)_onQueue_finalizeWithResult:(id)arg1 error:(id)arg2;
- (id)description;
- (id)initWithName:(id)arg1;
- (bool)isFinished;
- (id)name;
- (id)onCompletion:(id /* block */)arg1;
- (id)onCompletion:(id /* block */)arg1 queue:(id)arg2;
- (id)onFailure:(id /* block */)arg1;
- (id)onFailure:(id /* block */)arg1 queue:(id)arg2;
- (id)onSuccess:(id /* block */)arg1;
- (id)onSuccess:(id /* block */)arg1 queue:(id)arg2;
- (id)result:(id*)arg1;

@end
