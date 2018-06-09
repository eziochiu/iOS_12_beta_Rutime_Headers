/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAuthorComponentClassification : SXDefaultTextComponentClassification

+ (int)role;
+ (id)roleString;
+ (id)typeString;

- (id)accessibilityContextualLabel;
- (bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (id)textRules;

@end
