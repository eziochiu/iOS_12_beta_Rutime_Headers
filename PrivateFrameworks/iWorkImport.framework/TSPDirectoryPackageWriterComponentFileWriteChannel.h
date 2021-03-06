/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel> {
    NSURL * _URL;
    id /* block */  _handler;
    bool  _isClosed;
    TSUFileIOChannel * _writeChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)arg1 handler:(id /* block */)arg2;
- (void)writeData:(id)arg1;

@end
