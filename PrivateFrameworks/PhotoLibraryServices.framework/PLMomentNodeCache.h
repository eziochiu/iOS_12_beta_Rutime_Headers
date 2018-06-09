/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentNodeCache : NSObject {
    struct sqlite3 { } * __momentsDatabase;
    NSMutableDictionary * __nodesByObjectID;
    NSMutableDictionary * __nodesByRowID;
    NSMutableDictionary * __nodesByUserTag;
    struct sqlite3_stmt { } * __spatialInsertStatement;
    struct sqlite3_stmt { } * __spatialSelectStatement;
    struct sqlite3_stmt { } * __temporalInsertStatement;
    struct sqlite3_stmt { } * __temporalSelectStatement;
}

@property (nonatomic, readonly) struct sqlite3 { }*_momentsDatabase;
@property (nonatomic, readonly) NSMutableDictionary *_nodesByObjectID;
@property (nonatomic, readonly) NSMutableDictionary *_nodesByRowID;
@property (nonatomic, readonly) NSMutableDictionary *_nodesByUserTag;
@property (nonatomic, readonly) struct sqlite3_stmt { }*_spatialInsertStatement;
@property (nonatomic, readonly) struct sqlite3_stmt { }*_spatialSelectStatement;
@property (nonatomic, readonly) struct sqlite3_stmt { }*_temporalInsertStatement;
@property (nonatomic, readonly) struct sqlite3_stmt { }*_temporalSelectStatement;

- (struct sqlite3 { }*)_momentsDatabase;
- (id)_nodesByObjectID;
- (id)_nodesByRowID;
- (id)_nodesByUserTag;
- (struct sqlite3_stmt { }*)_spatialInsertStatement;
- (struct sqlite3_stmt { }*)_spatialSelectStatement;
- (struct sqlite3_stmt { }*)_temporalInsertStatement;
- (struct sqlite3_stmt { }*)_temporalSelectStatement;
- (void)addNodeByUserTag:(id)arg1;
- (void)closeMomentsDatabase;
- (unsigned long long)countOfTemporalNeighborsOfNode:(id)arg1 forTheta:(double)arg2;
- (void)dealloc;
- (void)executePreparedStatement:(struct sqlite3_stmt { }*)arg1 withStatementBlock:(id /* block */)arg2;
- (id)init;
- (void)insertNode:(id)arg1;
- (id)nodeForAsset:(id)arg1;
- (id)nodeWithPartialAssetDictionary:(id)arg1;
- (id)nodesWithTag:(id)arg1;
- (id)nodesWithinMinDate:(double)arg1 maxDate:(double)arg2;
- (void)openMomentsDatabase;
- (void)performBatch:(id /* block */)arg1;
- (void)prepareAndExecuteStatement:(const char *)arg1;
- (struct sqlite3_stmt { }*)prepareStatement:(const char *)arg1;
- (void)setupMomentsDatabase;
- (id)spatialNeighborsOfNodes:(id)arg1 forSigma:(double)arg2;
- (id)taggedNeighborsOfNode:(id)arg1;
- (id)temporalNeighborsOfNode:(id)arg1 forTheta:(double)arg2;
- (id)tieBreakerForNode:(id)arg1;

@end
