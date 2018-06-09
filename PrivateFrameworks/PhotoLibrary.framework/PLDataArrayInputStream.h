/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLDataArrayInputStream : NSInputStream {
    NSMutableData * _bodyData;
    int (* _clientCallback;
    struct { 
        long long version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    }  _clientContext;
    unsigned long long  _currentIndex;
    unsigned long long  _currentLength;
    unsigned long long  _currentOffset;
    NSArray * _dataArray;
    unsigned long long  _dataCount;
    unsigned long long  _dataLength;
    unsigned long long  _dataOffset;
    id  _delegate;
    bool  _openEventSent;
    <PLDataArrayInputStreamProgressDelegate> * _progressDelegate;
    struct __CFRunLoopSource { } * _rls;
    unsigned long long  _streamStatus;
}

@property (nonatomic) <PLDataArrayInputStreamProgressDelegate> *progressDelegate;

- (void)_scheduleCallback;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_scheduleProgressUpdate;
- (bool)_setCFClientFlags:(unsigned long long)arg1 callback:(int (*)arg2 context:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)_streamEventTrigger;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_updateProgress;
- (unsigned long long)bytesRead;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithDataArray:(id)arg1;
- (void)open;
- (id)progressDelegate;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setProgressDelegate:(id)arg1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (unsigned long long)totalBytes;

@end
