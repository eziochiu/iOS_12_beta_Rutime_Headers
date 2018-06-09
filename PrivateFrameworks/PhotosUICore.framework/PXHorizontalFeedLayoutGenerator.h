/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXHorizontalFeedLayoutGenerator : PXFeedLayoutGenerator {
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    double  _referenceHeight;
}

@property (nonatomic) double referenceHeight;

- (bool)_addColumnWithContiguousTiles:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1 count:(long long)arg2;
- (bool)_addColumnWithTiles:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1 imageFrames:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 count:(long long)arg3;
- (bool)_addSpecialSequenceBlock:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (void)_enumerateColumnFramesWithContiguousTiles:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1 count:(long long)arg2 useMagneticGuidelines:(bool)arg3 block:(id /* block */)arg4;
- (bool)_hasLeftSuboptimalColumn;
- (bool)_isAtEndOfColumn;
- (bool)_parseSingleTile;
- (bool)_parseSpecialSequence;
- (bool)_parseSpecialSubsequenceWithColumnRequired:(bool)arg1 columnParsed:(bool*)arg2;
- (bool)_parseSpecialTileTriplet;
- (bool)_parseTilePair;
- (bool)_parseTileTriplet;
- (bool)_scanNonPanoramaSequence:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1 count:(long long)arg2;
- (bool)_scanSpecialSequenceBlock:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (bool)_scanSpecialSequenceColumn:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1 count:(long long*)arg2;
- (bool)_scanTripletWithLargeLead:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (bool)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (double)referenceHeight;
- (void)setReferenceHeight:(double)arg1;
- (void)willParseTiles;

@end
