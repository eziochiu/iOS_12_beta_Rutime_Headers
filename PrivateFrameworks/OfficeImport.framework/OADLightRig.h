/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLightRig : NSObject <NSCopying> {
    int  mDirection;
    OADRotation3D * mRotation;
    int  mType;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)direction;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)rotation;
- (void)setDirection:(int)arg1;
- (void)setRotation:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
