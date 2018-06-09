/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVFaceGroup : PVObject {
    NSArray * _faces;
    long long  _personBuilderState;
    NSString * _personLocalIdentifier;
    NSString * _representativeFaceLocalIdentifier;
}

@property (nonatomic, retain) NSArray *faces;
@property (nonatomic) long long personBuilderState;
@property (nonatomic, copy) NSString *personLocalIdentifier;
@property (nonatomic, copy) NSString *representativeFaceLocalIdentifier;

- (void).cxx_destruct;
- (void)_setPropertiesFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)faces;
- (id)initWithFaceGroup:(id)arg1;
- (long long)personBuilderState;
- (id)personLocalIdentifier;
- (id)representativeFaceLocalIdentifier;
- (void)setFaces:(id)arg1;
- (void)setPersonBuilderState:(long long)arg1;
- (void)setPersonLocalIdentifier:(id)arg1;
- (void)setRepresentativeFaceLocalIdentifier:(id)arg1;

@end
