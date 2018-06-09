/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer <UIGestureRecognizerDelegate> {
    UIBarButtonItem * _barButtonItem;
    SEL  _longPressAction;
    id  _longPressTarget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)gestureRecognizerWithLongPressTarget:(id)arg1 action:(SEL)arg2 attachedToBarButtonItem:(id)arg3;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_invokeLongPressAction;
- (void)_updateMinimumPressDurationForContentSizeCategory:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)longPress:(id)arg1;

@end
