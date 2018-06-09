/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCFGTerminal : _HKCFGExpression

+ (id)terminalMatchingAnyDouble;
+ (id)terminalMatchingAnyInteger;
+ (id)terminalMatchingCharacterInSet:(id)arg1;
+ (id)terminalMatchingCharacterInString:(id)arg1;
+ (id)terminalMatchingDoubleWithCondition:(id /* block */)arg1;
+ (id)terminalMatchingIntegerWithCondition:(id /* block */)arg1;
+ (id)terminalMatchingSequenceOfCharactersInSet:(id)arg1;
+ (id)terminalMatchingString:(id)arg1;
+ (id)terminalMatchingString:(id)arg1 caseSensitive:(bool)arg2;

- (id)_label;
- (unsigned long long)_minimumLength;
- (bool)_scanValue:(id*)arg1 withScanner:(id)arg2;
- (void)_tryNodesWithContext:(id)arg1 solutionTest:(id /* block */)arg2;
- (id)characterSet;

@end
