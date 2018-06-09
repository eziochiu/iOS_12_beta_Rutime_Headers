/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKReportProblemRemoteUIController : GKRemoteUIController {
    GKPlayer * _problemPlayer;
    NSURL * _url;
}

@property (nonatomic, retain) GKPlayer *problemPlayer;
@property (nonatomic, retain) NSURL *url;

+ (id)controllerForProblemPlayer:(id)arg1 completionHandler:(id /* block */)arg2;

- (id)bagKey;
- (void)dealloc;
- (id)fallbackURL;
- (id)initWithProblemPlayer:(id)arg1;
- (id)postBodyForInitialLoad;
- (int)preferredLayoutStyle;
- (id)problemPlayer;
- (void)setProblemPlayer:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
