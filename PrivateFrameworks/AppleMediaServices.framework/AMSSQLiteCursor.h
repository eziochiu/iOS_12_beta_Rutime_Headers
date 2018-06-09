/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSSQLiteCursor : NSObject {
    NSDictionary * _columnIndexByName;
    struct sqlite3_stmt { } * _statement;
    AMSSQLiteStatement * _statementWrapper;
}

@property (nonatomic, readonly) long long numberOfColumns;

- (void).cxx_destruct;
- (id)URLForColumnIndex:(int)arg1;
- (id)URLForColumnName:(id)arg1;
- (int)_columnTypeForColumnIndex:(int)arg1;
- (int)columnIndexForColumnName:(id)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (id)dataForColumnName:(id)arg1;
- (id)dateForColumnIndex:(int)arg1;
- (id)dateForColumnName:(id)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (double)doubleForColumnName:(id)arg1;
- (id)initWithStatement:(id)arg1;
- (long long)int64ForColumnIndex:(int)arg1;
- (long long)int64ForColumnName:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)intForColumnName:(id)arg1;
- (id)numberForColumnIndex:(int)arg1;
- (id)numberForColumnName:(id)arg1;
- (long long)numberOfColumns;
- (id)stringForColumnIndex:(int)arg1;
- (id)stringForColumnName:(id)arg1;

@end
