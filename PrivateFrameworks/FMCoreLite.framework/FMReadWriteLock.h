/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface FMReadWriteLock : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _lock;
    NSString * _lockName;
}

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; } lock;
@property (nonatomic, retain) NSString *lockName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLockName:(id)arg1;
- (struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; })lock;
- (id)lockName;
- (void)performWithReadLock:(id /* block */)arg1;
- (void)performWithWriteLock:(id /* block */)arg1;
- (void)setLock:(struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; })arg1;
- (void)setLockName:(id)arg1;

@end
