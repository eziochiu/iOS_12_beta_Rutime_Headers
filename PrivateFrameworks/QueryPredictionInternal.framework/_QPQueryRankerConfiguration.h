/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPQueryRankerConfiguration : NSObject {
    NSMutableDictionary * _notifyRegistrations;
    NSObject<OS_dispatch_queue> * queue;
}

@property (readonly) bool featureDisabled;
@property (retain) NSMutableDictionary *notifyRegistrations;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)featureDisabled;
- (id)init;
- (id)notifyRegistrations;
- (void)registerHandlerForDatabaseChangeNotification:(id /* block */)arg1;
- (void)registerHandlerForDeleteDataNotification:(id /* block */)arg1;
- (void)registerHandlerForFeatureDisabledNotification:(id /* block */)arg1;
- (void)registerHandlerForNotification:(id)arg1 handler:(id /* block */)arg2;
- (void)registerHandlerForSuggestionModelChangedSignificantlyNotification:(id /* block */)arg1;
- (void)setNotifyRegistrations:(id)arg1;

@end