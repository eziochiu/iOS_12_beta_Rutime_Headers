/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRDropDownTableViewCell : UITableViewCell {
    TVRCDevice * _device;
    UIView * _separator;
    bool  _showSeparator;
}

@property (nonatomic, retain) TVRCDevice *device;
@property (nonatomic, retain) UIView *separator;
@property (nonatomic) bool showSeparator;

- (void).cxx_destruct;
- (void)_applyFilterForDevice:(id)arg1;
- (id)device;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)separator;
- (void)setDevice:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setShowSeparator:(bool)arg1;
- (bool)showSeparator;

@end
