/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMNetworkAvailability : NSObject {
    id /* block */  _completionBlock;
    void * _context;
    unsigned long long  _flags;
    NSString * _guid;
    unsigned long long  _options;
    double  _startTime;
    double  _timeout;
    NSTimer * _timer;
    double  _wifiTimeout;
}

@property (nonatomic) void*context;

- (void)_cancel;
- (void)_setTimer;
- (void)_timerHit:(id)arg1;
- (void)cancel;
- (void*)context;
- (void)dealloc;
- (id)initWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 timeout:(double)arg3 wifiTimeout:(double)arg4 completionBlock:(id /* block */)arg5;
- (id)initWithFlags:(unsigned long long)arg1 timeout:(double)arg2 wifiTimeout:(double)arg3 completionBlock:(id /* block */)arg4;
- (void)setContext:(void*)arg1;
- (void)start;

@end
