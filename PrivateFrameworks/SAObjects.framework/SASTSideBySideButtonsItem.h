/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTSideBySideButtonsItem : AceObject <SASTTemplateItem>

@property (nonatomic, copy) NSString *buttonsViewStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SASTTemplateAction> *primaryButtonAction;
@property (nonatomic) bool primaryButtonEnabled;
@property (nonatomic, copy) NSString *primaryButtonLabel;
@property (nonatomic, retain) SAUIColor *primaryButtonTextColor;
@property (nonatomic, retain) <SASTTemplateAction> *secondaryButtonAction;
@property (nonatomic) bool secondaryButtonEnabled;
@property (nonatomic, copy) NSString *secondaryButtonLabel;
@property (readonly) Class superclass;

+ (id)sideBySideButtonsItem;
+ (id)sideBySideButtonsItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)buttonsViewStyle;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)primaryButtonAction;
- (bool)primaryButtonEnabled;
- (id)primaryButtonLabel;
- (id)primaryButtonTextColor;
- (id)secondaryButtonAction;
- (bool)secondaryButtonEnabled;
- (id)secondaryButtonLabel;
- (void)setButtonsViewStyle:(id)arg1;
- (void)setPrimaryButtonAction:(id)arg1;
- (void)setPrimaryButtonEnabled:(bool)arg1;
- (void)setPrimaryButtonLabel:(id)arg1;
- (void)setPrimaryButtonTextColor:(id)arg1;
- (void)setSecondaryButtonAction:(id)arg1;
- (void)setSecondaryButtonEnabled:(bool)arg1;
- (void)setSecondaryButtonLabel:(id)arg1;

@end
