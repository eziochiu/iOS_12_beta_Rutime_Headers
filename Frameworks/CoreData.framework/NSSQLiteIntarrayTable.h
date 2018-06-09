/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteIntarrayTable : NSObject {
    struct sqlite3_intarray { } * _intarrayTable;
    NSString * _intarrayTableName;
}

@property (nonatomic) struct sqlite3_intarray { }*intarrayTable;
@property (nonatomic, retain) NSString *intarrayTableName;

- (void)dealloc;
- (struct sqlite3_intarray { }*)intarrayTable;
- (id)intarrayTableName;
- (void)setIntarrayTable:(struct sqlite3_intarray { }*)arg1;
- (void)setIntarrayTableName:(id)arg1;

@end
