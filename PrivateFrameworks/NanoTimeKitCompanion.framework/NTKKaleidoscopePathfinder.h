/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKKaleidoscopePathfinder : NSObject <NSSecureCoding> {
    int  _cellGridHeight;
    int  _cellGridWidth;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _dominanceGrid;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _path;
    int  _pathLength;
    float  _sampleRadiusX;
    float  _sampleRadiusY;
}

@property (nonatomic, readonly) int cellGridHeight;
@property (nonatomic, readonly) int cellGridWidth;
@property (nonatomic, readonly) int pathLength;

+ (id)pathfinderFromDirectory:(id)arg1;
+ (id)pathfinderFromFile:(id)arg1;
+ (id)pathfinderWithImage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)adjustPathStart;
- (int)cellGridHeight;
- (int)cellGridWidth;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (int)pathLength;
- (struct NTKKaleidoscopePathfinderPoint { double x1[4]; })pointForTime:(float)arg1;
- (bool)writeToDirectory:(id)arg1;
- (bool)writeToFile:(id)arg1;

@end
