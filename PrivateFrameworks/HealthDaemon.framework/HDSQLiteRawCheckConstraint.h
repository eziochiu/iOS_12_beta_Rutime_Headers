/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteRawCheckConstraint : HDSQLiteCheckConstraint {
    NSString * __rawSQL;
}

@property (nonatomic, readonly, copy) NSString *_rawSQL;

+ (id)checkConstraintWithSQL:(id)arg1;

- (void).cxx_destruct;
- (id)SQLCheckConstraint;
- (id)_initWithSQL:(id)arg1;
- (id)_rawSQL;

@end
