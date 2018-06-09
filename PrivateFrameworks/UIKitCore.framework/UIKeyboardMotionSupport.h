/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject> {
    <UISplitKeyboardSource> * _controller;
    UIScreen * _screen;
}

@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UISplitKeyboardSource> *masterController;
@property (readonly) Class superclass;

+ (id)supportForScreen:(id)arg1;

- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_intendedScreen;
- (bool)_matchingOptions:(id)arg1;
- (id)_options;
- (void)_updatedController;
- (void)dealloc;
- (id)masterController;
- (void)setMasterController:(id)arg1;

@end
