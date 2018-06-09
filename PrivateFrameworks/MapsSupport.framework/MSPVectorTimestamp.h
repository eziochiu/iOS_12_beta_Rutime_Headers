/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPVectorTimestamp : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _timestampValues;
}

@property (nonatomic, readonly) NSData *serializedRepresentation;
@property (getter=_timestampValues, nonatomic, readonly) NSDictionary *timestampValues;

+ (bool)supportsSecureCoding;
+ (id)timestampAfterTimestamps:(id)arg1 increasingClientIdentifier:(id)arg2;

- (void).cxx_destruct;
- (bool)_compare:(id)arg1 comparisonResult:(out long long*)arg2 isOppositeCheck:(bool)arg3;
- (id)_initWithTimestampValues:(id)arg1;
- (id)_timestampValues;
- (bool)compare:(id)arg1 comparisonResult:(out long long*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initInitialTimestampWithClientIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serializedRepresentation;
- (id)timestampIncreasingClientIdentifier:(id)arg1;

@end
