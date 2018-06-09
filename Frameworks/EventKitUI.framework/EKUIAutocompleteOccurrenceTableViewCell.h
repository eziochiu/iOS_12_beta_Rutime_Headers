/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIAutocompleteOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts {
    UIImageView * _colorDotView;
    NSArray * _ekUIAutocompleteOccurrenceTableViewCellConstraints;
    UIColor * _eventCalendarColor;
    NSString * _eventFoundIn;
    NSString * _eventInvitees;
    NSString * _eventLocation;
    NSString * _eventTimeWithResultTimeZone;
    NSString * _eventTimeWithThisTimeZone;
    NSString * _eventTitle;
    UILabel * _foundInTextLabel;
    UILabel * _inviteesTextLabel;
    UILabel * _locationTextLabel;
    NSArray * _secondaryLabels;
    UILabel * _timeTextLabelWithResultTimeZone;
    UILabel * _timeTextLabelWithThisTimeZone;
    UILabel * _titleTextLabel;
}

+ (id)_foundInStringForResult:(id)arg1;
+ (id)_inviteeStringForResult:(id)arg1;
+ (id)_locationStringForResult:(id)arg1;
+ (bool)_shouldShowOtherTimeZoneForResult:(id)arg1;
+ (id)_timeStringForResult:(id)arg1 usingTimeZone:(id)arg2;
+ (id)_titleStringForResult:(id)arg1;
+ (double)_verticalSpacingBottomToBaselineForBottomLabelWithPrimaryFont:(id)arg1;
+ (double)_verticalSpacingTopToBaselineForBottomLabelWithSecondaryFont:(id)arg1;
+ (double)_verticalSpacingTopToBaselineForTopLabelWithPrimaryFont:(id)arg1;
+ (double)cellHeightForResult:(id)arg1 forWidth:(double)arg2;
+ (id)primaryTextColor;
+ (id)reuseIdentifier;
+ (id)secondaryTextColor;
+ (id)secondaryTextLabelFont;

- (void).cxx_destruct;
- (void)_addConstraintsForLabel:(id)arg1 belowView:(id)arg2 toArray:(id)arg3;
- (id)_createLabelWithColor:(id)arg1;
- (id)_createPrimaryLabel;
- (id)_createSecondaryLabel;
- (void)_setLabelFonts;
- (void)_setupConstraints;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (double)_verticalSpacingTopToColorDot;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithResult:(id)arg1;

@end
