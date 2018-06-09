/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBPreferences : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_reload;
- (id)description;
- (id)init;
- (void)reload;

@end
