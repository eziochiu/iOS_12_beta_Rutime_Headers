/* made by EzioChiu.
 */

@protocol NUArticleActivityFactory <NSObject>

@required

- (<NUActivityProvider> *)activityProviderForHeadline:(id <FCHeadlineProviding>)arg1 reportConcernViewPresenter:(id <NUReportConcernViewPresenter>)arg2 URLModifier:(id <NUURLModifying>)arg3;

@end
