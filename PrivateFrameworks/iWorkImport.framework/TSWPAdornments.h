/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPAdornments : NSObject {
    double  _advance;
    double  _ascent;
    struct vector<TSWPAttachmentPosition, std::__1::allocator<TSWPAttachmentPosition> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<TSWPAttachmentPosition *, std::__1::allocator<TSWPAttachmentPosition> > { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _attachmentPositions;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _charIndexes;
    struct CGColor { } * _color;
    double  _descent;
    struct __CTFont { } * _font;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__value_; 
        } __end_cap_; 
    }  _glyphs;
    int  _location;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > { 
        struct CGPoint {} *__begin_; 
        struct CGPoint {} *__end_; 
        struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { 
            struct CGPoint {} *__value_; 
        } __end_cap_; 
    }  _positions;
    struct vector<CGRect, std::__1::allocator<CGRect> > { 
        struct CGRect {} *__begin_; 
        struct CGRect {} *__end_; 
        struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { 
            struct CGRect {} *__value_; 
        } __end_cap_; 
    }  _rects;
    bool  _shouldRotate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textPosition;
    int  _type;
    double  _verticalAdjustment;
}

@property (nonatomic, readonly) double advance;
@property (nonatomic, readonly) double ascent;
@property (nonatomic, readonly) unsigned long long attachmentPositionCount;
@property (nonatomic, readonly) struct { unsigned long long x1; double x2; }*attachmentPositions;
@property (nonatomic, readonly) unsigned long long charIndexCount;
@property (nonatomic, readonly) unsigned long long*charIndexes;
@property (nonatomic, retain) struct CGColor { }*color;
@property (nonatomic, readonly) double descent;
@property (nonatomic, retain) struct __CTFont { }*font;
@property (nonatomic, readonly) unsigned long long glyphCount;
@property (nonatomic, readonly) unsigned short*glyphs;
@property (nonatomic) int location;
@property (nonatomic, readonly) unsigned long long positionCount;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; }*positions;
@property (nonatomic, readonly) unsigned long long rectCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*rects;
@property (nonatomic) bool shouldRotate;
@property (nonatomic) struct CGPoint { double x1; double x2; } textPosition;
@property (nonatomic, readonly) int type;
@property (nonatomic) double verticalAdjustment;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAdornmentWithAttachmentPosition:(struct { unsigned long long x1; double x2; })arg1;
- (void)addAdornmentWithCharIndex:(unsigned long long)arg1 point:(struct CGPoint { double x1; double x2; })arg2 glyph:(unsigned short)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)addAdornmentWithPoint:(struct CGPoint { double x1; double x2; })arg1 glyph:(unsigned short)arg2;
- (double)advance;
- (double)ascent;
- (unsigned long long)attachmentPositionCount;
- (struct { unsigned long long x1; double x2; }*)attachmentPositions;
- (unsigned long long)charIndexCount;
- (unsigned long long*)charIndexes;
- (struct CGColor { }*)color;
- (double)descent;
- (struct __CTFont { }*)font;
- (unsigned long long)glyphCount;
- (unsigned short*)glyphs;
- (void)incrementCharIndexes:(long long)arg1 startingAt:(unsigned long long)arg2;
- (id)initWithType:(int)arg1 color:(struct CGColor { }*)arg2 font:(struct __CTFont { }*)arg3;
- (int)location;
- (unsigned long long)positionCount;
- (struct CGPoint { double x1; double x2; }*)positions;
- (unsigned long long)rectCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)rects;
- (void)removeAdornmentAt:(unsigned long long)arg1;
- (void)setAscent:(double)arg1 descent:(double)arg2 advance:(double)arg3;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setFont:(struct __CTFont { }*)arg1;
- (void)setLocation:(int)arg1;
- (void)setShouldRotate:(bool)arg1;
- (void)setTextPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVerticalAdjustment:(double)arg1;
- (bool)shouldRotate;
- (struct CGPoint { double x1; double x2; })textPosition;
- (int)type;
- (double)verticalAdjustment;

@end
