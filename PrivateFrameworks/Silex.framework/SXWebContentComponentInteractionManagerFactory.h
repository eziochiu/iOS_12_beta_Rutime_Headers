/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentComponentInteractionManagerFactory : NSObject <SXWebContentComponentInteractionManagerFactory> {
    <SXWebContentComponentInteractionHandlerFactory> * _componentInteractionHandlerFactory;
    <SXComponentInteractionHandlerManager> * _interactionHandlerManager;
    <SXWebContentInteractionProvider> * _interactionProvider;
}

@property (nonatomic, readonly) <SXWebContentComponentInteractionHandlerFactory> *componentInteractionHandlerFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXComponentInteractionHandlerManager> *interactionHandlerManager;
@property (nonatomic, readonly) <SXWebContentInteractionProvider> *interactionProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentInteractionHandlerFactory;
- (id)initWithInteractionProvider:(id)arg1 interactionHandlerManager:(id)arg2 componentInteractionHandlerFactory:(id)arg3;
- (id)interactionHandlerManager;
- (id)interactionManagerForComponentView:(id)arg1;
- (id)interactionProvider;

@end
