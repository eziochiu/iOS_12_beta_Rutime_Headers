/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPFaceDetectionRange : NSObject {
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
    unsigned long long  _faceID;
    unsigned long long  _flags;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _last;
    unsigned long long  _position;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _start;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property unsigned long long faceID;
@property unsigned long long flags;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } last;
@property unsigned long long position;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } start;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (unsigned long long)faceID;
- (unsigned long long)flags;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })last;
- (unsigned long long)position;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFaceID:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setLast:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPosition:(unsigned long long)arg1;
- (void)setStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })start;

@end
