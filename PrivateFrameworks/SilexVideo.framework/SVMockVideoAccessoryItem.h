/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVMockVideoAccessoryItem : NSObject <SVAccessoryItem> {
    unsigned long long  _displayMode;
    bool  _transitionCompletionBlockResult;
    UIView * _view;
    bool  _wasNotifiedOfAnimateAlongside;
    bool  _wasNotifiedOfWillTransition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool transitionCompletionBlockResult;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic) bool wasNotifiedOfAnimateAlongside;
@property (nonatomic) bool wasNotifiedOfWillTransition;

- (void).cxx_destruct;
- (unsigned long long)displayMode;
- (id)init;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setTransitionCompletionBlockResult:(bool)arg1;
- (void)setWasNotifiedOfAnimateAlongside:(bool)arg1;
- (void)setWasNotifiedOfWillTransition:(bool)arg1;
- (bool)transitionCompletionBlockResult;
- (id)view;
- (bool)wasNotifiedOfAnimateAlongside;
- (bool)wasNotifiedOfWillTransition;
- (void)willTransitionToDisplayMode:(unsigned long long)arg1 withTransitionCoordinator:(id)arg2;

@end
