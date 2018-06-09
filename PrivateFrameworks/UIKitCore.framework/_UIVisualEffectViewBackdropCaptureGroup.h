/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {
    NSPointerArray * _backdrops;
    bool  _disableInPlaceFiltering;
    NSString * _groupName;
    double  _minimumScale;
    double  _scale;
}

@property (nonatomic) bool disableInPlaceFiltering;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic) double minimumScale;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (bool)_allowInPlaceFiltering;
- (void)_applyScaleHint:(double)arg1;
- (void)addBackdrop:(id)arg1 update:(bool)arg2;
- (id)description;
- (bool)disableInPlaceFiltering;
- (id)groupName;
- (long long)indexOfBackdropView:(id)arg1;
- (id)init;
- (id)initWithBackdrop:(id)arg1;
- (double)minimumScale;
- (void)removeBackdrop:(id)arg1 update:(bool)arg2;
- (double)scale;
- (void)setDisableInPlaceFiltering:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setMinimumScale:(double)arg1;
- (void)setScale:(double)arg1;
- (void)updateAllBackdropViews;

@end
