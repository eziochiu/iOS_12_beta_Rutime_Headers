/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXActionComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor> {
    <SXActionProvider> * _actionProvider;
    <SXActionComponentInteractionHandlerFactory> * _factory;
    <SXComponentInteractionHandlerManager> * _interactionHandlerManager;
}

@property (nonatomic, readonly) <SXActionProvider> *actionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXActionComponentInteractionHandlerFactory> *factory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXComponentInteractionHandlerManager> *interactionHandlerManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionProvider;
- (id)factory;
- (id)initWithActionProvider:(id)arg1 interactionHandlerFactory:(id)arg2 interactionHandlerManager:(id)arg3;
- (id)interactionHandlerManager;
- (void)processComponent:(id)arg1 view:(id)arg2;

@end
