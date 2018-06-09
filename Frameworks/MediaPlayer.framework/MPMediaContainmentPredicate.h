/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaContainmentPredicate : MPMediaPredicate {
    NSString * _property;
    NSSet * _values;
}

@property (nonatomic, readonly, copy) NSString *property;
@property (nonatomic, readonly, copy) NSSet *values;

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)property;
- (id)values;

@end
