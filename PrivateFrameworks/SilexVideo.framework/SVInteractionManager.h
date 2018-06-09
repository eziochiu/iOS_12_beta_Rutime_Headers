/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVInteractionManager : NSObject <SVInteractionManager, SVVideoTransitionObserver> {
    NSMapTable * _interactionHandlerFactories;
    NSMapTable * _interactionHandlers;
    NSMapTable * _interactionObserverFactories;
    NSMapTable * _interactionObservers;
    NSMutableSet * _interactions;
    NSMapTable * _registeredHandlers;
    NSMapTable * _registeredObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *interactionHandlerFactories;
@property (nonatomic, readonly) NSMapTable *interactionHandlers;
@property (nonatomic, readonly) NSMapTable *interactionObserverFactories;
@property (nonatomic, readonly) NSMapTable *interactionObservers;
@property (nonatomic, readonly) NSMutableSet *interactions;
@property (nonatomic, readonly) NSMapTable *registeredHandlers;
@property (nonatomic, readonly) NSMapTable *registeredObservers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureInteraction:(id)arg1 withHandler:(id)arg2 observer:(id)arg3;
- (void)configureInteractionManagementForVideo:(id)arg1;
- (id)init;
- (id)interactionHandlerFactories;
- (id)interactionHandlerForInteraction:(id)arg1 withVideo:(id)arg2;
- (id)interactionHandlers;
- (id)interactionObserverFactories;
- (id)interactionObserverForInteraction:(id)arg1 withVideo:(id)arg2;
- (id)interactionObservers;
- (id)interactions;
- (void)registerInteraction:(id)arg1 withInteractionHandler:(id)arg2;
- (void)registerInteraction:(id)arg1 withInteractionHandlerFactory:(id)arg2;
- (void)registerInteraction:(id)arg1 withInteractionObserver:(id)arg2;
- (void)registerInteraction:(id)arg1 withInteractionObserverFactory:(id)arg2;
- (id)registeredHandlers;
- (id)registeredObservers;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
