/* made by EzioChiu.
 */

@protocol SXComponentInsertionLayoutProvider <NSObject>

@required

- (SXColumnLayout *)columnLayout;
- (struct CGSize { double x1; double x2; })documentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForComponent:(id <SXComponent>)arg1;
- (<SXEdgeSpacing> *)suggestedMarginForMarker:(id <SXBlueprintMarker>)arg1;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
