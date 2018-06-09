/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoGizmoInitiatedDeletePassRequest : PBRequest <NSCopying> {
    NSString * _passID;
}

@property (nonatomic, retain) NSString *passID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (bool)readFrom:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
