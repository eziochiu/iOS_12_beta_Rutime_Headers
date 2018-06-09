/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKStroke : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __untransformedBounds;
    struct _PKStrokePoint { 
        double timestamp; 
        struct CGPoint { 
            double x; 
            double y; 
        } location; 
        double radius; 
        double aspectRatio; 
        double edgeWidth; 
        double force; 
        double azimuth; 
        double altitude; 
        double opacity; 
    }  _baseValues;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _clipNormal;
    struct CGPoint { 
        double x; 
        double y; 
    }  _clipOrigin;
    bool  _clipped;
    bool  _hidden;
    bool  _inflight;
    PKInk * _ink;
    long long  _inputType;
    NSMutableArray * _pointsArray;
    _PKStrokeData * _strokeData;
    struct _PKStrokeID { 
        unsigned int clock; 
        unsigned char replicaUUID[16]; 
        unsigned int subclock; 
    }  _strokeID;
    _PKStrokeIDWrapper * _strokeIDWrapper;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _tightBounds;
    double  _timestamp;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    struct _PKStrokeID { 
        unsigned int clock; 
        unsigned char replicaUUID[16]; 
        unsigned int subclock; 
    }  _version;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _bounds;
@property (getter=_isHidden, nonatomic) bool _hidden;
@property (nonatomic) bool _inflight;
@property (setter=_setInputType:, nonatomic) long long _inputType;
@property (setter=_setStrokeID:, nonatomic) struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; } _strokeID;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _tightBounds;
@property (setter=_setTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } _transform;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _untransformedBounds;
@property (nonatomic) struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; } _version;
@property (retain) PKInk *ink;
@property (readonly) NSMutableArray *points;
@property double timestamp;

+ (long long)_asciiBitfieldIndexForX:(long long)arg1 y:(long long)arg2 width:(long long)arg3;
+ (long long)_asciiDimensionForBoundsDimension:(double)arg1;
+ (long long)compareStrokeWithIDWrapper:(id)arg1 toStrokeIDWrapper:(id)arg2;

- (void).cxx_destruct;
- (void)_addStrokePoint:(void*)arg1;
- (void)_applyTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)_ascii;
- (struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_baseValues;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateBounds:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_clipNormal;
- (struct CGPoint { double x1; double x2; })_clipOrigin;
- (struct PKCompressedStrokePoint { float x1; struct _PKPoint { float x_2_1_1; float x_2_1_2; } x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; }*)_completedPoints;
- (bool)_inflight;
- (struct _PKInflightStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; bool x7; bool x8; bool x9; bool x10; long long x11; double x12; }*)_inflightPoints;
- (long long)_inputType;
- (void)_insertStrokePoint:(void*)arg1 atIndex:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })_interpolatedPointForSplineSegment:(long long)arg1 t:(double)arg2;
- (double)_interpolatedTimeForSplineSegment:(long long)arg1 t:(double)arg2;
- (void)_invalidateBounds;
- (bool)_isClipped;
- (bool)_isHidden;
- (double)_lengthOfSplineSegment:(unsigned long long)arg1;
- (bool*)_newAsciiBitfield;
- (bool*)_newAsciiBitfieldWithWidth:(long long)arg1 height:(long long)arg2;
- (void*)_points;
- (unsigned long long)_pointsCount;
- (unsigned int)_randomSeed;
- (void)_removeLastStrokePoint;
- (void)_removeStrokePointAtIndex:(unsigned long long)arg1;
- (void)_replaceStrokePointAtIndex:(unsigned long long)arg1 withStrokePoint:(void*)arg2;
- (void)_setBaseValues:(struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1;
- (void)_setClipNormal:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setClipOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setInputType:(long long)arg1;
- (void)_setIsClipped:(bool)arg1;
- (void)_setPoints:(struct PKCompressedStrokePoint { float x1; struct _PKPoint { float x_2_1_1; float x_2_1_2; } x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; }*)arg1 count:(unsigned long long)arg2 copy:(bool)arg3;
- (void)_setStrokeID:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (void)_setStrokeIDWrapper:(id)arg1;
- (void)_setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGPoint { double x1; double x2; })_splineControlPoint:(long long)arg1;
- (id)_strokeData;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })_strokeID;
- (double)_strokeLength;
- (void*)_strokePointAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tightBounds;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_untransformedBounds;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })_version;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })clipNormal;
- (struct CGPoint { double x1; double x2; })clipOrigin;
- (long long)compareToStroke:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionExtended;
- (double)endTimestamp;
- (void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct Stroke { int (**x1)(); struct unique_ptr<drawing::Rectangle, std::__1::default_delete<drawing::Rectangle> > { struct __compressed_pair<drawing::Rectangle *, std::__1::default_delete<drawing::Rectangle> > { struct Rectangle {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<drawing::Point, std::__1::default_delete<drawing::Point> > { struct __compressed_pair<drawing::Point *, std::__1::default_delete<drawing::Point> > { struct Point {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<drawing::Point, std::__1::default_delete<drawing::Point> > { struct __compressed_pair<drawing::Point *, std::__1::default_delete<drawing::Point> > { struct Point {} *x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data {} *x_1_2_1; } x_6_1_1; } x6; unsigned long long x7; struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID> > { struct __compressed_pair<drawing::StrokeID *, std::__1::default_delete<drawing::StrokeID> > { struct StrokeID {} *x_1_2_1; } x_8_1_1; } x8; }*)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3 inks:(id)arg4;
- (id)initWithLegacyArchive:(const struct Command { int (**x1)(); struct unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point> > { struct __compressed_pair<legacy_drawing::Point *, std::__1::default_delete<legacy_drawing::Point> > { struct Point {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<legacy_drawing::Rectangle, std::__1::default_delete<legacy_drawing::Rectangle> > { struct __compressed_pair<legacy_drawing::Rectangle *, std::__1::default_delete<legacy_drawing::Rectangle> > { struct Rectangle {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point> > { struct __compressed_pair<legacy_drawing::Point *, std::__1::default_delete<legacy_drawing::Point> > { struct Point {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point> > { struct __compressed_pair<legacy_drawing::Point *, std::__1::default_delete<legacy_drawing::Point> > { struct Point {} *x_1_2_1; } x_5_1_1; } x5; struct unique_ptr<legacy_drawing::Color, std::__1::default_delete<legacy_drawing::Color> > { struct __compressed_pair<legacy_drawing::Color *, std::__1::default_delete<legacy_drawing::Color> > { struct Color {} *x_1_2_1; } x_6_1_1; } x6; }*)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;
- (id)initWithPath:(struct CGPath { }*)arg1 ink:(id)arg2 inputScale:(double)arg3;
- (id)initWithPath:(struct CGPath { }*)arg1 ink:(id)arg2 inputScale:(double)arg3 velocityForDistanceFunction:(id /* block */)arg4;
- (id)initWithStroke:(id)arg1 hidden:(bool)arg2 version:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg3;
- (id)initWithStroke:(id)arg1 hidden:(bool)arg2 version:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg3 ink:(id)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (id)initWithStroke:(id)arg1 hidden:(bool)arg2 version:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (id)initWithStroke:(id)arg1 points:(struct PKCompressedStrokePoint { float x1; struct _PKPoint { float x_2_1_1; float x_2_1_2; } x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; }*)arg2 count:(unsigned long long)arg3 copy:(bool)arg4;
- (id)ink;
- (bool)isClipped;
- (bool)isEqual:(id)arg1;
- (struct CGPath { }*)newPathRepresentation;
- (unsigned long long)oldHashForRandomSeedSoonToBeObsoleted;
- (id)points;
- (struct CGPoint { double x1; double x2; })readPointFromArchive:(const struct Point { int (**x1)(); float x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; } x4; }*)arg1;
- (struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })readPointFromLegacyArchive:(const struct Point { int (**x1)(); float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 1; } x9; }*)arg1 deltaFrom:(const struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; }*)arg2;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })readStrokeIDFromArchive:(const struct StrokeID { int (**x1)(); unsigned long long x2; unsigned long long x3; unsigned long long x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; } x5; }*)arg1 withSortedUUIDs:(id)arg2;
- (void)saveStrokeID:(const struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; }*)arg1 toArchive:(struct StrokeID { int (**x1)(); unsigned long long x2; unsigned long long x3; unsigned long long x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; } x5; }*)arg2 withSortedUUIDs:(id)arg3;
- (unsigned int)saveToArchive:(struct Stroke { int (**x1)(); struct unique_ptr<drawing::Rectangle, std::__1::default_delete<drawing::Rectangle> > { struct __compressed_pair<drawing::Rectangle *, std::__1::default_delete<drawing::Rectangle> > { struct Rectangle {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<drawing::Point, std::__1::default_delete<drawing::Point> > { struct __compressed_pair<drawing::Point *, std::__1::default_delete<drawing::Point> > { struct Point {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<drawing::Point, std::__1::default_delete<drawing::Point> > { struct __compressed_pair<drawing::Point *, std::__1::default_delete<drawing::Point> > { struct Point {} *x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data {} *x_1_2_1; } x_6_1_1; } x6; unsigned long long x7; struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID> > { struct __compressed_pair<drawing::StrokeID *, std::__1::default_delete<drawing::StrokeID> > { struct StrokeID {} *x_1_2_1; } x_8_1_1; } x8; }*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(bool)arg4;
- (void)setClipNormal:(struct CGPoint { double x1; double x2; })arg1;
- (void)setClipOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInk:(id)arg1;
- (void)setIsClipped:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)set_bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_hidden:(bool)arg1;
- (void)set_inflight:(bool)arg1;
- (void)set_tightBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_untransformedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_version:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (double)startTimestamp;
- (id)strokeIdentifier;
- (id)substrokeWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)timestamp;

@end
