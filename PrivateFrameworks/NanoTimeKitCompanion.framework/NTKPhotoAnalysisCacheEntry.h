/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPhotoAnalysisCacheEntry : NSObject <NSSecureCoding> {
    NTKPhotoAnalysis * _analysis;
    int  _sequenceNumber;
}

@property (nonatomic, retain) NTKPhotoAnalysis *analysis;
@property (nonatomic) int sequenceNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analysis;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)sequenceNumber;
- (void)setAnalysis:(id)arg1;
- (void)setSequenceNumber:(int)arg1;

@end
