/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISpecializedInputMode : UIKeyboardInputMode {
    Class  _viewControllerClass;
}

@property (nonatomic, retain) Class viewControllerClass;

- (bool)includeBarHeight;
- (void)setViewControllerClass:(Class)arg1;
- (Class)viewControllerClass;

@end
