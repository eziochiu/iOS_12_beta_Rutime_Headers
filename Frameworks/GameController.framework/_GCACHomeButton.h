/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCACHomeButton : _GCControllerButtonInput {
    <_GCACHomeButtonDelegate> * _delegate;
    bool  needsReset;
}

- (void).cxx_destruct;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
