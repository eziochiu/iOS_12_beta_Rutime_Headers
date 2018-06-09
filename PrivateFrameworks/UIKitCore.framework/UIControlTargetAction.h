/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIControlTargetAction : NSObject {
    SEL  _action;
    bool  _cancelled;
    unsigned long long  _eventMask;
    id  _target;
}

@property (nonatomic) bool cancelled;

- (void).cxx_destruct;
- (bool)cancelled;
- (void)setCancelled:(bool)arg1;

@end
