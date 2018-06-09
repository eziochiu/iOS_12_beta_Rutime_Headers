/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPagePerformanceController : NSObject {
    unsigned long long  _baseAbsoluteTime;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _baseTimeval;
    <_TVPagePerformanceDelegate> * _delegate;
    unsigned long long  _pageCompleteDuration;
    bool  _pageHasSubpages;
    bool  _pageIsLoading;
    unsigned long long  _pageRenderDuration;
    unsigned long long  _pageResourceDuration;
    unsigned long long  _pageSetupDuration;
    unsigned long long  _pageTransitionDuration;
    bool  _pageWasInterrupted;
    bool  _pageWasUpdated;
    NSMutableArray * _templateEntries;
    unsigned long long  _viewDidAppear;
    unsigned long long  _viewDidDisappear;
    unsigned long long  _viewDidLoad;
    unsigned long long  _viewWillAppear;
    unsigned long long  _viewWillDisappear;
    unsigned long long  _viewWillLoad;
}

@property (nonatomic) <_TVPagePerformanceDelegate> *delegate;
@property (nonatomic, readonly) NSDictionary *metrics;
@property (nonatomic) unsigned long long pageCompleteDuration;
@property (nonatomic) bool pageHasSubpages;
@property (nonatomic) bool pageIsLoading;
@property (nonatomic) unsigned long long pageRenderDuration;
@property (nonatomic) unsigned long long pageResourceDuration;
@property (nonatomic) unsigned long long pageSetupDuration;
@property (nonatomic) unsigned long long pageTransitionDuration;
@property (nonatomic) bool pageWasInterrupted;
@property (nonatomic) bool pageWasUpdated;
@property (nonatomic) unsigned long long viewDidAppear;
@property (nonatomic) unsigned long long viewDidDisappear;
@property (nonatomic) unsigned long long viewDidLoad;
@property (nonatomic) unsigned long long viewWillAppear;
@property (nonatomic) unsigned long long viewWillDisappear;
@property (nonatomic) unsigned long long viewWillLoad;

+ (bool)isPerformanceUIEnabled;
+ (void)postNotificationForImageProxy:(id)arg1 withLoadingStatus:(bool)arg2;

- (void).cxx_destruct;
- (void)_calculatePageDurations;
- (bool)_isMetricsReady;
- (void)_maybeDeliverMetrics;
- (id)buildPagePerformanceView;
- (id)delegate;
- (id)getEntryForTemplate:(id)arg1;
- (id)init;
- (void)markViewDidAppear;
- (void)markViewDidDisappear;
- (void)markViewDidLoad;
- (void)markViewWillAppear;
- (void)markViewWillDisappear;
- (void)markViewWillLoad;
- (id)metrics;
- (unsigned long long)pageCompleteDuration;
- (bool)pageHasSubpages;
- (bool)pageIsLoading;
- (unsigned long long)pageRenderDuration;
- (unsigned long long)pageResourceDuration;
- (unsigned long long)pageSetupDuration;
- (unsigned long long)pageTransitionDuration;
- (bool)pageWasInterrupted;
- (bool)pageWasUpdated;
- (void)setDelegate:(id)arg1;
- (void)setPageCompleteDuration:(unsigned long long)arg1;
- (void)setPageHasSubpages:(bool)arg1;
- (void)setPageIsLoading:(bool)arg1;
- (void)setPageRenderDuration:(unsigned long long)arg1;
- (void)setPageResourceDuration:(unsigned long long)arg1;
- (void)setPageSetupDuration:(unsigned long long)arg1;
- (void)setPageTransitionDuration:(unsigned long long)arg1;
- (void)setPageWasInterrupted:(bool)arg1;
- (void)setPageWasUpdated:(bool)arg1;
- (void)setViewDidAppear:(unsigned long long)arg1;
- (void)setViewDidDisappear:(unsigned long long)arg1;
- (void)setViewDidLoad:(unsigned long long)arg1;
- (void)setViewWillAppear:(unsigned long long)arg1;
- (void)setViewWillDisappear:(unsigned long long)arg1;
- (void)setViewWillLoad:(unsigned long long)arg1;
- (unsigned long long)templateDidComplete;
- (unsigned long long)viewDidAppear;
- (unsigned long long)viewDidDisappear;
- (unsigned long long)viewDidLoad;
- (unsigned long long)viewWillAppear;
- (unsigned long long)viewWillDisappear;
- (unsigned long long)viewWillLoad;

@end