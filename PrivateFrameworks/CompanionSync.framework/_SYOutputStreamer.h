/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYOutputStreamer : NSObject <NSStreamDelegate, _SYStreamPropertyProxying> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _hasWrittenData;
    NSMutableArray * _items;
    id /* block */  _onComplete;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
    SYCompressedFileOutputStream * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasWrittenData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeAllItemsWithError:(id)arg1;
- (id /* block */)_getCompletionBlock;
- (void)_tryToSendData;
- (void)close;
- (bool)hasWrittenData;
- (id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2;
- (void)setStreamProperty:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamPropertyForKey:(id)arg1;
- (void)whenComplete:(id /* block */)arg1;
- (void)writeData:(id)arg1 completion:(id /* block */)arg2;

@end
