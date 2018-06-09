/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSQLiteEntityColumn : NSObject {
    NSString * _columnType;
    long long  _deletionAction;
    unsigned long long  _keyPathType;
    NSString * _name;
    Class  _targetEntityClass;
    NSString * _targetProperty;
}

@property (nonatomic, readonly, copy) NSString *columnType;
@property (nonatomic, readonly) long long deletionAction;
@property (nonatomic, readonly) unsigned long long keyPathType;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) Class targetEntityClass;
@property (nonatomic, readonly, copy) NSString *targetProperty;

- (void).cxx_destruct;
- (id)_columnNameAndTypeString;
- (id)columnType;
- (id)creationSQL;
- (long long)deletionAction;
- (id)description;
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned long long)arg3 targetEntityClass:(Class)arg4 targetProperty:(id)arg5 deletionAction:(long long)arg6;
- (unsigned long long)keyPathType;
- (id)name;
- (Class)targetEntityClass;
- (id)targetProperty;

@end