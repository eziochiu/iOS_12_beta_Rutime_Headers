/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFSoundBehaviorOverridesMonitor : NSObject {
    MFFuture * _behaviorOverrideTypes;
    DNDEventBehaviorResolutionService * _dndBehaviorResolutionService;
    NSObject<OS_dispatch_queue> * _dndBehaviorResolutionServiceQueue;
}

@property (readonly) MFFuture *behaviorOverrideTypes;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_resolveDNDBehavior;
- (id)behaviorOverrideTypes;
- (id)init;

@end
