/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSqliteResultRow : NSObject <BSInvalidatable, NSCopying> {
    NSArray * _columnNames;
    struct sqlite3_stmt { } * _statement;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)resultRowWithStatement:(struct sqlite3_stmt { }*)arg1;

- (void).cxx_destruct;
- (id)_columnNames;
- (unsigned long long)_indexForKey:(id)arg1;
- (id)_initWithStatement:(struct sqlite3_stmt { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)dataAtIndex:(unsigned long long)arg1;
- (id)dataForKey:(id)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (double)doubleForKey:(id)arg1;
- (id)init;
- (long long)integerAtIndex:(unsigned long long)arg1;
- (long long)integerForKey:(id)arg1;
- (void)invalidate;
- (bool)isValid;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (id)stringForKey:(id)arg1;

@end