/* made by EzioChiu.
 */

@protocol STUsageDetailsViewModelCoordinator <NSObject>

@required

- (void)startRefreshingUsageData;
- (void)stopRefreshingUsageData;
- (STUsageDetailsViewModel *)viewModel;

@end
