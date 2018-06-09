/* made by EzioChiu.
 */

@protocol TSTCustomStrokeProviding <NSObject>

@required

- (TSTStrokeLayer *)strokeLayerForBottomOfRow:(unsigned short)arg1;
- (TSTStrokeLayer *)strokeLayerForLeftSideOfColumn:(unsigned char)arg1;
- (TSTStrokeLayer *)strokeLayerForRightSideOfColumn:(unsigned char)arg1;
- (TSTStrokeLayer *)strokeLayerForTopOfRow:(unsigned short)arg1;

@end
