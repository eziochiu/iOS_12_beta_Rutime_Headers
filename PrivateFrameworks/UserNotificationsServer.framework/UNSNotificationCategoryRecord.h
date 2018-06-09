/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationCategoryRecord : NSObject {
    NSArray * _actions;
    NSString * _backgroundStyle;
    bool  _hasCustomDismissAction;
    bool  _hasCustomSilenceAction;
    NSString * _identifier;
    NSArray * _intentIdentifiers;
    NSString * _listPriority;
    NSArray * _minimalActions;
    bool  _presentFullScreenAlertOverList;
    bool  _preventAutomaticLock;
    bool  _preventAutomaticRemovalFromRecent;
    bool  _preventDismissWhenClosed;
    bool  _privacyOptionShowSubtitle;
    bool  _privacyOptionShowTitle;
    NSString * _privateBody;
    bool  _revealAdditionalContentWhenPresented;
    bool  _shouldAllowInCarPlay;
    NSString * _summaryFormat;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) NSString *backgroundStyle;
@property (nonatomic) bool hasCustomDismissAction;
@property (nonatomic) bool hasCustomSilenceAction;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *intentIdentifiers;
@property (nonatomic, copy) NSString *listPriority;
@property (nonatomic, copy) NSArray *minimalActions;
@property (nonatomic) bool presentFullScreenAlertOverList;
@property (nonatomic) bool preventAutomaticLock;
@property (nonatomic) bool preventAutomaticRemovalFromRecent;
@property (nonatomic) bool preventDismissWhenClosed;
@property (nonatomic) bool privacyOptionShowSubtitle;
@property (nonatomic) bool privacyOptionShowTitle;
@property (nonatomic, copy) NSString *privateBody;
@property (nonatomic) bool revealAdditionalContentWhenPresented;
@property (nonatomic) bool shouldAllowInCarPlay;
@property (nonatomic, copy) NSString *summaryFormat;

- (void).cxx_destruct;
- (id)actions;
- (id)backgroundStyle;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomDismissAction;
- (bool)hasCustomSilenceAction;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)intentIdentifiers;
- (bool)isEqual:(id)arg1;
- (id)listPriority;
- (id)minimalActions;
- (bool)presentFullScreenAlertOverList;
- (bool)preventAutomaticLock;
- (bool)preventAutomaticRemovalFromRecent;
- (bool)preventDismissWhenClosed;
- (bool)privacyOptionShowSubtitle;
- (bool)privacyOptionShowTitle;
- (id)privateBody;
- (bool)revealAdditionalContentWhenPresented;
- (void)setActions:(id)arg1;
- (void)setBackgroundStyle:(id)arg1;
- (void)setHasCustomDismissAction:(bool)arg1;
- (void)setHasCustomSilenceAction:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntentIdentifiers:(id)arg1;
- (void)setListPriority:(id)arg1;
- (void)setMinimalActions:(id)arg1;
- (void)setPresentFullScreenAlertOverList:(bool)arg1;
- (void)setPreventAutomaticLock:(bool)arg1;
- (void)setPreventAutomaticRemovalFromRecent:(bool)arg1;
- (void)setPreventDismissWhenClosed:(bool)arg1;
- (void)setPrivacyOptionShowSubtitle:(bool)arg1;
- (void)setPrivacyOptionShowTitle:(bool)arg1;
- (void)setPrivateBody:(id)arg1;
- (void)setRevealAdditionalContentWhenPresented:(bool)arg1;
- (void)setShouldAllowInCarPlay:(bool)arg1;
- (void)setSummaryFormat:(id)arg1;
- (bool)shouldAllowInCarPlay;
- (id)summaryFormat;

@end
