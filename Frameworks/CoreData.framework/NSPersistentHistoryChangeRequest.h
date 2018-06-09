/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {
    id * _additionalPrivateIvars;
    struct __persistentHistoryChangeRequestDescriptionFlags { 
        unsigned int _useQueryGenerationToken : 1; 
        unsigned int _deleteHistoryRequest : 1; 
        unsigned int _fetchTransactionForToken : 1; 
        unsigned int _reservedPersistentHistoryChangeRequestDescription : 29; 
    }  _persistentHistoryChangeRequestDescriptionFlags;
    long long  _resultType;
    NSPersistentHistoryToken * _token;
    NSArray * _transactionIDs;
    NSNumber * _transactionNumber;
}

@property long long resultType;
@property (readonly) NSPersistentHistoryToken *token;

+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2;
+ (id)deleteHistoryBeforeDate:(id)arg1;
+ (id)deleteHistoryBeforeToken:(id)arg1;
+ (id)deleteHistoryBeforeTransaction:(id)arg1;
+ (id)fetchHistoryAfterDate:(id)arg1;
+ (id)fetchHistoryAfterToken:(id)arg1;
+ (id)fetchHistoryAfterTransaction:(id)arg1;
+ (id)fetchHistoryTransactionForToken:(id)arg1;

- (id)date;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)encodeForXPC;
- (id)entityNameToFetch;
- (unsigned long long)fetchBatchSize;
- (unsigned long long)fetchLimit;
- (unsigned long long)fetchOffset;
- (bool)includesPropertyValues;
- (bool)includesSubentities;
- (id)init;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 delete:(bool)arg2;
- (id)initWithToken:(id)arg1;
- (id)initWithToken:(id)arg1 delete:(bool)arg2;
- (id)initWithTransactionID:(id)arg1 delete:(bool)arg2 transactionOnly:(bool)arg3;
- (id)initWithTransactionIDs:(id)arg1;
- (id)initWithTransactionToken:(id)arg1;
- (bool)isDelete;
- (bool)isFetchTransactionForToken;
- (id)predicate;
- (id)propertiesToFetch;
- (id)propertiesToFetchForEntity:(id)arg1;
- (id)propertiesToFetchForEntity:(id)arg1 includeTransactionStrings:(bool)arg2;
- (id)propertiesToGroupBy;
- (unsigned long long)requestType;
- (long long)resultType;
- (bool)returnsDistinctResults;
- (void)setFetchBatchSize:(unsigned long long)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setResultType:(long long)arg1;
- (void)setUseQueryGenerationToken:(bool)arg1;
- (id)sortDescriptors;
- (id)token;
- (id)transactionNumber;
- (bool)useQueryGenerationToken;

@end
