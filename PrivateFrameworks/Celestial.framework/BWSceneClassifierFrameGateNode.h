/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSceneClassifierFrameGateNode : BWNode {
    bool  _discardsBlurryFrames;
    int  _inputFrameCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastEmittedPTS;
    int  _maxFrameRate;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (bool)discardsBlurryFrames;
- (id)initWithMaxOutputFrameRate:(int)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDiscardsBlurryFrames:(bool)arg1;

@end
