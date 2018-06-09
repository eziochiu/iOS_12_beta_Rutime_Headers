/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PDImageRequest : PHMediaRequest {
    PHImageRequestBehaviorSpec * _behaviorSpec;
    PDImageDecoder * _chosenDecoder;
    unsigned long long  _decodeRequestID;
    <PHImageRequestDelegate> * _delegate;
    PHImageDisplaySpec * _displaySpec;
    bool  _forceIgnoreCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) PHImageRequestBehaviorSpec *behaviorSpec;
@property (nonatomic) <PHImageRequestDelegate> *delegate;
@property (nonatomic, retain) PHImageDisplaySpec *displaySpec;

- (void).cxx_destruct;
- (void)_tryChoosingFromFromHintsForRequestSize:(struct CGSize { double x1; double x2; })arg1 excludingKeys:(id)arg2;
- (void)_tryChoosingFromFullResourceListForTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (id)behaviorSpec;
- (void)cancel;
- (id)delegate;
- (id)description;
- (id)displaySpec;
- (void)handleAvailabilityChangeForResource:(id)arg1 locallyAvailable:(bool)arg2 info:(id)arg3 error:(id)arg4;
- (id)initWithRequestID:(int)arg1 contextID:(unsigned long long)arg2 managerID:(unsigned long long)arg3 asset:(id)arg4 displaySpec:(id)arg5 behaviorSepc:(id)arg6;
- (bool)isSynchronous;
- (void)prepareForReuse;
- (void)setBehaviorSpec:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaySpec:(id)arg1;
- (void)startRequest;

@end
