/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVFaceprint : PVObject {
    NSData * _faceprintData;
    unsigned int  _faceprintVersion;
}

@property (nonatomic, retain) NSData *faceprintData;
@property (nonatomic) unsigned int faceprintVersion;

+ (id)faceprintWithFaceprintData:(id)arg1 faceprintVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (void)_setPropertiesFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)faceprintData;
- (unsigned int)faceprintVersion;
- (bool)getDistance:(float*)arg1 toOtherFaceprint:(id)arg2 error:(id*)arg3;
- (void)setFaceprintData:(id)arg1;
- (void)setFaceprintVersion:(unsigned int)arg1;

@end
