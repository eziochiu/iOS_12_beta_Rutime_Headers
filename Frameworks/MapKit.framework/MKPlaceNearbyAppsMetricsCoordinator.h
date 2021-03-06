/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceNearbyAppsMetricsCoordinator : NSObject {
    NSMutableArray * _callbacks;
    bool  _controllerReady;
    SSMetricsController * _metricsController;
    NSString * _pageContext;
    NSString * _topic;
    SSURLBag * _urlBag;
}

@property (nonatomic, readonly) NSMutableArray *callbacks;
@property (nonatomic) bool controllerReady;
@property (nonatomic, copy) NSString *pageContext;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, readonly) SSURLBag *urlBag;

- (void).cxx_destruct;
- (id)callbacks;
- (bool)controllerReady;
- (void)getMetricsControllerWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConfigurationIdentifier:(id)arg1;
- (id)pageContext;
- (void)performCallbacks;
- (void)sendEvent:(id)arg1;
- (void)setControllerReady:(bool)arg1;
- (void)setPageConfiguration:(id)arg1;
- (void)setPageContext:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;
- (id)urlBag;

@end
