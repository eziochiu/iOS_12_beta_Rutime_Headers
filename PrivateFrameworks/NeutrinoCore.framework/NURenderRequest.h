/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderRequest : NSObject <NSCopying> {
    id /* block */  _completionBlock;
    long long  _copiedFromRequestNumber;
    <NUDevice> * _device;
    NUComposition * _internalComposition;
    NSString * _name;
    long long  _parentRequestNumber;
    NSArray * _pipelineFilters;
    NUPriority * _priority;
    NURenderContext * _renderContext;
    long long  _requestNumber;
    NSObject<OS_dispatch_queue> * _responseQueue;
    long long  _sampleMode;
    bool  _shouldCoalesceUpdates;
    double  _submitTime;
    id  _voucher;
}

@property (copy) id /* block */ completionBlock;
@property (nonatomic, copy) NUComposition *composition;
@property (nonatomic, retain) <NUDevice> *device;
@property (copy) NUComposition *internalComposition;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *pipelineFilters;
@property (nonatomic, retain) NUPriority *priority;
@property (nonatomic, retain) NURenderContext *renderContext;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *responseQueue;
@property (nonatomic) long long sampleMode;
@property bool shouldCoalesceUpdates;
@property double submitTime;
@property (retain) id voucher;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)composition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)device;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)internalComposition;
- (long long)mediaComponentType;
- (id)name;
- (id)newRenderJob;
- (id)pipelineFilters;
- (id)priority;
- (id)renderContext;
- (id)responseQueue;
- (long long)sampleMode;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setComposition:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setInternalComposition:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPipelineFilters:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setRenderContext:(id)arg1;
- (void)setResponseQueue:(id)arg1;
- (void)setSampleMode:(long long)arg1;
- (void)setShouldCoalesceUpdates:(bool)arg1;
- (void)setSubmitTime:(double)arg1;
- (void)setVoucher:(id)arg1;
- (bool)shouldCoalesceUpdates;
- (void)submitGeneric:(id /* block */)arg1;
- (double)submitTime;
- (void)takePropertiesFromRequest:(id)arg1;
- (id)voucher;

@end
