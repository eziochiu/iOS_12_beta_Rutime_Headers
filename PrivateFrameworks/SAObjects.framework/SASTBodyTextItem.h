/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTBodyTextItem : AceObject <SASTTemplateItem>

@property (nonatomic, copy) NSString *alignment;
@property (nonatomic, copy) NSString *bodyText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SADecoratedString *decoratedBodyText;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *position;
@property (readonly) Class superclass;

+ (id)bodyTextItem;
+ (id)bodyTextItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)alignment;
- (id)bodyText;
- (id)decoratedBodyText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)position;
- (void)setAlignment:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)setDecoratedBodyText:(id)arg1;
- (void)setPosition:(id)arg1;

@end
