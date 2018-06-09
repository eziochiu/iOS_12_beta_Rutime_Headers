/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYStoreDeltaSessionOwner : SYStoreSessionOwner {
    NSArray * _changes;
    unsigned long long  _currentIdx;
}

@property (nonatomic, readonly) unsigned long long changeCount;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)initWithChanges:(id)arg1;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;

@end
