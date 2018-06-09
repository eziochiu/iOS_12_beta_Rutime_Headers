/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIScreenInitialDisplayConfigurationLoader : NSObject {
    UISDisplayContext * _context;
    bool  _hasRequestedPreload;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) UISDisplayContext *initialDisplayContext;

+ (id)sharedLoader;

- (void).cxx_destruct;
- (void)_startPreloadInitialDisplayContext;
- (id)initialDisplayConfiguration;
- (id)initialDisplayContext;

@end
