/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRXMetrics : NSObject {
    NSMutableDictionary * _sessionEventCounts;
}

@property (nonatomic, retain) NSMutableDictionary *sessionEventCounts;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)endSessionForKey:(id)arg1;
- (void)incrementKey:(id)arg1;
- (void)incrementKey:(id)arg1 andSessionKey:(id)arg2;
- (id)init;
- (id)sessionEventCounts;
- (void)setSessionEventCounts:(id)arg1;

@end
