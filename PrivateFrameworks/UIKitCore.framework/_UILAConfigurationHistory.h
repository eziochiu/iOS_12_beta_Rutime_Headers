/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILAConfigurationHistory : NSObject <NSCopying, _UILAPropertySource> {
    long long  _axis;
    bool  _hasEstablishedBaseValues;
    bool  _inLayoutArrangementUpdateSection;
    bool  _layoutFillsCanvas;
    bool  _layoutUsesCanvasMarginsWhenFilling;
    NSMutableSet * _newlyHiddenItems;
    NSMutableSet * _newlyUnhiddenItems;
}

@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasEstablishedBaseValues;
@property (readonly) unsigned long long hash;
@property (getter=isInLayoutArrangementUpdateSection, nonatomic) bool inLayoutArrangementUpdateSection;
@property (nonatomic) bool layoutFillsCanvas;
@property (nonatomic) bool layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newlyHiddenItems;
- (id)_newlyUnhiddenItems;
- (long long)axis;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasEstablishedBaseValues;
- (id)init;
- (bool)isInLayoutArrangementUpdateSection;
- (bool)layoutFillsCanvas;
- (bool)layoutUsesCanvasMarginsWhenFilling;
- (void)setAxis:(long long)arg1;
- (void)setHasEstablishedBaseValues:(bool)arg1;
- (void)setInLayoutArrangementUpdateSection:(bool)arg1;
- (void)setLayoutFillsCanvas:(bool)arg1;
- (void)setLayoutUsesCanvasMarginsWhenFilling:(bool)arg1;

@end
