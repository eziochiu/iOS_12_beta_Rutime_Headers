/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIClickInteraction : NSObject <UIInteraction, _UIClickInteractionProgressProvidingDelegate> {
    <UIClickInteractionDelegate> * _delegate;
    _UIClickFeedbackGenerator * _feedbackGenerator;
    _UIPreviewInteractionHighlighter * _interactionEffect;
    bool  _interactive;
    bool  _latching;
    <_UIClickInteractionProgressProviding> * _progressProvider;
    bool  _selected;
    long long  _state;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIClickInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLatching, nonatomic) bool latching;
@property (nonatomic, retain) <_UIClickInteractionProgressProviding> *progressProvider;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_createFeedbackGenerator;
- (void)_endInteractionIfNeeded;
- (void)_prepareForInteraction;
- (Class)_progressProviderClass;
- (void)_updateProgressProvider;
- (void)cancelInteraction;
- (void)clickProgressProvider:(id)arg1 didUpdateWithOverallProgress:(double)arg2 currentState:(long long)arg3 ended:(bool)arg4;
- (void)clickProgressProviderDidBegin:(id)arg1;
- (void)clickProgressProviderDidEnd:(id)arg1;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (bool)isLatching;
- (bool)isSelected;
- (id)progressProvider;
- (void)setDelegate:(id)arg1;
- (void)setLatching:(bool)arg1;
- (void)setProgressProvider:(id)arg1;
- (void)setSelected:(bool)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
