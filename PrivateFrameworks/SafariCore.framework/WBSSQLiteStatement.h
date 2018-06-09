/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSSQLiteStatement : NSObject {
    NSArray * _columnNames;
    NSDictionary * _columnNamesToIndexes;
    WBSSQLiteDatabase * _database;
    struct sqlite3_stmt { } * _handle;
}

@property (nonatomic, readonly) NSArray *columnNames;
@property (nonatomic, readonly) NSDictionary *columnNamesToIndexes;
@property (nonatomic, readonly) WBSSQLiteDatabase *database;
@property (nonatomic, readonly) struct sqlite3_stmt { }*handle;

- (void).cxx_destruct;
- (bool)_isValid;
- (void)bindData:(id)arg1 atParameterIndex:(unsigned long long)arg2;
- (void)bindDouble:(double)arg1 atParameterIndex:(unsigned long long)arg2;
- (void)bindInt64:(long long)arg1 atParameterIndex:(unsigned long long)arg2;
- (void)bindInt:(int)arg1 atParameterIndex:(unsigned long long)arg2;
- (void)bindNullAtParameterIndex:(unsigned long long)arg1;
- (void)bindString:(id)arg1 atParameterIndex:(unsigned long long)arg2;
- (id)columnNames;
- (id)columnNamesToIndexes;
- (id)database;
- (void)dealloc;
- (int)execute;
- (bool)execute:(id*)arg1;
- (id)fetch;
- (bool)fetchWithEnumerationBlock:(id /* block */)arg1 error:(id*)arg2;
- (struct sqlite3_stmt { }*)handle;
- (id)init;
- (id)initWithDatabase:(id)arg1 query:(id)arg2;
- (id)initWithDatabase:(id)arg1 query:(id)arg2 error:(id*)arg3;
- (void)invalidate;
- (void)reset;

@end
