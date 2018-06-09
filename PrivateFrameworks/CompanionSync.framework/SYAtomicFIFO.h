/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYAtomicFIFO : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _store;
}

@property (readonly) id head;
@property (readonly) id tail;

- (void).cxx_destruct;
- (id)dequeue;
- (id)dequeueUntil:(id /* block */)arg1;
- (void)enqueue:(id)arg1;
- (id)head;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeAllObjects;
- (id)tail;

@end
