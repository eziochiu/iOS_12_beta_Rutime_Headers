/* made by EzioChiu.
 */

@protocol PVPersonProtocol <NSObject>

@required

- (unsigned long long)faceCount;
- (bool)favorite;
- (bool)hidden;
- (bool)isVerified;
- (<PVFaceProtocol> *)keyFace;
- (NSString *)localIdentifier;
- (long long)manualOrder;
- (NSString *)name;
- (void)pv_addMergeCandidatePersons:(id <PVFetchResultProtocol>)arg1;
- (void)setIsVerified:(bool)arg1;
- (void)setKeyFace:(id <PVFaceProtocol>)arg1;
- (void)setManualOrder:(long long)arg1;
- (long long)verifiedType;

@end
