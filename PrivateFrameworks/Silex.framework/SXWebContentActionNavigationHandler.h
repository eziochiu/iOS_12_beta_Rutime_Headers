/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentActionNavigationHandler : NSObject <SXWebContentNavigationHandler> {
    <SXActionManager> * _actionManager;
    <SXActionProvider> * _actionProvider;
}

@property (nonatomic, readonly) <SXActionManager> *actionManager;
@property (nonatomic, readonly) <SXActionProvider> *actionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionManager;
- (id)actionProvider;
- (unsigned long long)handleRequest:(id)arg1;
- (id)initWithActionProvider:(id)arg1 actionManager:(id)arg2;

@end
