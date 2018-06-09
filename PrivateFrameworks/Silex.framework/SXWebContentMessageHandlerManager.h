/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentMessageHandlerManager : NSObject <SXWebContentMessageHandlerManager, WKScriptMessageHandler> {
    <SXWebContentLogger> * _logger;
    NSMutableDictionary * _messageHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXWebContentLogger> *logger;
@property (nonatomic, readonly) NSMutableDictionary *messageHandlers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addMessageHandler:(id)arg1 name:(id)arg2;
- (id)initWithUserContentController:(id)arg1 logger:(id)arg2;
- (id)logger;
- (id)messageHandlers;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

@end
