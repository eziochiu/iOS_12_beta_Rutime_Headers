/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTMessageItem : AceObject <SASTTemplateItem>

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, retain) SAUIDecoratedText *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIDecoratedText *recipient;
@property (readonly) Class superclass;

+ (id)messageItem;
+ (id)messageItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)bundleId;
- (id)content;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recipient;
- (void)setBundleId:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setRecipient:(id)arg1;

@end
