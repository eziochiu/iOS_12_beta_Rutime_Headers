/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDOMHTMLOptionPickerCell : UIPickerContentView {
    bool  _disabled;
}

@property (nonatomic) bool disabled;

- (bool)_isSelectable;
- (bool)disabled;
- (id)initCommon;
- (id)initWithHTMLOptionNode:(id)arg1;
- (void)setDisabled:(bool)arg1;

@end
