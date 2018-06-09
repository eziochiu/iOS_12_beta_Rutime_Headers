/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDContextualPredicate : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _keyPaths;
    double  _minimumDurationInPreviousState;
    NSPredicate * _predicate;
    NSPredicate * _predicateForPreviousState;
}

@property (nonatomic, readonly) bool firesOnAnyChange;
@property (nonatomic, copy) NSSet *keyPaths;
@property (nonatomic) double minimumDurationInPreviousState;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) NSPredicate *predicateForPreviousState;

+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)predicateForChangeAtKeyPath:(id)arg1;
+ (id)predicateForChangeAtKeyPath:(id)arg1 withMinimumDurationInPreviousState:(double)arg2;
+ (id)predicateForChangeAtKeyPaths:(id)arg1;
+ (id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 withMinimumDurationInPreviousState:(double)arg3;
+ (id)predicateForKeyPath:(id)arg1 withFormat:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 withPredicateForPreviousState:(id)arg3 withMinimumDurationInPreviousState:(double)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (bool)firesOnAnyChange;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPaths;
- (double)minimumDurationInPreviousState;
- (id)predicate;
- (id)predicateForPreviousState;
- (void)setKeyPaths:(id)arg1;
- (void)setMinimumDurationInPreviousState:(double)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPredicateForPreviousState:(id)arg1;

@end
