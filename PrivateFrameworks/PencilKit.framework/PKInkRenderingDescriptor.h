/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkRenderingDescriptor : NSObject {
    unsigned long long  _blendMode;
    NSString * _identifier;
    PKInkParticleDescriptor * _particleDescriptor;
    unsigned long long  _type;
    unsigned long long  _version;
}

@property (nonatomic) unsigned long long blendMode;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) PKInkParticleDescriptor *particleDescriptor;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (unsigned long long)blendMode;
- (id)identifier;
- (id)particleDescriptor;
- (void)setBlendMode:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParticleDescriptor:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)type;
- (unsigned long long)version;

@end
