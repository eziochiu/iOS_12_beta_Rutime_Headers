/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDEventIndexerContext : NSObject {
    unsigned long long  _batchSize;
    _CDEventIndexerBookmark * _bookmark;
    id /* block */  _completion;
    NSDate * _indexDate;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) _CDEventIndexerBookmark *bookmark;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) NSDate *indexDate;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)bookmark;
- (id /* block */)completion;
- (id)indexDate;
- (id)init;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setBookmark:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
