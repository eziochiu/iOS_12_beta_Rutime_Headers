/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTransformedResultsStream : NSObject <FCStreaming> {
    id /* block */  _asyncTransformBlock;
    <FCStreaming> * _stream;
}

@property (nonatomic, copy) id /* block */ asyncTransformBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <FCStreaming> *stream;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)asyncTransformBlock;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithStream:(id)arg1 asyncTransformBlock:(id /* block */)arg2;
- (bool)isFinished;
- (void)setAsyncTransformBlock:(id /* block */)arg1;
- (void)setStream:(id)arg1;
- (id)stream;

@end
