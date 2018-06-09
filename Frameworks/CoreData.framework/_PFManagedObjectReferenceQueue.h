/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFManagedObjectReferenceQueue : NSObject {
    int  _cd_rc;
    NSManagedObjectContext * _context;
    int  _flags;
    int  _processing;
    struct __CFArray { } * _queue;
    struct __CFRunLoopObserver { } * _rlObserver;
    int  _signalRunloop;
    int  _spinLock;
}

- (void)_contextDidDealloc;
- (bool)_isDeallocating;
- (void)_processReferenceQueue:(bool)arg1;
- (bool)_queueBatchForDealloc:(struct __CFArray { }*)arg1;
- (long long)_queueCount;
- (bool)_queueForDealloc:(id)arg1;
- (bool)_signal;
- (bool)_tryRetain;
- (void)_unregisterRunloopObservers;
- (void)dealloc;
- (void)finalize;
- (id)initForContext:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
