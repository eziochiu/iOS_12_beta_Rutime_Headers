/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarGestureHandler : NSObject <UIGestureRecognizerDelegatePrivate> {
    <_UINavigationBarGestureHandlerDelegate> * _delegate;
    long long  _idiom;
    UINavigationBar * _navigationBar;
    UISwipeGestureRecognizer * _popSwipeGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UINavigationBarGestureHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long idiom;
@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePopSwipe:(id)arg1;
- (id)delegate;
- (long long)idiom;
- (id)initWithNavigationBar:(id)arg1;
- (id)navigationBar;
- (void)setDelegate:(id)arg1;
- (void)setIdiom:(long long)arg1;

@end
