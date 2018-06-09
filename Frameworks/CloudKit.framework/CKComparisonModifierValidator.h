/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKComparisonModifierValidator : CKPredicateValidatorInstance {
    unsigned long long  _modifier;
}

@property (nonatomic) unsigned long long modifier;

- (id)CKPropertiesDescription;
- (id)initWithModifier:(unsigned long long)arg1;
- (unsigned long long)modifier;
- (void)setModifier:(unsigned long long)arg1;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
