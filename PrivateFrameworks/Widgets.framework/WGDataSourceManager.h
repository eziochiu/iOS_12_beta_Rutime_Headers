/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGDataSourceManager : NSObject <_WGParentDataSourceManager> {
    bool  _didBegin;
    NSMutableDictionary * _identifiersToWidgetChangeHandlers;
    WGWidgetDataSourceManager * _widgetDataSourceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)__sharedInstance;
+ (void)requestSharedDataSourceManager:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_begin:(id /* block */)arg1;
- (void)_start:(id /* block */)arg1;
- (void)_stop:(id /* block */)arg1;
- (void)addWidgetDataSourceChangeHandler:(id /* block */)arg1 forIdentifier:(id)arg2;
- (void)availableWidgetsWithCompletion:(id /* block */)arg1;
- (void)childDataSourceManagerDataSourcesDidChange:(id)arg1;
- (void)removeChangeHandlersWithIdentifier:(id)arg1;

@end
