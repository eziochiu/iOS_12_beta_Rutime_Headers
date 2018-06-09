/* made by EzioChiu.
 */

@protocol SSSQLiteEntity <NSObject>

@required

+ (NSMutableDictionary *)copyDatabaseDictionaryToSetClientDictionary:(NSDictionary *)arg1;
+ (NSString *)databasePropertyToGetClientProperty:(NSString *)arg1;
+ (NSString *)databasePropertyToSetClientProperty:(NSString *)arg1;
+ (NSString *)databaseTable;
+ (id)databaseValueForProperty:(NSString *)arg1 clientValue:(id)arg2;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseColumnForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseTableForProperty:(NSString *)arg1;
+ (NSSet *)foreignDatabaseTablesToDelete;
+ (NSString *)foreignKeyColumnForTable:(NSString *)arg1;
+ (NSString *)joinClauseForProperty:(NSString *)arg1;

- (NSDictionary *)copyValuesForClientProperties:(NSArray *)arg1;
- (NSObject<OS_xpc_object> *)copyXPCEncodedValuesForClientProperties:(NSArray *)arg1;
- (bool)deleteFromDatabase;
- (void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (bool)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (bool)setValuesWithDictionary:(NSDictionary *)arg1;
- (id)valueForProperty:(NSString *)arg1;

@end
