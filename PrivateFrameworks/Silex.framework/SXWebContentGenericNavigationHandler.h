/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentGenericNavigationHandler : NSObject <SXWebContentNavigationHandler> {
    <SXURLActionFactory> * _URLActionFactory;
    <SXActionManager> * _actionManager;
}

@property (nonatomic, readonly) <SXURLActionFactory> *URLActionFactory;
@property (nonatomic, readonly) <SXActionManager> *actionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLActionFactory;
- (id)actionForRequest:(id)arg1;
- (id)actionManager;
- (void)commitViewController:(id)arg1 URLRequest:(id)arg2;
- (unsigned long long)handleRequest:(id)arg1;
- (id)initWithActionManager:(id)arg1 URLActionFactory:(id)arg2;
- (id)previewViewControllerForRequest:(id)arg1;

@end
