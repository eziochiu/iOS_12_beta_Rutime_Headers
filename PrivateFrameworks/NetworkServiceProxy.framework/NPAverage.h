/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPAverage : NSObject <NSSecureCoding> {
    NSMutableArray * _samples;
    unsigned long long  _size;
}

@property (readonly) unsigned long long average;
@property (readonly) bool isAnyValid;
@property (readonly) bool isLastValid;
@property (retain) NSMutableArray *samples;
@property unsigned long long size;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSample:(unsigned long long)arg1;
- (void)addSamples:(id)arg1;
- (unsigned long long)average;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleSize:(unsigned long long)arg1;
- (bool)isAnyValid;
- (bool)isLastValid;
- (id)samples;
- (void)setSamples:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (id)shortDescription;
- (unsigned long long)size;

@end
