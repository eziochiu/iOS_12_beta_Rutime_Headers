/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface __NSOperationQueueInternal : NSObject {
    NSPointerArray * __activeThreads;
    int  __actualMaxNumOps;
    NSObject<OS_dispatch_queue> * __backingQueue;
    NSObject<OS_dispatch_queue> * __dispatch_queue;
    NSOperation * __firstOperation;
    NSOperation * __firstPriOperation;
    NSOperation * __lastOperation;
    NSOperation * __lastPriOperation;
    unsigned char  __mainQ;
    long long  __maxNumOps;
    NSString * __name;
    BOOL  __nameBuffer;
    int  __numExecOps;
    unsigned long long  __operationCount;
    unsigned char  __operationCountObserverCount;
    unsigned char  __operationsObserverCount;
    bool  __overcommit;
    NSOperation * __pendingFirstOperation;
    NSOperation * __pendingLastOperation;
    unsigned char  __propertyQoS;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  __queueLock;
    bool  __suspended;
    unsigned char  __suspendedObserverCount;
}

- (void)dealloc;
- (id)init;

@end
