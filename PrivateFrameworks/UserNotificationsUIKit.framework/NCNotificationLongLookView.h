/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationLongLookView : PLExpandedPlatterView <NCCustomContentContainingLookView, NCNotificationContentViewDelegate, NCNotificationStaticContentAccepting, UIGestureRecognizerDelegate> {
    unsigned long long  _customContentLocation;
    <NCNotificationLongLookViewDelegate> * _delegate;
    bool  _hidesNotificationContent;
    UITapGestureRecognizer * _lookViewTapGestureRecognizer;
    NCNotificationContentView * _notificationContentView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (getter=isActionsHidden, nonatomic) bool actionsHidden;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic) unsigned long long customContentLocation;
@property (nonatomic) struct CGSize { double x1; double x2; } customContentSize;
@property (nonatomic, readonly) UIView *customContentView;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic) bool dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationLongLookViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIControl *dismissControl;
@property (nonatomic) bool hasShadow;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesNotificationContent;
@property (nonatomic, readonly) NSArray *iconButtons;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic, retain) NSArray *interfaceActions;
@property (nonatomic, readonly) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *primarySubtitleText;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) NSString *summaryText;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIButton *utilityButton;

- (void).cxx_destruct;
- (void)_configureCustomContentView;
- (void)_configureLookViewTapGestureRecognizerIfNecessary;
- (void)_configureNotificationContentViewIfNecessary;
- (struct CGSize { double x1; double x2; })_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutActionsKeyLineView;
- (void)_layoutCustomContentViewInRelationToContentView;
- (void)_layoutMainContentView;
- (void)_layoutNotificationContentView;
- (bool)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)customContentLocation;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)hidesNotificationContent;
- (void)layoutSubviews;
- (long long)lookStyle;
- (id)lookViewTapGestureRecognizer;
- (void)notificationContentView:(id)arg1 willInteractWithURL:(id)arg2;
- (id)primarySubtitleText;
- (id)primaryText;
- (id)secondaryText;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCustomContentLocation:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidesNotificationContent:(bool)arg1;
- (void)setPrimarySubtitleText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
