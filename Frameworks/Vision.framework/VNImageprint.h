/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageprint : NSObject <NSCopying, NSSecureCoding, VNObservationsCacheKeyProviding, VNRequestRevisionProviding, VNSerializing, VNSerializingInternal> {
    VNMPImageDescriptor * _descriptor;
    unsigned long long  _requestRevision;
    unsigned long long  _type;
    unsigned long long  _version;
}

@property (nonatomic, retain) VNMPImageDescriptor *descriptor;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (nonatomic, readonly) unsigned long long serializedLength;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) unsigned long long version;

+ (unsigned long long)currentVersion;
+ (bool)isSerializedImageprintCompatibleWithCurrentVersion:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptor;
- (id)distanceToImageprint:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageDescriptor:(id)arg1 type:(unsigned long long)arg2 requestRevision:(unsigned long long)arg3;
- (id)initWithState:(id)arg1 error:(id*)arg2;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (id)observationsCacheKey;
- (unsigned long long)requestRevision;
- (id)serializeStateAndReturnError:(id*)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;
- (void)setDescriptor:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (unsigned long long)version;

@end
