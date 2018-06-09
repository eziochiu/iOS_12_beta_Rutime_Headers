/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelMarkerFeatureHandle : NSObject {
    struct LabelMarkerFeatureHandle { 
        unsigned char featureType; 
        long long featureIndex; 
        struct VKTileKey { 
            unsigned int z; 
            int x; 
            int y; 
            unsigned int pointSize; 
        } key; 
        int tileStyle; 
        unsigned int tileVersion; 
        GEOFeatureStyleAttributes *styleAttributes; 
    }  _actualHandle;
}

- (id).cxx_construct;
- (const /* Warning: unhandled struct encoding: '{LabelMarkerFeatureHandle=Cq{VKTileKey=IiiI}iI@}' */ struct LabelMarkerFeatureHandle { unsigned char x1; long long x2; struct VKTileKey { unsigned int x_3_1_1; int x_3_1_2; int x_3_1_3; unsigned int x_3_1_4; } x3; int x4; unsigned int x5; id x6; }*)actualHandle;
- (void)dealloc;
- (long long)featureIndex;
- (int)featureType;
- (id)initWithLabelMarkerHandle:(const /* Warning: unhandled struct encoding: '{LabelMarkerFeatureHandle=Cq{VKTileKey=IiiI}iI@}' */ struct LabelMarkerFeatureHandle { unsigned char x1; long long x2; struct VKTileKey { unsigned int x_3_1_1; int x_3_1_2; int x_3_1_3; unsigned int x_3_1_4; } x3; int x4; unsigned int x5; id x6; }*)arg1;
- (id)styleAttributes;
- (int)tileStyle;
- (unsigned int)tileVersion;
- (int)tileX;
- (int)tileY;
- (int)tileZ;

@end