/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteStatementCache : NSObject {
    struct __CFDictionary { } * _correlationDeleteCache;
    struct __CFDictionary { } * _correlationInsertCache;
    struct __CFDictionary { } * _correlationMasterReorderCache;
    struct __CFDictionary { } * _correlationMasterReorderCachePart2;
    struct __CFDictionary { } * _correlationReorderCache;
    NSSQLiteStatement * _deletionStatementCache;
    NSSQLEntity * _entity;
    NSSQLiteStatement * _faultingStatementCache;
    NSSQLiteStatement * _insertStatementCache;
    NSMutableDictionary * _toManyRelationshipStatementCache;
}

- (void)_clearSaveGeneratedCachedStatements;
- (void)cacheCorrelationDeleteStatement:(id)arg1 forRelationship:(id)arg2;
- (void)cacheCorrelationInsertStatement:(id)arg1 forRelationship:(id)arg2;
- (void)cacheCorrelationMasterReorderStatement:(id)arg1 forRelationship:(id)arg2;
- (void)cacheCorrelationMasterReorderStatementPart2:(id)arg1 forRelationship:(id)arg2;
- (void)cacheCorrelationReorderStatement:(id)arg1 forRelationship:(id)arg2;
- (void)cacheDeletionStatement:(id)arg1;
- (void)cacheFaultingStatement:(id)arg1;
- (void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3;
- (void)cacheInsertStatement:(id)arg1;
- (void)clearCachedStatements;
- (id)correlationDeleteStatementForRelationship:(id)arg1;
- (id)correlationInsertStatementForRelationship:(id)arg1;
- (id)correlationMasterReorderStatementForRelationship:(id)arg1;
- (id)correlationMasterReorderStatementPart2ForRelationship:(id)arg1;
- (id)correlationReorderStatementForRelationship:(id)arg1;
- (struct __CFDictionary { }*)createCorrelationCacheDictionary;
- (void)dealloc;
- (id)deletionStatement;
- (id)faultingStatement;
- (id)initWithEntity:(id)arg1;
- (void)insertOrReplaceStatement:(id)arg1 forRelationship:(id)arg2 inDictionary:(struct __CFDictionary { }*)arg3;
- (id)insertStatement;
- (id)preparedFaultingCachesForRelationship:(id)arg1;

@end
