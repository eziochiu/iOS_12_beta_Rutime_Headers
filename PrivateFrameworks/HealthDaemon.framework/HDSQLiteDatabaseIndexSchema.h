/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteDatabaseIndexSchema : NSObject {
    NSArray * _columns;
    bool  _isUnique;
    NSString * _name;
}

@property (nonatomic, retain) NSArray *columns;
@property (nonatomic) bool isUnique;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)columns;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isUnique;
- (id)name;
- (void)setColumns:(id)arg1;
- (void)setIsUnique:(bool)arg1;
- (void)setName:(id)arg1;

@end
