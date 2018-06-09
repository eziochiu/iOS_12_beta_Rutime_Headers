/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AllCompoundPredicate : ML3CompoundPredicate

+ (id)predicateByFlatteningAllCompoundPredicate:(id)arg1;
+ (id)predicateByMergingContainmentPredicatesAllCompoundPredicate:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)compoundOperatorJoiner;

@end
