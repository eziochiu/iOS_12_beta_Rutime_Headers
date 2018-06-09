/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationViewControllerView : UIView {
    unsigned long long  _coalescedNotificationCount;
    PLPlatterView * _contentView;
    NSArray * _stackedPlatters;
}

@property (nonatomic) unsigned long long coalescedNotificationCount;
@property (nonatomic) PLPlatterView *contentView;

- (void).cxx_destruct;
- (void)_configureStackedPlatters;
- (bool)_isCoalescedNotificationBundle;
- (void)_layoutStackedPlatters;
- (unsigned long long)_stackedPlatterCount;
- (unsigned long long)_stackedPlatterCountCoalescedNotificationCount:(unsigned long long)arg1;
- (unsigned long long)coalescedNotificationCount;
- (id)contentView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCoalescedNotificationCount:(unsigned long long)arg1;
- (void)setContentView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
