/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFSplashButton : NSObject {
    id /* block */  _action;
    UIButton * _button;
    long long  _style;
}

@property (copy) id /* block */ action;
@property (retain) UIButton *button;
@property long long style;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)button;
- (void)setAction:(id /* block */)arg1;
- (void)setButton:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
