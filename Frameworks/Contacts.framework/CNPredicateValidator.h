/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPredicateValidator : NSObject <NSPredicateVisitor> {
    NSSet * _allowedKeysSet;
    NSError * _error;
    NSPredicate * _predicate;
    NSMutableSet * _usedKeysSet;
    bool  _validated;
}

@property (nonatomic, retain) NSArray *allowedKeys;
@property (nonatomic, retain) NSSet *allowedKeysSet;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, readonly, copy) NSArray *usedKeys;
@property (nonatomic, retain) NSMutableSet *usedKeysSet;
@property (nonatomic) bool validated;

- (void).cxx_destruct;
- (id)allowedKeys;
- (id)allowedKeysSet;
- (id)error;
- (id)predicate;
- (void)resetUsedKeys;
- (void)setAllowedKeys:(id)arg1;
- (void)setAllowedKeysSet:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setUsedKeysSet:(id)arg1;
- (void)setValidated:(bool)arg1;
- (id)usedKeys;
- (id)usedKeysSet;
- (bool)validateWithError:(id*)arg1;
- (bool)validated;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
