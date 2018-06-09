/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerZoneHealthState : NSObject <NSCopying, NSSecureCoding> {
    BRFieldCKInfo * _ckInfo;
    int  _state;
}

@property (nonatomic, readonly) BRFieldCKInfo *ckInfo;
@property (nonatomic, readonly) int state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ckInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCKInfo:(id)arg1 state:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerZoneHealthState:(id)arg1;
- (int)state;

@end
