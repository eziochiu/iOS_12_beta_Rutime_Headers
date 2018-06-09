/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFaceDetectionNode : BWFanOutNode {
    struct opaqueCMFormatDescription { } * _boxedFormatDescription;
    BWNodeOutput * _boxedMetadataOutput;
    bool  _boxedMetadataOutputEnabled;
    struct OpaqueCMBlockBuffer { } * _emptyMetadataSampleData;
    int  _lastBoxedFaceCount;
    int  _lastObjectFaceCount;
    unsigned int  _localIDOfDetectedFaceBounds_BE;
    unsigned int  _localIDOfDetectedFaceFaceID_BE;
    unsigned int  _localIDOfDetectedFaceRoll_BE;
    unsigned int  _localIDOfDetectedFaceYaw_BE;
    unsigned int  _localIDOfDetectedFace_BE;
    BWNodeOutput * _metadataObjectOutput;
    bool  _metadataObjectOutputEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevBoxedFaceDur;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevBoxedFacePTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevBoxedNoFacePTS;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectOfInterest;
}

@property (readonly) BWNodeOutput *boxedMetadataOutput;
@property (readonly) BWNodeOutput *metadataObjectOutput;

+ (void)initialize;

- (struct OpaqueCMBlockBuffer { }*)_getEmptyMetadataSampleData;
- (void)_renderSampleBufferForBoxedMetadataOutput:(struct opaqueCMSampleBuffer { }*)arg1 withFaceArray:(id)arg2;
- (void)_renderSampleBufferForMetadataObjectOutput:(struct opaqueCMSampleBuffer { }*)arg1 withFaceArray:(id)arg2;
- (id)boxedMetadataOutput;
- (bool)boxedMetadataOutputEnabled;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)metadataObjectOutput;
- (bool)metadataObjectOutputEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterest;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setBoxedMetadataOutputEnabled:(bool)arg1;
- (void)setMetadataObjectOutputEnabled:(bool)arg1;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
