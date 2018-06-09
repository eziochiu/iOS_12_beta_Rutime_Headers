/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel> {
    TSUZipFileWriter * _archiveWriter;
    bool  _isClosed;
    NSObject<OS_dispatch_queue> * _writerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (void)flushWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithArchiveWriter:(id)arg1;
- (bool)isValid;
- (void)setLowWater:(unsigned long long)arg1;
- (void)writeData:(id)arg1 handler:(id /* block */)arg2;

@end
