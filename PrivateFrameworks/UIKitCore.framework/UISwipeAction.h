/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISwipeAction : UIContextualAction {
    UIVisualEffect * _backgroundEffect;
    bool  _canBeTriggeredBySwipe;
    id /* block */  _completionHandler;
    bool  _resetsSwipedRow;
}

@property (nonatomic, copy) UIVisualEffect *backgroundEffect;
@property (nonatomic) bool canBeTriggeredBySwipe;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) UIImage *icon;
@property (nonatomic) bool resetsSwipedRow;

+ (id)swipeActionWithStyle:(long long)arg1 title:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)backgroundEffect;
- (bool)canBeTriggeredBySwipe;
- (id)color;
- (id /* block */)completionHandler;
- (id)icon;
- (id)init;
- (void)resetSwipedRow;
- (bool)resetsSwipedRow;
- (void)setBackgroundEffect:(id)arg1;
- (void)setCanBeTriggeredBySwipe:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setIcon:(id)arg1;
- (void)setResetsSwipedRow:(bool)arg1;

@end
