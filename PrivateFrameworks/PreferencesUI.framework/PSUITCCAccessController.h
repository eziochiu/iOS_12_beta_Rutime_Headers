/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUITCCAccessController : PSListController {
    NSString * _explanation;
    NSString * _footer;
    NSString * _header;
    NSString * _serviceKey;
}

@property (nonatomic, copy) NSString *explanation;
@property (nonatomic, copy) NSString *footer;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, readonly) NSString *serviceKey;

+ (bool)isServiceRestricted:(id)arg1;

- (void).cxx_destruct;
- (id)accesssForSpecifier:(id)arg1;
- (id)explanation;
- (id)footer;
- (id)header;
- (id)init;
- (id)serviceKey;
- (void)setAccess:(id)arg1 forSpecifier:(id)arg2;
- (void)setExplanation:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (void)updateSpecifiersForImposedSettings;
- (void)viewWillAppear:(bool)arg1;

@end
