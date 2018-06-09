/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCKFetchRecordsOperation : IDSCKDatabaseOperation {
    NSArray * _desiredKeys;
    id /* block */  _fetchRecordsCompletionBlock;
    id /* block */  _perRecordCompletionBlock;
    id /* block */  _perRecordProgressBlock;
    NSArray * _recordIDs;
}

@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) id /* block */ fetchRecordsCompletionBlock;
@property (nonatomic, copy) id /* block */ perRecordCompletionBlock;
@property (nonatomic, copy) id /* block */ perRecordProgressBlock;
@property (nonatomic, copy) NSArray *recordIDs;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id)desiredKeys;
- (id /* block */)fetchRecordsCompletionBlock;
- (id /* block */)perRecordCompletionBlock;
- (id /* block */)perRecordProgressBlock;
- (id)recordIDs;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchRecordsCompletionBlock:(id /* block */)arg1;
- (void)setPerRecordCompletionBlock:(id /* block */)arg1;
- (void)setPerRecordProgressBlock:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;

@end
