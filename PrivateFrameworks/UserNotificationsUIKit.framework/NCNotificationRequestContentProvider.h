/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationRequestContentProvider : NSObject <NCNotificationStaticContentProviding> {
    <NCNotificationStaticContentProvidingDelegate> * _delegate;
    NCNotificationRequest * _notificationRequest;
    NSArray * _overriddenActions;
}

@property (nonatomic, readonly, copy) id /* block */ cancelAction;
@property (nonatomic, readonly, copy) id /* block */ clearAction;
@property (nonatomic, readonly, copy) id /* block */ closeAction;
@property (nonatomic, readonly) unsigned long long coalesceCount;
@property (nonatomic, readonly, copy) NSArray *currentActions;
@property (nonatomic, readonly, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic, readonly) bool dateAllDay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) id /* block */ defaultAction;
@property (nonatomic) <NCNotificationStaticContentProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *icons;
@property (nonatomic, readonly) NSArray *interfaceActions;
@property (nonatomic, readonly) unsigned long long messageNumberOfLines;
@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (nonatomic, copy) NSArray *overriddenActions;
@property (nonatomic, readonly, copy) NSString *primarySubtitleText;
@property (nonatomic, readonly, copy) NSString *primaryText;
@property (nonatomic, readonly, copy) NSString *secondaryText;
@property (nonatomic, readonly) bool showsTextInputOnAppearance;
@property (nonatomic, readonly, copy) NSString *summaryText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (nonatomic, readonly, copy) NSTimeZone *timeZone;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)_actionForNotificationAction:(id)arg1;
- (id)_appBundleIdentifer;
- (id /* block */)cancelAction;
- (id /* block */)clearAction;
- (id /* block */)closeAction;
- (unsigned long long)coalesceCount;
- (id)currentActions;
- (id)date;
- (id /* block */)defaultAction;
- (id)delegate;
- (id)icons;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1;
- (id)interfaceActions;
- (bool)isDateAllDay;
- (unsigned long long)messageNumberOfLines;
- (id)notificationRequest;
- (id)overriddenActions;
- (id)primarySubtitleText;
- (id)primaryText;
- (id)secondaryText;
- (void)setDelegate:(id)arg1;
- (void)setNotificationRequest:(id)arg1;
- (void)setOverriddenActions:(id)arg1;
- (bool)showsTextInputOnAppearance;
- (id)summaryText;
- (id)thumbnail;
- (id)timeZone;
- (id)title;

@end
