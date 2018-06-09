/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVBufferedOutputStream : NSOutputStream {
    <NSStreamDelegate> * _delegate;
    NSMutableDictionary * _properties;
    NSRunLoop * _scheduledRunLoop;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned long long  _status;
}

- (void).cxx_destruct;
- (void)_init;
- (void)close;
- (id)delegate;
- (id)init;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToFileAtPath:(id)arg1 append:(bool)arg2;
- (id)initToMemory;
- (id)initWithURL:(id)arg1 append:(bool)arg2;
- (void)notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end
