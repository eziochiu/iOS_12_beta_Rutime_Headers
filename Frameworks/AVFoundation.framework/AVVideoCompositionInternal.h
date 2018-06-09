/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoCompositionInternal : NSObject {
    AVVideoCompositionCoreAnimationTool * animationTool;
    bool  auxiliaryTrackLayerSetLast;
    NSString * builtInCompositorName;
    unsigned long long  changeSeed;
    NSString * colorPrimaries;
    NSString * colorTransferFunction;
    NSString * colorYCbCrMatrix;
    Class  customCompositorClass;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  frameDuration;
    NSArray * instructions;
    float  renderScale;
    struct CGSize { 
        double width; 
        double height; 
    }  renderSize;
    int  sourceTrackIDForFrameTiming;
}

@end
