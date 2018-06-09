/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerLinkedAnswer : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *image;
@property (nonatomic, copy) NSURL *link;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)linkedAnswer;
+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)link;
- (id)name;
- (void)setDescriptionText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setName:(id)arg1;

@end
