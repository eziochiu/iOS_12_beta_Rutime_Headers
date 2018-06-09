/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNEspressoModelImageprint : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding, VNSerializing> {
    unsigned long long  _confidenceScoreType;
    NSData * _descriptorData;
    long long  _distanceMode;
    unsigned long long  _elementCount;
    NSDictionary * _labelsAndConfidence;
    unsigned long long  _lengthInBytes;
    unsigned long long  _requestRevision;
    NSString * _version;
}

@property (nonatomic, readonly) unsigned long long confidenceScoreType;
@property (retain) NSData *descriptorData;
@property long long distanceMode;
@property unsigned long long elementCount;
@property (copy) NSDictionary *labelsAndConfidence;
@property unsigned long long lengthInBytes;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (copy) NSString *version;

+ (unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)confidenceScoreType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptorData;
- (long long)distanceMode;
- (unsigned long long)elementCount;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 lengthInBytes:(unsigned long long)arg3 labelsAndConfidence:(id)arg4 requestRevision:(unsigned long long)arg5;
- (id)initWithState:(id)arg1 error:(id*)arg2;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (id)labelsAndConfidence;
- (unsigned long long)lengthInBytes;
- (unsigned long long)requestRevision;
- (id)serializeStateAndReturnError:(id*)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;
- (void)setDescriptorData:(id)arg1;
- (void)setDistanceMode:(long long)arg1;
- (void)setElementCount:(unsigned long long)arg1;
- (void)setLabelsAndConfidence:(id)arg1;
- (void)setLengthInBytes:(unsigned long long)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
