/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKMotionManager : NSObject {
    NSMutableArray * _clients;
    void _currentRollPitch;
    CADisplayLink * _displayLink;
    CMMotionManager * _motion;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    }  _restingQuaternion;
    id /* block */  _rollPitchForDeviceMotionHandler;
}

@property (nonatomic, copy) id /* block */ rollPitchForDeviceMotionHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isClientRegistered:(id)arg1;
- (void)registerClient:(id)arg1;
- (id /* block */)rollPitchForDeviceMotionHandler;
- (void)setRollPitchForDeviceMotionHandler:(id /* block */)arg1;
- (void)unregisterClient:(id)arg1;
- (void)updateWithMotion:(id)arg1;

@end
