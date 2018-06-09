/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertySimpleCell : CNPropertyCell {
    UILabel * _labelLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic, readonly) UILabel *valueLabel;

- (void).cxx_destruct;
- (id)labelLabel;
- (id)labelView;
- (id)valueLabel;
- (id)valueView;

@end
