/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextPasteSession : NSObject <UITextPasteSession> {
    UITextPasteController * _controller;
    UITextPasteCoordinator * _coordinator;
    <UITextPasteSessionDelegate> * _delegate;
    NSAttributedString * _pasteResult;
    bool  _pastingBlocked;
    <_UITextPasteProgressSupport> * _progressSupport;
    UITextRange * _range;
}

@property (nonatomic) UITextPasteController *controller;
@property (nonatomic, retain) UITextPasteCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITextPasteSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSAttributedString *pasteResult;
@property (getter=isPastingBlocked, nonatomic) bool pastingBlocked;
@property (nonatomic, retain) <_UITextPasteProgressSupport> *progressSupport;
@property (nonatomic, retain) UITextRange *range;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controller;
- (id)coordinator;
- (id)delegate;
- (void)finishPastingIfUnblocked;
- (void)finishPastingIfUnblockedWithAnimator:(id)arg1;
- (bool)isPastingBlocked;
- (id)pasteResult;
- (void)pasteWithAnimator:(id)arg1;
- (id)positionedPasteResult;
- (id)progressSupport;
- (id)range;
- (void)setController:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasteResult:(id)arg1;
- (void)setPastingBlocked:(bool)arg1;
- (void)setProgressSupport:(id)arg1;
- (void)setRange:(id)arg1;

@end
