/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCBarBackgroundView : UIVisualEffectView <DOCAppearanceProtocol> {
    unsigned long long  _currentStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)effectForStyle:(unsigned long long)arg1;

- (id)initWithAppearance:(id)arg1;
- (void)updateAppearance:(id)arg1;

@end
