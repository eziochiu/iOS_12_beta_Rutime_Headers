/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDPlaceholder : NSObject {
    int  mBoundsTrack;
    unsigned int  mIndex;
    int  mOrientation;
    int  mSize;
    int  mType;
}

+ (bool)isNonTextType:(int)arg1;
+ (bool)isTextType:(int)arg1;

- (int)boundsTrack;
- (id)description;
- (unsigned int)index;
- (id)init;
- (int)orientation;
- (void)setBoundsTrack:(int)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setOrientation:(int)arg1;
- (void)setSize:(int)arg1;
- (void)setType:(int)arg1;
- (int)size;
- (int)type;

@end
