/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCStreamingResults : NSObject {
    NSHashTable * _observers;
    NSMutableArray * _results;
    FCAsyncSerialQueue * _serialQueue;
    <FCStreaming> * _underlyingStream;
}

@property (nonatomic, readonly) unsigned long long count;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSMutableArray *results;
@property (nonatomic, readonly) FCAsyncSerialQueue *serialQueue;
@property (nonatomic, readonly) <FCStreaming> *underlyingStream;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)array;
- (unsigned long long)count;
- (void)fetchAllObjectsWithBatchSize:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithResults:(id)arg1 followedByStream:(id)arg2;
- (id)initWithStream:(id)arg1;
- (bool)isFinished;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)observers;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)removeObserver:(id)arg1;
- (id)results;
- (id)serialQueue;
- (void)setObservers:(id)arg1;
- (id)underlyingStream;

@end
