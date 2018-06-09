/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailOrganizerCell : EKEventDetailCell {
    UILabel * _organizerLabel;
    NSString * _organizerName;
    <EKIdentityProtocol> * _organizerOverride;
    EKUILabeledAvatarView * _organizerView;
    UILabel * _titleView;
}

+ (id)_organizerFont;
+ (id)_titleFont;

- (void).cxx_destruct;
- (id)_organizerLabel;
- (id)_organizerView;
- (id)_titleView;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 organizerOverride:(id)arg3;
- (bool)shouldDisplayForEvent;
- (bool)update;

@end
