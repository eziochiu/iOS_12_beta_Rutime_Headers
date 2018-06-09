/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKEmergencyCardContactCell : UITableViewCell {
    _HKEmergencyContact * _contact;
    UILabel * _nameLabel;
    UILabel * _phoneNumberLabel;
    UILabel * _relationshipLabel;
}

@property (nonatomic, retain) _HKEmergencyContact *contact;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *phoneNumberLabel;
@property (nonatomic, retain) UILabel *relationshipLabel;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_setupIndividualViews;
- (id)contact;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)nameLabel;
- (id)phoneNumberLabel;
- (id)relationshipLabel;
- (void)setContact:(id)arg1;
- (void)setContact:(id)arg1 showRelationship:(bool)arg2 showPhoneIcon:(bool)arg3;
- (void)setNameLabel:(id)arg1;
- (void)setPhoneNumberLabel:(id)arg1;
- (void)setRelationshipLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupViewHeirarchy;

@end
