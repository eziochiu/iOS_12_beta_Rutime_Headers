/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateBaseItem : SABaseAceObject <SAUITemplateItem>

@property (nonatomic, copy) NSArray *communicationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property (nonatomic) bool hasPriorityLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUITemplateEdgeInsets *padding;
@property (nonatomic, copy) NSArray *presentationOptions;
@property (nonatomic) bool shouldBeOffscreenInPartial;
@property (readonly) Class superclass;

+ (id)baseItem;
+ (id)baseItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)communicationOptions;
- (id)encodedClassName;
- (id)fullScreenPaddingDelta;
- (id)groupIdentifier;
- (bool)hasPriorityLayout;
- (id)padding;
- (id)presentationOptions;
- (void)setCommunicationOptions:(id)arg1;
- (void)setFullScreenPaddingDelta:(id)arg1;
- (void)setHasPriorityLayout:(bool)arg1;
- (void)setPadding:(id)arg1;
- (void)setPresentationOptions:(id)arg1;
- (void)setShouldBeOffscreenInPartial:(bool)arg1;
- (bool)shouldBeOffscreenInPartial;

@end
