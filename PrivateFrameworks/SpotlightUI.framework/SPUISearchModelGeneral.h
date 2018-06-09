/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchModelGeneral : SPUISearchModel {
    SPClientSession * _session;
}

@property (retain) SPClientSession *session;

- (void).cxx_destruct;
- (void)activate;
- (void)clear;
- (void)deactivate;
- (bool)forceStableResults;
- (bool)infinitePatience;
- (id)init;
- (id)session;
- (void)setForceStableResults:(bool)arg1;
- (void)setInfinitePatience:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)updateWithQueryContext:(id)arg1;
- (void)updatesDispabled;
- (void)updatesEnabled;

@end
