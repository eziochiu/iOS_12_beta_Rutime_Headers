/* made by EzioChiu.
 */

@protocol CKPluginEntryViewController <NSObject>

@required

- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@optional

- (void)didFinishAnimatedBoundsChange;
- (NSArray *)framesOfVisibleContentViewInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (id)initWithDataSource:(IMBalloonPluginDataSource *)arg1 entryViewDelegate:(id <CKPluginEntryViewControllerDelegate>)arg2;
- (bool)loadedContentView;
- (NSString *)payloadBundleID;
- (void)payloadWillClear;
- (void)payloadWillSave;
- (void)payloadWillSend;
- (void)performHostAppResume;
- (void)performHostAppSuspend;
- (bool)wantsClearButton;
- (bool)wantsEdgeToEdgeLayout;
- (void)willAnimateBoundsChange;

@end
