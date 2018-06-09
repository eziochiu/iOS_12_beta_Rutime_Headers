/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _RESignificantTimeChangeNotifier : NSObject {
    REUpNextScheduler * _scheduler;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notify;
- (void)dealloc;
- (id)init;

@end
