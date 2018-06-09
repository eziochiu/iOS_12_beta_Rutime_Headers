/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTHeaderItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIDecoratedText *header;
@property (nonatomic, retain) SAUIDecoratedText *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)headerItem;
+ (id)headerItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)header;
- (void)setHeader:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setText:(id)arg1;
- (id)subtitle;
- (id)text;

@end
