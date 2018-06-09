/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentInteractionProvider : NSObject <SXWebContentInteractionProvider, SXWebContentMessageHandler> {
    NSMutableArray * _blocks;
    <SXWebContentInteraction> * _interaction;
    <SXWebContentInteractionFactory> * _interactionFactory;
    <SXWebContentLogger> * _logger;
}

@property (nonatomic, readonly) NSMutableArray *blocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXWebContentInteraction> *interaction;
@property (nonatomic, readonly) <SXWebContentInteractionFactory> *interactionFactory;
@property (nonatomic, readonly) <SXWebContentLogger> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blocks;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithMessageHandlerManager:(id)arg1 documentStateProvider:(id)arg2 interactionFactory:(id)arg3 logger:(id)arg4;
- (id)interaction;
- (id)interactionFactory;
- (id)logger;
- (void)onChange:(id /* block */)arg1;

@end
