/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWZoomDelayBuffer : NSObject {
    unsigned int  _currentZoomDelay;
    int  _currentZoomDirection;
    unsigned int  _maxZoomDelay;
    int  _operatingMode;
    struct { float x1; int x2; bool x3; } * _zoomRequestBuffer;
    unsigned int  _zoomRequestBufferIndex;
}

@property (nonatomic) int operatingMode;
@property (nonatomic, readonly) unsigned int zoomDelay;

- (void)addZoomRequest:(struct { float x1; int x2; bool x3; })arg1;
- (void)dealloc;
- (id)initWithMaxZoomDelay:(unsigned int)arg1;
- (int)operatingMode;
- (void)setOperatingMode:(int)arg1;
- (void)updateZoomDelay:(unsigned int)arg1;
- (unsigned int)zoomDelay;
- (struct { float x1; int x2; bool x3; })zoomRequestForISPAppliedZoomFactor:(float)arg1;

@end
