/* made by EzioChiu.
 */

@protocol PXGadget <NSObject>

@required

- (<PXGadgetDelegate> *)delegate;
- (PXGadgetSpec *)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (void)setDelegate:(id <PXGadgetDelegate>)arg1;
- (void)setGadgetSpec:(PXGadgetSpec *)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@optional

- (NSString *)accessoryButtonTitle;
- (unsigned long long)accessoryButtonType;
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (void)contentHasBeenSeen;
- (struct NSObject { Class x1; }*)contentView;
- (struct NSObject { Class x1; }*)contentViewController;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (NSArray *)debugURLsForDiagnostics;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(bool)arg2;
- (void)gadgetControllerHasAppeared;
- (bool)hasLoadedContentData;
- (unsigned long long)headerStyle;
- (void)loadContentData;
- (NSString *)localizedTitle;
- (void)preloadResources;
- (struct NSObject { Class x1; }*)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(struct NSObject { Class x1; }*)arg2 outSourceRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (void)setVisibleContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)supportsAssetsDrop;
- (bool)supportsHighlighting;
- (bool)supportsSelection;
- (NSString *)uniqueGadgetIdentifier;
- (void)unloadContentData;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (void)userDidSelectGadget;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;

@end
