/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLStoreRequestContext : NSObject {
    NSSQLiteConnection * _connection;
    NSManagedObjectContext * _context;
    NSError * _error;
    NSException * _exception;
    bool  _hasHistoryTracking;
    NSPersistentStoreRequest * _persistentStoreRequest;
    id  _result;
    NSSQLCore * _sqlCore;
    NSNumber * _transactionID;
    bool  _useColoredLogging;
    bool  _useConcurrentFetching;
}

@property (nonatomic, retain) NSSQLiteConnection *connection;
@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) int debugLogLevel;
@property (nonatomic, retain) id exception;
@property (nonatomic, readonly) bool isWritingRequest;
@property (nonatomic, retain) NSError *localError;
@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (nonatomic, readonly) NSQueryGenerationToken *queryGenerationToken;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, retain) id result;
@property (nonatomic, readonly) NSSQLRowCache *rowCache;
@property (nonatomic, readonly) bool shouldRegisterQueryGeneration;
@property (nonatomic, readonly) NSSQLCore *sqlCore;
@property (nonatomic, readonly) NSNumber *transactionID;
@property (nonatomic, readonly) bool useColoredLogging;
@property (nonatomic, readonly) bool useConcurrentFetching;

- (id)connection;
- (id)context;
- (id)createNestedObjectFaultContextForObjectWithID:(id)arg1;
- (void)dealloc;
- (int)debugLogLevel;
- (id)exception;
- (void)executeEpilogue;
- (void)executePrologue;
- (void)executeRequestCore:(id*)arg1;
- (bool)executeRequestUsingConnection:(id)arg1;
- (bool)forConflictAnalysis;
- (bool)hasHistoryTracking;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)localError;
- (id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)newStatementWithSQLString:(id)arg1;
- (id)notificationSourceObject;
- (id)persistentStoreRequest;
- (id)queryGenerationToken;
- (unsigned long long)requestType;
- (id)result;
- (id)rowCache;
- (void)setConnection:(id)arg1;
- (void)setException:(id)arg1;
- (void)setLocalError:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setTransactionID:(id)arg1;
- (bool)shouldRegisterQueryGeneration;
- (id)sqlCore;
- (id)transactionID;
- (bool)useColoredLogging;
- (bool)useConcurrentFetching;

@end
