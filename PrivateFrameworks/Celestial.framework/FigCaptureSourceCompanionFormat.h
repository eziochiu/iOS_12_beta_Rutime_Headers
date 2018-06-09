/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceCompanionFormat : NSObject {
    struct { 
        int width; 
        int height; 
    }  _cropDimensions;
    struct { 
        int width; 
        int height; 
    }  _fesDimensions;
    int  _formatIndex;
    bool  _option2;
}

@property (readonly) struct { int x1; int x2; } cropDimensions;
@property (readonly) struct { int x1; int x2; } fesDimensions;
@property (readonly) int formatIndex;
@property (readonly) bool option2;

- (struct { int x1; int x2; })cropDimensions;
- (void)dealloc;
- (id)description;
- (struct { int x1; int x2; })fesDimensions;
- (int)formatIndex;
- (id)initWithCompanionFormatDictionary:(id)arg1;
- (bool)option2;

@end
