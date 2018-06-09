/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSEventsTableBase : NSObject {
    SSSQLiteDatabase * _database;
}

+ (id)databasePath;

- (void).cxx_destruct;
- (bool)_setupDatabase;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)performTransactionWithBlock:(id /* block */)arg1;

@end
