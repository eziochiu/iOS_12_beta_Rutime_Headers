/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFreezeSeriesOperation : HDJournalableOperation {
    Class  _entityClass;
    NSUUID * _frozenIdentifier;
    NSUUID * _identifier;
    NSDictionary * _metadata;
}

@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly) NSUUID *frozenIdentifier;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (Class)entityClass;
- (id)frozenIdentifier;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 entityClass:(Class)arg3;
- (id)metadata;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
