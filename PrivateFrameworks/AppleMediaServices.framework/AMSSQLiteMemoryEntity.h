/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSSQLiteMemoryEntity : NSObject <NSCopying> {
    long long  _databaseID;
    NSMutableDictionary * _externalPropertyValues;
    NSMutableDictionary * _propertyValues;
}

@property (nonatomic) long long databaseID;
@property (nonatomic, readonly, copy) NSDictionary *externalPropertyValues;
@property (nonatomic, readonly, copy) NSDictionary *propertyValues;

+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;
+ (Class)databaseEntityClass;
+ (id)defaultProperties;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)databaseID;
- (id)description;
- (id)externalPropertyValues;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)propertyValues;
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;
- (void)setDatabaseID:(long long)arg1;
- (void)setExternalValuesWithDictionary:(id)arg1;
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(long long)arg3;
- (void)setValues:(id*)arg1 forProperties:(const id*)arg2 count:(long long)arg3;
- (void)setValuesWithDictionary:(id)arg1;
- (id)valueForExternalProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end
