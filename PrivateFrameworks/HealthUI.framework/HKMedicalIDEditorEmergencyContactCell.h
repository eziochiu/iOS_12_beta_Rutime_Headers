/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell {
    _HKEmergencyContact * _contact;
}

@property (nonatomic, retain) _HKEmergencyContact *contact;

- (void).cxx_destruct;
- (void)_labelTapped:(id)arg1;
- (id)contact;
- (id)formattedValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setContact:(id)arg1;

@end
