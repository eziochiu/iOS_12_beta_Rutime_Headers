/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPencilAnnotationStorage : TSPObject <TSKPencilAnnotationStorage> {
    long long  _attachedLocation;
    long long  _attachedType;
    PKDrawing * _drawingForTextRecognition;
    TSPData * _encodedDrawingTSPData;
    struct CGPoint { 
        double x; 
        double y; 
    }  _markupOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalAttachedSize;
    struct CGPath { } * _path;
    TSUColor * _penColor;
    double  _percentOfPAContainedInParentRep;
    struct CGSize { 
        double width; 
        double height; 
    }  _rasterizedImageSize;
    TSPData * _rasterizedImageTSPData;
    unsigned long long  _textBaselinesTouchedCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unscaledBoundsOfStrokes;
    unsigned long long  _visibleStrokesCount;
}

@property (nonatomic) long long attachedLocation;
@property (nonatomic) long long attachedType;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centerOfStrokes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKDrawing *drawingForTextRecognition;
@property (nonatomic, readonly) NSData *encodedDrawing;
@property (nonatomic, readonly) TSPData *encodedDrawingTSPData;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } markupOffset;
@property (nonatomic, readonly) bool needsTextRecognition;
@property (nonatomic) struct CGSize { double x1; double x2; } originalAttachedSize;
@property (nonatomic, readonly) struct CGPath { }*path;
@property (nonatomic, readonly) TSUColor *penColor;
@property (nonatomic) double percentOfPAContainedInParentRep;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } rasterizedImageSize;
@property (nonatomic, readonly) TSPData *rasterizedImageTSPData;
@property (nonatomic, readonly) bool shouldResizeWithAnchor;
@property (nonatomic, readonly) bool shouldSplitAcrossAnchorRects;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long textBaselinesTouchedCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledBoundsOfStrokes;
@property (nonatomic) unsigned long long visibleStrokesCount;

- (void).cxx_destruct;
- (long long)attachedLocation;
- (long long)attachedType;
- (struct CGPoint { double x1; double x2; })centerOfStrokes;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)drawingForTextRecognition;
- (id)encodedDrawing;
- (id)encodedDrawingTSPData;
- (id)initWithContext:(id)arg1 markupOffset:(struct CGPoint { double x1; double x2; })arg2 rasterizedImage:(id)arg3 attachedLocation:(long long)arg4 attachedType:(long long)arg5 encodedDrawing:(id)arg6 path:(struct CGPath { }*)arg7 unscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 originalAttachedSize:(struct CGSize { double x1; double x2; })arg9 percentOfPAContainedInParentRep:(double)arg10 textBaselinesTouchedCount:(unsigned long long)arg11 visibleStrokesCount:(unsigned long long)arg12 penColor:(id)arg13;
- (id)initWithContext:(id)arg1 markupOffset:(struct CGPoint { double x1; double x2; })arg2 rasterizedImageTSPData:(id)arg3 attachedLocation:(long long)arg4 attachedType:(long long)arg5 encodedDrawing:(id)arg6 path:(struct CGPath { }*)arg7 unscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 originalAttachedSize:(struct CGSize { double x1; double x2; })arg9 percentOfPAContainedInParentRep:(double)arg10 textBaselinesTouchedCount:(unsigned long long)arg11 visibleStrokesCount:(unsigned long long)arg12 penColor:(id)arg13;
- (void)initializeTextRecognitionIfNeeded;
- (void)loadFromArchive:(const struct PencilAnnotationStorageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Point {} *x5; struct DataReference {} *x6; struct DataReference {} *x7; int x8; int x9; struct Path {} *x10; struct Point {} *x11; struct Size {} *x12; struct Size {} *x13; double x14; unsigned long long x15; unsigned long long x16; struct Color {} *x17; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (struct CGPoint { double x1; double x2; })markupOffset;
- (bool)needsTextRecognition;
- (struct CGSize { double x1; double x2; })originalAttachedSize;
- (struct CGPath { }*)path;
- (id)penColor;
- (double)percentOfPAContainedInParentRep;
- (struct CGSize { double x1; double x2; })rasterizedImageSize;
- (id)rasterizedImageTSPData;
- (void)saveToArchiver:(id)arg1;
- (void)setAttachedLocation:(long long)arg1;
- (void)setAttachedType:(long long)arg1;
- (void)setDrawingForTextRecognition:(id)arg1;
- (void)setMarkupOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalAttachedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPercentOfPAContainedInParentRep:(double)arg1;
- (void)setTextBaselinesTouchedCount:(unsigned long long)arg1;
- (void)setUnscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleStrokesCount:(unsigned long long)arg1;
- (bool)shouldResizeWithAnchor;
- (bool)shouldSplitAcrossAnchorRects;
- (unsigned long long)textBaselinesTouchedCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledBoundsOfStrokes;
- (unsigned long long)visibleStrokesCount;

@end
