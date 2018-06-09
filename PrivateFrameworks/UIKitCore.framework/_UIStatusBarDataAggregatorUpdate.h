/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarDataAggregatorUpdate : NSObject {
    bool  _animated;
    _UIStatusBarDataEntry * _entry;
}

@property (nonatomic) bool animated;
@property (nonatomic, retain) _UIStatusBarDataEntry *entry;

+ (id)updateWithEntry:(id)arg1;

- (void).cxx_destruct;
- (bool)animated;
- (id)entry;
- (void)setAnimated:(bool)arg1;
- (void)setEntry:(id)arg1;

@end
