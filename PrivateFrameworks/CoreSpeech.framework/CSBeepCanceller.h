/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSBeepCanceller : NSObject {
    struct unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller> > { 
        struct __compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller> > { 
            struct BatchBeepCanceller {} *__value_; 
        } __ptr_; 
    }  _beepCanceller;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__value_; 
        } __end_cap_; 
    }  _beepFloatVec;
    <CSBeepCancellerDelegate> * _delegate;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__value_; 
        } __end_cap_; 
    }  _floatBuffer;
    unsigned long long  _numTotalInputSamples;
    unsigned long long  _numTotalOutputSamples;
    NSObject<OS_dispatch_queue> * _queue;
    struct vector<short, std::__1::allocator<short> > { 
        short *__begin_; 
        short *__end_; 
        struct __compressed_pair<short *, std::__1::allocator<short> > { 
            short *__value_; 
        } __end_cap_; 
    }  _shortBuffer;
}

@property (nonatomic) <CSBeepCancellerDelegate> *delegate;
@property (nonatomic, readonly) NSDictionary *metrics;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelBeepFromSamples:(id)arg1 timestamp:(unsigned long long)arg2;
- (id)delegate;
- (id)init;
- (id)metrics;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)willBeep;

@end
