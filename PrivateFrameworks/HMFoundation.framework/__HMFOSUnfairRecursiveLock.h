/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface __HMFOSUnfairRecursiveLock : HMFUnfairLock {
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _internal;
    unsigned int  _internalOptions;
}

- (id)initWithOptions:(unsigned long long)arg1;
- (void)lock;
- (void)unlock;

@end
