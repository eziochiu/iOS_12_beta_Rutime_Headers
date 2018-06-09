/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPagePerformanceTemplateEntry : NSObject {
    NSHashTable * _initialOnScreenImageProxies;
    bool  _listeningForImageProxyDidLoad;
    bool  _listeningForImageProxyWillLoad;
    _TVPagePerformanceController * _performanceController;
    unsigned long long  _templateDidLoadLastImageProxy;
    unsigned long long  _templateDidLoadResources;
    unsigned long long  _templateDidRender;
    unsigned long long  _templateDidTransition;
    IKViewElement * _templateElement;
    NSString * _templateElementName;
    unsigned long long  _templateUpdateCount;
    unsigned long long  _templateWillLoadFirstImageProxy;
    unsigned long long  _templateWillLoadResources;
    unsigned long long  _templateWillRender;
    unsigned long long  _templateWillTransition;
}

@property (nonatomic) _TVPagePerformanceController *performanceController;
@property (nonatomic) unsigned long long templateDidLoadLastImageProxy;
@property (nonatomic) unsigned long long templateDidLoadResources;
@property (nonatomic) unsigned long long templateDidRender;
@property (nonatomic) unsigned long long templateDidTransition;
@property (nonatomic) IKViewElement *templateElement;
@property (nonatomic, copy) NSString *templateElementName;
@property (nonatomic, readonly) unsigned long long templateRenderDuration;
@property (nonatomic, readonly) unsigned long long templateResourcesDuration;
@property (nonatomic, readonly) unsigned long long templateTransitionDuration;
@property (nonatomic) unsigned long long templateUpdateCount;
@property (nonatomic) unsigned long long templateWillLoadFirstImageProxy;
@property (nonatomic) unsigned long long templateWillLoadResources;
@property (nonatomic) unsigned long long templateWillRender;
@property (nonatomic) unsigned long long templateWillTransition;

- (void).cxx_destruct;
- (void)_beginListeningForInitialImageProxyLoadNotifications;
- (void)_maybeStopListeningForInitialImageProxyLoadNotifications;
- (void)_receivedImageProxyDidLoadNotification:(id)arg1;
- (void)_receivedImageProxyWillLoadNotification:(id)arg1;
- (void)_stopListeningForInitialImageProxyLoadNotifications;
- (void)dealloc;
- (id)initWithPagePerformanceController:(id)arg1 forTemplateElement:(id)arg2;
- (void)markTemplateDidRender;
- (void)markTemplateDidTransition;
- (void)markTemplateWillRender;
- (void)markTemplateWillTransition;
- (id)performanceController;
- (void)setPerformanceController:(id)arg1;
- (void)setTemplateDidLoadLastImageProxy:(unsigned long long)arg1;
- (void)setTemplateDidLoadResources:(unsigned long long)arg1;
- (void)setTemplateDidRender:(unsigned long long)arg1;
- (void)setTemplateDidTransition:(unsigned long long)arg1;
- (void)setTemplateElement:(id)arg1;
- (void)setTemplateElementName:(id)arg1;
- (void)setTemplateUpdateCount:(unsigned long long)arg1;
- (void)setTemplateWillLoadFirstImageProxy:(unsigned long long)arg1;
- (void)setTemplateWillLoadResources:(unsigned long long)arg1;
- (void)setTemplateWillRender:(unsigned long long)arg1;
- (void)setTemplateWillTransition:(unsigned long long)arg1;
- (unsigned long long)templateDidLoadLastImageProxy;
- (unsigned long long)templateDidLoadResources;
- (unsigned long long)templateDidRender;
- (unsigned long long)templateDidTransition;
- (id)templateElement;
- (id)templateElementName;
- (unsigned long long)templateRenderDuration;
- (unsigned long long)templateResourcesDuration;
- (unsigned long long)templateTransitionDuration;
- (unsigned long long)templateUpdateCount;
- (unsigned long long)templateWillLoadFirstImageProxy;
- (unsigned long long)templateWillLoadResources;
- (unsigned long long)templateWillRender;
- (unsigned long long)templateWillTransition;

@end
