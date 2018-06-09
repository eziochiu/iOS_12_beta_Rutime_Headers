/* made by EzioChiu.
 */

@protocol CNUIUserActionContext <NSObject>

@required

- (<CNUIUserActionCurator> *)actionCurator;
- (<CNUIUserActionRecorder> *)actionRecorder;
- (<CNUIUserActionDialRequestOpener> *)dialRequestOpener;
- (<CNUIUserActionURLOpener> *)urlOpener;
- (<CNUIUserActionUserActivityOpener> *)userActivityOpener;

@end
