/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface __HMFOSUnfairLock : HMFUnfairLock {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internal;
    unsigned int  _internalOptions;
}

- (id)initWithOptions:(unsigned long long)arg1;
- (void)lock;
- (void)unlock;

@end
