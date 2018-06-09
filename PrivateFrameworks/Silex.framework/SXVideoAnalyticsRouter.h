/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoAnalyticsRouter : NSObject <SXAnalyticsReporting> {
    unsigned long long  _currentPlaybackLocation;
    bool  _hasReroutedInitiatedPlaybackEvent;
    unsigned long long  _initiatedPlaybackLocation;
    NSMutableDictionary * _reporters;
}

@property (nonatomic) unsigned long long currentPlaybackLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasReroutedInitiatedPlaybackEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long initiatedPlaybackLocation;
@property (nonatomic, readonly) NSMutableDictionary *reporters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsReporterForEvent:(id)arg1;
- (unsigned long long)currentPlaybackLocation;
- (bool)hasReroutedInitiatedPlaybackEvent;
- (id)initWithInitiatedPlaybackLocation:(unsigned long long)arg1 analyticsReporter:(id)arg2;
- (unsigned long long)initiatedPlaybackLocation;
- (void)reportEvent:(id)arg1;
- (id)reporterForPlaybackLocation:(unsigned long long)arg1;
- (id)reporters;
- (void)setAnalyticsReporter:(id)arg1 forPlaybackLocation:(unsigned long long)arg2;
- (void)setCurrentPlaybackLocation:(unsigned long long)arg1;
- (void)setHasReroutedInitiatedPlaybackEvent:(bool)arg1;

@end
