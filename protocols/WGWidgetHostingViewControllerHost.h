/* made by EzioChiu.
 */

@protocol WGWidgetHostingViewControllerHost <NSObject>

@optional

- (long long)largestAvailableDisplayModeForWidget:(WGWidgetHostingViewController *)arg1;
- (bool)shouldPurgeArchivedSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (bool)shouldPurgeNonASTCSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (bool)shouldPurgeNonCAMLSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (bool)shouldRemoveSnapshotWhenNotVisibleForWidget:(WGWidgetHostingViewController *)arg1;
- (long long)userSpecifiedDisplayModeForWidget:(WGWidgetHostingViewController *)arg1;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
- (void)widget:(WGWidgetHostingViewController *)arg1 didEncounterProblematicSnapshotAtURL:(NSURL *)arg2;
- (void)widget:(WGWidgetHostingViewController *)arg1 didRemoveSnapshotAtURL:(NSURL *)arg2;

@end
