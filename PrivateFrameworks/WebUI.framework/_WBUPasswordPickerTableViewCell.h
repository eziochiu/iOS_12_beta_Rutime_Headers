/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface _WBUPasswordPickerTableViewCell : UITableViewCell {
    UIColor * _monogramBackgroundColor;
    UIView * _monogramBackgroundView;
    UILabel * _monogramLabel;
    WBSSavedPassword * _savedPassword;
    NSString * _searchPattern;
}

@property (nonatomic, readonly) WBSSavedPassword *savedPassword;
@property (nonatomic, readonly) NSString *searchPattern;

- (void).cxx_destruct;
- (void)_refreshMonogramViewBackgroundColorIfNeeded;
- (id)savedPassword;
- (id)searchPattern;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setIcon:(id)arg1;
- (void)setSavedPassword:(id)arg1 searchPattern:(id)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2;
- (void)webui_copyPassword;
- (void)webui_copyUserName;

@end
