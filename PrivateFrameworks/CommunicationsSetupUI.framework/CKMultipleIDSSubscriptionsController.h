/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CKMultipleIDSSubscriptionsController : PSListController {
    NSString * _footerText;
    int  _switchWasUpdated;
}

@property (nonatomic, copy) NSString *footerText;
@property int switchWasUpdated;

- (void).cxx_destruct;
- (void)disableSecondSpecifier:(id)arg1;
- (void)enbleSecondSpecifier:(id)arg1;
- (id)footerText;
- (id)isEnabledForSubscription:(id)arg1;
- (void)setEnabledForSubscription:(id)arg1 specifier:(id)arg2;
- (void)setFooterText:(id)arg1;
- (void)setSwitchWasUpdated:(int)arg1;
- (id)specifiers;
- (int)switchWasUpdated;

@end
