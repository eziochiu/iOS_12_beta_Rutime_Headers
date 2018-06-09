/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentActionHandler : SXAnalyticsEvent <SXComponentActionHandler, SXPostActionHandler> {
    <SXActionManager> * _actionManager;
    <SXActionSerializer> * _actionSerializer;
    <SXAnalyticsReportingProvider> * _analyticsReportingProvider;
}

@property (nonatomic, readonly) <SXActionManager> *actionManager;
@property (nonatomic, readonly) <SXActionSerializer> *actionSerializer;
@property (nonatomic, readonly) <SXAnalyticsReportingProvider> *analyticsReportingProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionManager;
- (id)actionSerializer;
- (id)analyticsReportingProvider;
- (void)handleAction:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 invocationType:(unsigned long long)arg4;
- (void)handledAction:(id)arg1 state:(unsigned long long)arg2;
- (id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3;

@end
