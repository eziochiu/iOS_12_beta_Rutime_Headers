/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCLyricsReportingController : NSObject <ICEnvironmentMonitorObserver> {
    MPCJinglePlayActivityReportingController * _jinglePlayActivityReportingController;
    MPCReportingPlaybackObserver * _reportingPlaybackObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController;
@property (nonatomic, retain) MPCReportingPlaybackObserver *reportingPlaybackObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)init;
- (id)jinglePlayActivityReportingController;
- (void)recordLyricsViewEvent:(id)arg1;
- (id)reportingPlaybackObserver;
- (void)setJinglePlayActivityReportingController:(id)arg1;
- (void)setReportingPlaybackObserver:(id)arg1;

@end
