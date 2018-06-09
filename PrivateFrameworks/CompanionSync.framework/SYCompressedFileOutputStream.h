/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYCompressedFileOutputStream : NSOutputStream <NSStreamDelegate, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamProgress, SYStreamThroughputCounter, _SYStreamRunLoopSourceHandler> {
    bool  _append;
    unsigned long long  _byteCount;
    int  _class;
    int  _fd;
    struct gzFile_s { unsigned int x1; char *x2; long long x3; } * _file;
    _SYStreamGuts * _internal;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    long long  _level;
    id /* block */  _onBytesAvailable;
    id /* block */  _onClose;
    id /* block */  _onEndOfFile;
    id /* block */  _onError;
    id /* block */  _onOpenComplete;
    id /* block */  _onSpaceAvailable;
    NSProgress * _progress;
    NSURL * _url;
}

@property (nonatomic, readonly) unsigned long long bytesThroughput;
@property (nonatomic) long long compressionLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_internal, nonatomic, readonly) _SYStreamGuts *internal;
@property (nonatomic, copy) id /* block */ onBytesAvailable;
@property (nonatomic, copy) id /* block */ onClose;
@property (nonatomic, copy) id /* block */ onEndOfFile;
@property (nonatomic, copy) id /* block */ onError;
@property (nonatomic, copy) id /* block */ onOpenComplete;
@property (nonatomic, copy) id /* block */ onSpaceAvailable;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(id /* block */)arg2;
- (id)_internal;
- (void)_postEventToDelegate:(unsigned long long)arg1;
- (unsigned long long)bytesThroughput;
- (void)close;
- (long long)compressionLevel;
- (void)dealloc;
- (id)delegate;
- (bool)hasSpaceAvailable;
- (id)initToCompressedFileAtURL:(id)arg1 shouldAppend:(bool)arg2;
- (id)initToFileAtPath:(id)arg1 append:(bool)arg2;
- (id)initWithURL:(id)arg1 append:(bool)arg2;
- (id /* block */)onBytesAvailable;
- (id /* block */)onClose;
- (id /* block */)onEndOfFile;
- (id /* block */)onError;
- (id /* block */)onOpenComplete;
- (id /* block */)onSpaceAvailable;
- (void)open;
- (id)progress;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setCompressionLevel:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOnBytesAvailable:(id /* block */)arg1;
- (void)setOnClose:(id /* block */)arg1;
- (void)setOnEndOfFile:(id /* block */)arg1;
- (void)setOnError:(id /* block */)arg1;
- (void)setOnOpenComplete:(id /* block */)arg1;
- (void)setOnSpaceAvailable:(id /* block */)arg1;
- (void)setProgress:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
