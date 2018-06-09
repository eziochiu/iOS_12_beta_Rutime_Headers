/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDefaultPluginEntryViewController : UIViewController <CKPluginEntryViewController> {
    CKBalloonView * _balloonView;
    IMBalloonPluginDataSource * _datasource;
    IMBalloonPlugin * _plugin;
    UIViewController<CKTranscriptBalloonPluginController> * _pluginBubbleViewController;
}

@property (nonatomic, retain) CKBalloonView *balloonView;
@property (nonatomic, retain) IMBalloonPluginDataSource *datasource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool loadedContentView;
@property (nonatomic, retain) IMBalloonPlugin *plugin;
@property (nonatomic, retain) UIViewController<CKTranscriptBalloonPluginController> *pluginBubbleViewController;
@property (readonly) Class superclass;
@property (readonly) bool wantsClearButton;
@property (readonly) bool wantsEdgeToEdgeLayout;

- (void).cxx_destruct;
- (id)_imageBalloon;
- (void)_loadBalloonView;
- (id)_transcriptPluginBalloon;
- (id)balloonView;
- (id)datasource;
- (void)dealloc;
- (void)didFinishAnimatedBoundsChange;
- (id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2;
- (id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 andPlugin:(id)arg3;
- (void)loadView;
- (bool)loadedContentView;
- (void)payloadWillClear;
- (void)payloadWillSend;
- (void)performHostAppResume;
- (void)performHostAppSuspend;
- (id)plugin;
- (id)pluginBubbleViewController;
- (void)setBalloonView:(id)arg1;
- (void)setDatasource:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)setPluginBubbleViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsClearButton;
- (bool)wantsEdgeToEdgeLayout;

@end