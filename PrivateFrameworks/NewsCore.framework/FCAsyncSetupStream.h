/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAsyncSetupStream : NSObject <FCStreaming> {
    <FCStreaming> * _childStream;
    id /* block */  _setupBlock;
    bool  _setupComplete;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithAsyncSetupBlock:(id /* block */)arg1;
- (bool)isFinished;

@end
