/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityBlockCustomAction : UIAccessibilityCustomAction {
    id /* block */  _handler;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (bool)_handleCustomAction:(id)arg1;
- (id /* block */)handler;
- (id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initWithName:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setHandler:(id /* block */)arg1;

@end
