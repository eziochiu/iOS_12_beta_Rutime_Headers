/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsDonater : NSObject <MapsSuggestionsObject> {
    NSObject<OS_dispatch_source> * _closeTimer;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)_closeConnection;
- (void)_initCloseTimerIfNecessary;
- (bool)_openConnectionIfNecessary;
- (void)_scheduleCloseConnection;
- (void)_unscheduleCloseConnection;
- (void)dealloc;
- (bool)donateETA:(id)arg1 entry:(id)arg2;
- (id)init;
- (struct NSString { Class x1; }*)uniqueName;

@end
