/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUWidthLimitedQueue : NSObject {
    int  mLimit;
    NSObject<OS_dispatch_queue> * mManagerQueue;
    int  mReaderCount;
    NSObject<OS_dispatch_queue> * mTargetQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  mUnfairLock;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithLimit:(unsigned long long)arg1;
- (id)initWithLimit:(unsigned long long)arg1 name:(id)arg2;
- (void)performAsync:(id /* block */)arg1;
- (void)performSync:(id /* block */)arg1;

@end
