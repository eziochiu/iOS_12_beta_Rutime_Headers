/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigSmartcamClassifierEspresso : NSObject <FigSmartcamClassifier> {
    struct { 
        int major; 
        int minor; 
        int minor2; 
    }  _classifierVersion;
    void * _ctx;
    struct { 
        void *data; 
        void *reserved; 
        unsigned long long dim[4]; 
        unsigned long long stride[4]; 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long channels; 
        unsigned long long batch_number; 
        unsigned long long sequence_length; 
        unsigned long long stride_width; 
        unsigned long long stride_height; 
        unsigned long long stride_channels; 
        unsigned long long stride_batch_number; 
        unsigned long long stride_sequence_length; 
        int storage_type; 
    }  _espresso_output_buffer;
    struct OpaqueFigCaptureISPProcessingSession { } * _ispProcessingSession;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    void * _plan;
    int  _processingType;
    bool  _useCVA;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (int)_prepareISPProcessingSession;
- (bool)allocateResources;
- (struct { int x1; int x2; int x3; })classifierVersion;
- (bool)classify:(struct __CVBuffer { }*)arg1 confidences:(float*)arg2;
- (void)dealloc;
- (id)initWithProcessingType:(int)arg1 ispProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg2;
- (bool)releaseResources;

@end
