/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLSessionManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _cachedSessions;
}

+ (id)sharedSessionManager;

- (void).cxx_destruct;
- (void)addSession:(id)arg1 withIdentifier:(id)arg2;
- (id)init;
- (void)removeSessionWithIdentifier:(id)arg1;
- (id)sessionWithConfiguration:(id)arg1;
- (id)sessionWithIdentifier:(id)arg1;

@end
