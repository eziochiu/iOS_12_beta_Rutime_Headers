/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptMetricsController : SUScriptObject <ISURLBagObserver> {
    SSMetricsController * _metricsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_configureWithBagDictionary:(id)arg1;
- (id)attributeKeys;
- (void)bagDidChange:(id)arg1;
- (void)dealloc;
- (void)flushUnreportedEventsWithCompletionFunction:(id)arg1;
- (id)init;
- (void)recordEventWithTopic:(id)arg1 properties:(id)arg2 completionFunction:(id)arg3;
- (id)scriptAttributeKeys;

@end
