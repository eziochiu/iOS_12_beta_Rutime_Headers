/* made by EzioChiu.
 */

@protocol ASVGlyphStateDelegate <NSObject>

@required

- (void)quaternionTargetChanged;
- (void)scaleTargetChanged;
- (void)snapStateChanged;
- (void)translationTargetChanged;

@end
