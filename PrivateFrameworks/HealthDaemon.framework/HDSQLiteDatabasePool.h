/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject> {
    NSMutableSet * _cache;
    NSCondition * _cacheCondition;
    unsigned long long  _cacheGeneration;
    long long  _cacheSize;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _checkoutLock;
    NSMapTable * _checkoutMap;
    long long  _concurrentReaderLimit;
    int  _count;
    <HDSQLiteDatabasePoolDelegate> * _delegate;
    NSObject<OS_dispatch_semaphore> * _readerSemaphore;
    NSObject<OS_dispatch_semaphore> * _writerSemaphore;
}

@property (readonly) long long cacheSize;
@property (readonly) long long concurrentReaderLimit;
@property (readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property <HDSQLiteDatabasePoolDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDatabaseWrapperToCheckoutMap:(id)arg1;
- (void)_didFlushDatabases:(id)arg1;
- (id)_removeDatabaseFromCheckoutMap:(id)arg1;
- (id)_semaphoreForCheckOutOptions:(unsigned long long)arg1;
- (long long)cacheSize;
- (void)checkInDatabase:(id)arg1 flushImmediately:(bool)arg2;
- (id)checkOutDatabaseWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (long long)concurrentReaderLimit;
- (long long)count;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticDescription;
- (void)flush;
- (id)initWithConcurrentReaderLimit:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end
