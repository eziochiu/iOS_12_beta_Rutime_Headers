/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISelectableTextView : UITextView {
    bool  _allowsDefine;
}

@property bool allowsDefine;

- (bool)_canDefine;
- (void)_define:(id)arg1;
- (bool)allowsDefine;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)init;
- (void)setAllowsDefine:(bool)arg1;

@end
