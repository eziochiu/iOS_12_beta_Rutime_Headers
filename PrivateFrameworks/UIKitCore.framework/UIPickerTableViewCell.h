/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPickerTableViewCell : UITableViewCell {
    UITapGestureRecognizer * _tap;
    UIPickerTableView * pickerTable;
}

@property (nonatomic) UIPickerTableView *pickerTable;

+ (id)_modernCenterCellFont;
+ (id)_modernNonCenterCellFont;

- (void).cxx_destruct;
- (void)_setIsCenterCell:(bool)arg1 shouldModifyAlphaOfView:(bool)arg2;
- (void)_tapAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)pickerTable;
- (void)setPickerTable:(id)arg1;

@end
