/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFileCoordinatedTodayDropboxTransaction : NSObject <NSCopying> {
    NSSet * _deletedArticleIDs;
    NSArray * _insertedOrUpdatedHistoryItems;
    unsigned long long  _transactionType;
}

@property (nonatomic, copy) NSSet *deletedArticleIDs;
@property (nonatomic, copy) NSArray *insertedOrUpdatedHistoryItems;
@property (nonatomic) unsigned long long transactionType;

+ (void)_mergeItem:(id)arg1 intoItem:(id)arg2;
+ (id)collapsedTransactionOfTransactions:(id)arg1;
+ (id)transactionOfIdentity;
+ (id)transactionToClearSeenArticles;
+ (id)transactionToMutateSeenArticlesWithInsertedOrUpdatedHistoryItems:(id)arg1 deletedArticleIDs:(id)arg2;

- (void).cxx_destruct;
- (void)_mergeItem:(id)arg1 intoItem:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedArticleIDs;
- (id)init;
- (id)initWithTransactionType:(unsigned long long)arg1 insertedOrUpdatedHistoryItems:(id)arg2 deletedArticleIDs:(id)arg3;
- (id)insertedOrUpdatedHistoryItems;
- (void)setDeletedArticleIDs:(id)arg1;
- (void)setInsertedOrUpdatedHistoryItems:(id)arg1;
- (void)setTransactionType:(unsigned long long)arg1;
- (id /* block */)todayPrivateDataAccessor;
- (unsigned long long)transactionType;

@end
