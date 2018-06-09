/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTSubheaderItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIDecoratedText *leftText;
@property (nonatomic, retain) SAUIDecoratedText *rightText;
@property (readonly) Class superclass;

+ (id)subheaderItem;
+ (id)subheaderItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)leftText;
- (id)rightText;
- (void)setLeftText:(id)arg1;
- (void)setRightText:(id)arg1;

@end
