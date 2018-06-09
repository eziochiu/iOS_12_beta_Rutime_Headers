/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMediaRequest : NSObject <PHRecyclableObject> {
    PHAsset * _asset;
    bool  _cancelled;
    unsigned long long  _contextID;
    long long  _contextType;
    unsigned long long  _managerID;
    int  _requestID;
}

@property (nonatomic, retain) PHAsset *asset;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic) unsigned long long contextID;
@property (nonatomic) long long contextType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long managerID;
@property (nonatomic) int requestID;
@property (readonly) Class superclass;
@property (getter=isSynchronous, nonatomic, readonly) bool synchronous;

- (void).cxx_destruct;
- (id)asset;
- (void)cancel;
- (unsigned long long)contextID;
- (long long)contextType;
- (void)handleAvailabilityChangeForResource:(id)arg1 locallyAvailable:(bool)arg2 info:(id)arg3 error:(id)arg4;
- (id)identifierString;
- (id)initWithRequestID:(int)arg1 contextID:(unsigned long long)arg2 managerID:(unsigned long long)arg3 asset:(id)arg4;
- (bool)isCancelled;
- (bool)isSynchronous;
- (unsigned long long)managerID;
- (void)prepareForReuse;
- (int)requestID;
- (void)setAsset:(id)arg1;
- (void)setContextID:(unsigned long long)arg1;
- (void)setContextType:(long long)arg1;
- (void)setManagerID:(unsigned long long)arg1;
- (void)setRequestID:(int)arg1;
- (void)startRequest;

@end
