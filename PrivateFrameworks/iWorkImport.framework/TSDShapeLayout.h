/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDShapeLayout : TSDStyledLayout {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedAlignmentFrame;
    TSDBezierPath * mCachedClippedPath;
    TSDEditableBezierPathSource * mCachedEditableBezierPathSource;
    TSDBezierPath * mCachedPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedPathBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedPathBoundsWithoutStroke;
    bool  mCachedPathIsLineSegment;
    bool  mCachedPathIsOpen;
    TSDPathSource * mCachedPathSource;
    TSDFill * mDynamicFill;
    TSDMutableStroke * mDynamicStroke;
    long long  mHeadCutSegment;
    double  mHeadCutT;
    double  mHeadLineEndAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  mHeadLineEndPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  mHeadPoint;
    TSDInfoGeometry * mInitialInfoGeometry;
    TSDPathSource * mProvidedPathSource;
    TSDInfoGeometry * mResizeInfoGeometry;
    TSDPathSource * mResizePathSource;
    struct { 
        unsigned int path : 1; 
        unsigned int pathBounds : 1; 
        unsigned int pathBoundsWithoutStroke : 1; 
        unsigned int pathIsOpen : 1; 
        unsigned int pathIsLineSegment : 1; 
        unsigned int alignmentFrame : 1; 
        unsigned int headAndTail : 1; 
        unsigned int headLineEnd : 1; 
        unsigned int tailLineEnd : 1; 
        unsigned int clippedPath : 1; 
    }  mShapeInvalidFlags;
    TSDPathSource * mShrunkenPathSource;
    long long  mTailCutSegment;
    double  mTailCutT;
    double  mTailLineEndAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  mTailLineEndPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  mTailPoint;
}

@property (nonatomic, retain) TSDFill *dynamicFill;
@property (nonatomic, readonly) TSDFill *fill;

- (void)aliasPathForScale:(double)arg1 adjustedStroke:(id*)arg2 adjustedPath:(id*)arg3 startDelta:(struct CGPoint { double x1; double x2; }*)arg4 endDelta:(struct CGPoint { double x1; double x2; }*)arg5;
- (void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id*)arg3 adjustedPath:(id*)arg4 startDelta:(struct CGPoint { double x1; double x2; }*)arg5 endDelta:(struct CGPoint { double x1; double x2; }*)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })aliasedAlignmentFrameForScale:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrameInRoot;
- (void)beginDynamicOperation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (bool)canBeIntersected;
- (bool)canResetTextAndObjectHandles;
- (struct CGPoint { double x1; double x2; })centerForConnecting;
- (id)clippedPathForLineEnds;
- (id)computeLayoutGeometry;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeLayoutTransform;
- (void)dealloc;
- (id)dynamicFill;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (id)editablePathSource;
- (void)endDynamicOperation;
- (id)fill;
- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned long long)arg1;
- (double)headLineEndAngle;
- (struct CGPoint { double x1; double x2; })headLineEndPoint;
- (struct CGPoint { double x1; double x2; })headPoint;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(bool)arg1;
- (id)initWithInfo:(id)arg1;
- (id)initialInfoGeometry;
- (void)invalidateFrame;
- (void)invalidatePath;
- (void)invalidatePathBounds;
- (bool)isBeingManipulated;
- (bool)isInvisible;
- (bool)isInvisibleAutosizingShape;
- (bool)isStrokeBeingManipulated;
- (bool)isTailEndOnLeft;
- (id)layoutGeometryFromInfo;
- (id)layoutInfoGeometry;
- (double)lineEndScale;
- (struct CGSize { double x1; double x2; })minimumSize;
- (unsigned long long)numberOfControlKnobs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_boundsOfLineEndForHead:(bool)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)p_cachedPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_cachedPathBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_cachedPathBoundsWithoutStroke;
- (bool)p_cachedPathIsLineSegment;
- (bool)p_cachedPathIsOpen;
- (void)p_computeAngle:(double*)arg1 point:(struct CGPoint { double x1; double x2; }*)arg2 cutSegment:(long long*)arg3 cutT:(double*)arg4 forLineEndAtHead:(bool)arg5;
- (id)p_createClippedPath;
- (void)p_invalidateClippedPath;
- (void)p_invalidateHead;
- (void)p_invalidateTail;
- (id)p_unitePath:(id)arg1 withLineEndForHead:(bool)arg2 stroke:(id)arg3;
- (void)p_updateResizeInfoGeometryFromResizePathSource;
- (void)p_validateHeadAndTail;
- (void)p_validateHeadLineEnd;
- (void)p_validateTailLineEnd;
- (id)path;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pathBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pathBoundsWithoutStroke;
- (bool)pathIsLineSegment;
- (bool)pathIsOpen;
- (id)pathSource;
- (void)processChangedProperty:(int)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setDynamicFill:(id)arg1;
- (void)setGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shapeFrameWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)shapeInfo;
- (bool)shouldBeDisplayedInShowMode;
- (id)smartPathSource;
- (id)stroke;
- (id)strokeHeadLineEnd;
- (id)strokeTailLineEnd;
- (bool)supportsResize;
- (bool)supportsRotation;
- (double)tailLineEndAngle;
- (struct CGPoint { double x1; double x2; })tailLineEndPoint;
- (struct CGPoint { double x1; double x2; })tailPoint;
- (struct CGPoint { double x1; double x2; })unclippedHeadPoint;
- (struct CGPoint { double x1; double x2; })unclippedTailPoint;

@end
