/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilySetupGetStartedViewController : UIViewController <FAFamilySetupPage> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    UIView * _contentView;
    <FAFamilySetupPageDelegate> * _delegate;
    UILabel * _descriptionLabel;
    AAFamilyEligibilityResponse * _familyEligibilityResponse;
    FAFamilySharingFeaturesView * _familyFeaturesView;
    UIImageView * _familySharingLogo;
    UIButton * _getStartedButton;
    UIScrollView * _scrollView;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAFamilySetupPageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createDescriptionLabelForText:(id)arg1;
- (void)_getStartedButtonWasTapped:(id)arg1;
- (double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2;
- (void)_updateFonts;
- (id)delegate;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (id)initWithAccount:(id)arg1 store:(id)arg2 familyEligibilityResponse:(id)arg3;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
