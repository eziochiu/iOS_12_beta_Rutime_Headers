/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSocialAnswer : SAAnswerAbstractSocialPost

@property (nonatomic, copy) NSNumber *selectedAnswer;

+ (id)socialAnswer;
+ (id)socialAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)selectedAnswer;
- (void)setSelectedAnswer:(id)arg1;

@end
