/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILayerHostView : UIView

@property (nonatomic) unsigned int contextID;
@property (nonatomic) bool inheritsSecurity;
@property (nonatomic, readonly, retain) CALayerHost *layerHost;

+ (Class)layerClass;

- (unsigned int)contextID;
- (void)dealloc;
- (bool)inheritsSecurity;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layerHost;
- (void)setContextID:(unsigned int)arg1;
- (void)setInheritsSecurity:(bool)arg1;

@end
