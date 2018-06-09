/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICanvasMetricsLegacyCalculator : NSObject <_UICanvasMetricsUpdating> {
    _UICanvas * _canvas;
}

@property (nonatomic) _UICanvas *canvas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)canvas;
- (void)setCanvas:(id)arg1;
- (void)updateMetricsOnWindows:(id)arg1 animated:(bool)arg2;

@end
