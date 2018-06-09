/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIVariableHeightCell : RemoteUITableViewCell {
    bool  _supportsAccessory;
}

@property (nonatomic) bool supportsAccessory;

- (double)height;
- (void)layoutSubviews;
- (void)setSupportsAccessory:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeForTextLabel:(id)arg1 width:(double)arg2;
- (bool)supportsAccessory;

@end
