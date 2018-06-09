/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAMailboxSearchQuery : DASearchQuery {
    int  _MIMESupport;
    bool  _allOrNone;
    int  _bodyType;
    NSString * _collectionID;
    bool  _deepTraversal;
    NSDate * _priorToDate;
    bool  _rebuildResults;
    long long  _truncationSize;
}

@property (nonatomic) int MIMESupport;
@property (nonatomic) bool allOrNone;
@property (nonatomic) int bodyType;
@property (nonatomic, retain) NSString *collectionID;
@property (nonatomic) bool deepTraversal;
@property (nonatomic, retain) NSDate *priorToDate;
@property (nonatomic) bool rebuildResults;
@property (nonatomic) long long truncationSize;

+ (id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2;
+ (id)mailboxSearchQueryWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3;

- (void).cxx_destruct;
- (int)MIMESupport;
- (bool)allOrNone;
- (int)bodyType;
- (id)collectionID;
- (bool)deepTraversal;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3;
- (id)priorToDate;
- (bool)rebuildResults;
- (void)setAllOrNone:(bool)arg1;
- (void)setBodyType:(int)arg1;
- (void)setCollectionID:(id)arg1;
- (void)setDeepTraversal:(bool)arg1;
- (void)setMIMESupport:(int)arg1;
- (void)setPriorToDate:(id)arg1;
- (void)setRebuildResults:(bool)arg1;
- (void)setTruncationSize:(long long)arg1;
- (long long)truncationSize;

@end
