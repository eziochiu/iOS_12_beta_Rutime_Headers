/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RETrainingContext : NSObject <RETrainingSimulationCoordinator> {
    REConcurrentDictionary * _attributes;
    RERelevanceEngine * _relevanceEngine;
    RERemoteTrainingContext * _remoteContext;
}

@property (nonatomic, readonly) bool _wantsAutomaticRemoteContextForwarding;
@property (nonatomic, readonly) bool isCurrent;
@property (nonatomic, readonly) RERelevanceEngine *relevanceEngine;
@property (nonatomic, retain) RERemoteTrainingContext *remoteContext;

- (void).cxx_destruct;
- (void)_configureForRelevanceEngine:(id)arg1;
- (void)_didBecomeCurrent;
- (void)_didResignCurrent;
- (void)_trainWithElement:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3;
- (bool)_wantsAutomaticRemoteContextForwarding;
- (void)_willBecomeCurrent;
- (void)_willResignCurrent;
- (id)attributeForKey:(id)arg1;
- (void)becomeCurrent;
- (void)dealloc;
- (id)init;
- (bool)isCurrent;
- (bool)performSimulationCommand:(id)arg1 withOptions:(id)arg2;
- (id)relevanceEngine;
- (id)remoteContext;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setRemoteContext:(id)arg1;
- (void)trainWithElement:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3;

@end
