/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCoalescingHeaderCell : UICollectionViewCell <NCLegibilitySettingsAdjusting, NCNotificationListCoalescingControlsHandler, NCNotificationListCoalescingControlsViewDelegate, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSString * _backgroundGroupName;
    NCNotificationListCoalescingControlsView * _coalescingControlsView;
    NSString * _coalescingIdentifier;
    unsigned long long  _groupingSection;
    <NCNotificationListCoalescingControlsHandlerDelegate> * _handlerDelegate;
    NCNotificationListHeaderTitleView * _headerTitleView;
    _UILegibilitySettings * _legibilitySettings;
    NSString * _title;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSString *backgroundGroupName;
@property (nonatomic, retain) NCNotificationListCoalescingControlsView *coalescingControlsView;
@property (nonatomic, copy) NSString *coalescingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long groupingSection;
@property (nonatomic) <NCNotificationListCoalescingControlsHandlerDelegate> *handlerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationListHeaderTitleView *headerTitleView;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (double)coalescingHeaderCellHeight;

- (void).cxx_destruct;
- (void)_configureCoalescingControlsViewIfNecessary;
- (void)_configureHeaderTitleViewIfNecessary;
- (void)_layoutCoalescingControlsView;
- (void)_layoutHeaderTitleView;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (id)backgroundGroupName;
- (id)coalescingControlsView;
- (id)coalescingIdentifier;
- (unsigned long long)groupingSection;
- (id)handlerDelegate;
- (id)headerTitleView;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)notificationListCoalescingControlsView:(id)arg1 didTransitionToClearState:(bool)arg2;
- (void)notificationListCoalescingControlsViewRequestsClear:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsRestack:(id)arg1;
- (void)prepareForReuse;
- (void)resetClearButtonStateAnimated:(bool)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundGroupName:(id)arg1;
- (void)setCoalescingControlsView:(id)arg1;
- (void)setCoalescingIdentifier:(id)arg1;
- (void)setGroupingSection:(unsigned long long)arg1;
- (void)setHandlerDelegate:(id)arg1;
- (void)setHeaderTitleView:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x1; double x2; })arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
