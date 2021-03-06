/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYCountedSemaphore : NSObject {
    int  _count;
    bool  _invalidated;
    unsigned int  _sem_port;
    int  _signals;
}

- (void)_ensureSemaphore;
- (void)_signalSemaphore;
- (bool)_waitSemaphoreWithTimeout:(double)arg1;
- (id)init;
- (id)initWithCount:(long long)arg1;
- (void)invalidate;
- (void)signal;
- (bool)waitWithTimeout:(double)arg1;

@end
