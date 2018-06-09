/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTSUBufferedReadChannel : NSObject <MDLTSUReadChannel> {
    NSArray * _blockInfos;
    NSObject<OS_dispatch_data> * _currentStreamOutputData;
    bool  _isStreamOutputDone;
    NSObject<OS_dispatch_queue> * _readQueue;
    unsigned long long  _sourceLength;
    long long  _sourceOffset;
    unsigned long long  _sourceReadBufferSize;
    <MDLTSUReadChannel> * _sourceReadChannel;
    NSError * _sourceReadChannelError;
    unsigned long long  _streamOutputLength;
    long long  _streamOutputOffset;
    unsigned long long  _streamOutputOutstandingLength;
    <MDLTSUStreamReadChannel> * _streamReadChannel;
    id /* block */  _streamReadChannelBlock;
    id /* block */  _streamReadChannelSourceHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)_closeStreamReadChannel;
- (id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(bool*)arg3;
- (void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)_resetStreamReadChannelIfNeededForOffset:(long long)arg1 length:(unsigned long long)arg2;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(id /* block */)arg3;
- (id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 blockInfos:(id)arg3 streamReadChannelBlock:(id /* block */)arg4;
- (bool)isValid;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)readWithHandler:(id /* block */)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)setStreamReadChannelSourceHandler:(id /* block */)arg1;

@end
