/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerAnswerProperty : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *valueAnnotation;

+ (id)answerProperty;
+ (id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueAnnotation:(id)arg1;
- (id)value;
- (id)valueAnnotation;

@end
