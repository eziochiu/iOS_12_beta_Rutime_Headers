/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDialogPunchout : SAAceView

@property (nonatomic, retain) SAUIButton *buttonView;
@property (nonatomic, retain) SAUIAssistantUtteranceView *utteranceView;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)dialogPunchout;
+ (id)dialogPunchoutWithDictionary:(id)arg1 context:(id)arg2;

- (id)buttonView;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setButtonView:(id)arg1;
- (void)setUtteranceView:(id)arg1;
- (id)utteranceView;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)_af_dialogIdentifier;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;

@end
