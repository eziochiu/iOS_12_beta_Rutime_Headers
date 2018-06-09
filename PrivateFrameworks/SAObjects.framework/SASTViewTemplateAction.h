/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTViewTemplateAction : AceObject <SASTTemplateAction>

@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASTItemGroup *itemGroupView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *viewTitle;

+ (id)viewTemplateAction;
+ (id)viewTemplateActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)itemGroupView;
- (void)setCommands:(id)arg1;
- (void)setItemGroupView:(id)arg1;
- (void)setViewTitle:(id)arg1;
- (id)viewTitle;

@end
