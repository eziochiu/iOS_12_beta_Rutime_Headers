/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDragLiftedItem : NSObject {
    double  _liftAlpha;
    _UIPlatterView * _platterView;
    bool  _sourceViewWasAdded;
    UITargetedDragPreview * _targetedPreview;
}

@property (nonatomic) double liftAlpha;
@property (nonatomic, retain) _UIPlatterView *platterView;
@property (nonatomic) bool sourceViewWasAdded;
@property (nonatomic, retain) UITargetedDragPreview *targetedPreview;

- (void).cxx_destruct;
- (double)liftAlpha;
- (id)platterView;
- (void)setLiftAlpha:(double)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setSourceViewWasAdded:(bool)arg1;
- (void)setTargetedPreview:(id)arg1;
- (bool)sourceViewWasAdded;
- (id)targetedPreview;

@end
