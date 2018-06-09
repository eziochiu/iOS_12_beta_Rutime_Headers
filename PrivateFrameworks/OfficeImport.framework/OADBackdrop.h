/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBackdrop : NSObject <NSCopying> {
    OADPoint3D * mAnchor;
    OADVector3D * mNormal;
    OADVector3D * mUp;
}

- (id)anchor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)normal;
- (void)setAnchor:(id)arg1;
- (void)setNormal:(id)arg1;
- (void)setUp:(id)arg1;
- (id)up;

@end
