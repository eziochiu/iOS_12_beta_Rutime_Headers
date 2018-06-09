/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarDisplayItemPlacementGroup : NSObject {
    long long  _maximumPriority;
    long long  _minimumPriority;
    NSArray * _placements;
}

@property (nonatomic) bool enabled;
@property (nonatomic, readonly) long long maximumPriority;
@property (nonatomic, readonly) long long minimumPriority;
@property (nonatomic, readonly, copy) NSArray *placements;

+ (id)groupWithPriority:(long long)arg1 placements:(id)arg2;

- (void).cxx_destruct;
- (bool)enabled;
- (long long)maximumPriority;
- (long long)minimumPriority;
- (id)placements;
- (void)setEnabled:(bool)arg1;

@end
