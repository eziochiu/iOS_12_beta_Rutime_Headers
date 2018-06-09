/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUISendInvitationsCell : UITableViewCell {
    NSLayoutConstraint * _leftInsetConstraint;
    NSArray * _persistentConstraints;
    NSString * _simpleText;
    UILabel * _simpleTextLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *leftInsetConstraint;
@property (nonatomic, retain) NSArray *persistentConstraints;
@property (nonatomic, retain) NSString *simpleText;
@property (nonatomic, retain) UILabel *simpleTextLabel;

+ (id)_simpleTextLabelFont;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)leftInsetConstraint;
- (id)persistentConstraints;
- (void)setLeftInsetConstraint:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setSimpleText:(id)arg1;
- (void)setSimpleTextLabel:(id)arg1;
- (id)simpleText;
- (id)simpleTextLabel;
- (void)updateConstraints;

@end
