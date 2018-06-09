/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataDeletionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    Class  _entityClass;
    bool  _failIfNotFound;
    bool  _generateDeletedObjects;
    bool  _notifyObservers;
    HDSQLitePredicate * _predicate;
    id /* block */  _recursiveDeleteAuthorizationBlock;
    NSString * _restrictedSourceBundleIdentifier;
    bool  _secureDelete;
}

@property (nonatomic, copy) Class entityClass;
@property (nonatomic) bool failIfNotFound;
@property (nonatomic) bool generateDeletedObjects;
@property (nonatomic) bool notifyObservers;
@property (nonatomic, copy) HDSQLitePredicate *predicate;
@property (nonatomic, copy) id /* block */ recursiveDeleteAuthorizationBlock;
@property (nonatomic, copy) NSString *restrictedSourceBundleIdentifier;
@property (nonatomic) bool secureDelete;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)entityClass;
- (bool)failIfNotFound;
- (bool)generateDeletedObjects;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)notifyObservers;
- (id)predicate;
- (id /* block */)recursiveDeleteAuthorizationBlock;
- (id)restrictedSourceBundleIdentifier;
- (bool)secureDelete;
- (void)setEntityClass:(Class)arg1;
- (void)setFailIfNotFound:(bool)arg1;
- (void)setGenerateDeletedObjects:(bool)arg1;
- (void)setNotifyObservers:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRecursiveDeleteAuthorizationBlock:(id /* block */)arg1;
- (void)setRestrictedSourceBundleIdentifier:(id)arg1;
- (void)setSecureDelete:(bool)arg1;

@end
