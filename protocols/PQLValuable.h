/* made by EzioChiu.
 */

@protocol PQLValuable <PQLBindable>

@required

+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

@end
