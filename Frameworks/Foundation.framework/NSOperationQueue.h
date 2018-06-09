/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperationQueue : NSObject {
    id  _private;
    void * _reserved;
}

@property long long maxConcurrentOperationCount;
@property (copy) NSString *name;
@property (readonly) unsigned long long operationCount;
@property (readonly, copy) NSArray *operations;
@property long long qualityOfService;
@property (getter=isSuspended) bool suspended;
@property (nonatomic, readonly) bool tsu_isCurrentQueue;
@property NSObject<OS_dispatch_queue> *underlyingQueue;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentQueue;
+ (id)mainQueue;

- (id)__graphDescription;
- (void)_fc_addUncancellableOperationForReactorID:(id)arg1 block:(id /* block */)arg2;
- (void)_fc_addUncancellableOperationWithBlock:(id /* block */)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(id /* block */)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isSuspended;
- (long long)maxConcurrentOperationCount;
- (id)name;
- (unsigned long long)operationCount;
- (id)operations;
- (bool)overcommitsOperations;
- (long long)qualityOfService;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOvercommitsOperations:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setUnderlyingQueue:(id)arg1;
- (id)underlyingQueue;
- (void)waitUntilAllOperationsAreFinished;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (id)adSessionSharedDelegateQueue;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)aa_operationQueueWithUnderlyingQueue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (void)cancelAllOperationsWithError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_ckRequestOperationQueue;
+ (id)fc_sharedConcurrentQueue;
+ (id)fc_sharedSerialQueue;

- (void)fc_addAsyncOperationWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (bool)containsOperationToDeleteRecordID:(id)arg1;
- (bool)containsOperationToFetchRecordID:(id)arg1;
- (bool)containsOperationToSaveRecordID:(id)arg1;
- (id)existingOperationToDeleteRecordID:(id)arg1;
- (id)existingOperationToFetchRecordID:(id)arg1;
- (id)existingOperationToSaveRecordID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_newSerialOperationQueueWithName:(id)arg1;

- (bool)tsu_isCurrentQueue;
- (void)tsu_performBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (void)rc_addAsyncOperationWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI

- (void)logStateOperationCountGreaterThan:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

+ (id)wlkDefaultConcurrentQueue;
+ (id)wlkDefaultQueue;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)ic_sharedRequestOperationQueueWithQualityOfService:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsu_newSerialOperationQueueWithName:(id)arg1;
+ (id)tsu_newSerialOperationQueueWithName:(id)arg1 attribute:(id)arg2;

- (bool)tsu_isCurrentQueue;
- (void)tsu_performBlock:(id /* block */)arg1;

@end
