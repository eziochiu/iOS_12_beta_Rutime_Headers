/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _DUIImageComponent : _DUIImageComponentWithoutSlot {
    unsigned int  _contextID;
    bool  _hidesImage;
    unsigned long long  _renderID;
    unsigned int  _slotID;
}

@property (nonatomic) unsigned int contextID;
@property (nonatomic) bool hidesImage;
@property (nonatomic) unsigned long long renderID;
@property (nonatomic, readonly) bool representsPortal;
@property (nonatomic) unsigned int slotID;

+ (bool)supportsSecureCoding;

- (void)_configurePortalLayer:(id)arg1;
- (id)addPortalLayerToView:(id)arg1;
- (unsigned int)contextID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hidesImage;
- (id)imageComponentWithoutSlot;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)portalView;
- (unsigned long long)renderID;
- (bool)representsPortal;
- (void)setContextID:(unsigned int)arg1;
- (void)setHidesImage:(bool)arg1;
- (void)setRenderID:(unsigned long long)arg1;
- (void)setSlotID:(unsigned int)arg1;
- (unsigned int)slotID;

@end
